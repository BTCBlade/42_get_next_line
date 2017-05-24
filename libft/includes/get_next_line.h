/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 13:23:42 by tochen            #+#    #+#             */
/*   Updated: 2017/05/11 13:34:43 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 5

# include <fcntl.h>
# include "libft.h"

typedef struct		s_static
{
	char			*tmp_one;
	char			*buffer;
	char			*ret;
	char			**line_holder;
	int				gnl_read_ret;
	int				ret_int;
	int				is_nl_end_ret;
}					t_stat;

/*
**	gcc get_next_line.c -L ./libft -lft -I ./libft/includes
*/

int					get_next_line(const int fd, char **line);

#endif
