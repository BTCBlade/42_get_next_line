/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 01:44:22 by tochen            #+#    #+#             */
/*   Updated: 2017/05/11 02:47:35 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_strndup(const char *src, int n)
{
	int		i;
	char	*str;

	if (!src || n < 0)
		return (0);
	i = 0;
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (0);
	while (i < n)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
**	set tmp pointer to newline char memory location, to save after '\n' extras
**	return 1 if newline and 0 if no newline
*/

static int		is_newline_end(char **line, char **extra)
{
	char			*tmp;

	tmp = ft_memchr(*extra, '\n', ft_strlen(*extra));
	if (tmp)
	{
		*line = ft_strndup(*extra, tmp - *extra);
		ft_memmove(*extra, tmp + 1, ft_strlen(tmp));
		tmp = 0;
		return (1);
	}
	return (0);
}

/*
**	reads buffer BUFF_SIZE at a time
*/

static	int		read_buffer(int fd, char **line, char **extra, t_stat *s_one)
{
	s_one->buffer = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
	while ((s_one->ret_int = read(fd, s_one->buffer, BUFF_SIZE)))
	{
		if (s_one->ret_int == -1)
			return (-1);
		s_one->buffer[s_one->ret_int] = '\0';
		s_one->tmp_one = 0;
		if (*extra)
		{
			s_one->tmp_one = ft_strdup(*extra);
			free(*extra);
			*extra = ft_strjoin(s_one->tmp_one, s_one->buffer);
			free(s_one->tmp_one);
		}
		else
			*extra = ft_strdup(s_one->buffer);
		s_one->is_nl_end_ret = is_newline_end(line, extra);
		if (s_one->is_nl_end_ret == 1)
			return (1);
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static t_stat	*s_one;

	if (!s_one)
	{
		s_one = (t_stat *)malloc(sizeof(t_stat));
		s_one->line_holder = (char **)malloc(sizeof(char *) * 420);
	}
	if (!line || !s_one || fd > 419 || fd < 0)
		return (-1);
	if (s_one->line_holder[fd] && is_newline_end(line, &s_one->line_holder[fd]))
		return (1);
	s_one->gnl_read_ret = read_buffer(fd, line, &s_one->line_holder[fd], s_one);
	if (s_one->gnl_read_ret != 0)
		return (s_one->gnl_read_ret);
	if (s_one->line_holder[fd] == 0 || s_one->line_holder[fd][0] == '\0')
		return (0);
	*line = s_one->line_holder[fd];
	s_one->line_holder[fd] = 0;
	return (1);
}
