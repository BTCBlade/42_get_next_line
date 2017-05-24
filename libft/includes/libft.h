/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tochen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 21:41:47 by tochen            #+#    #+#             */
/*   Updated: 2017/03/02 21:42:00 by tochen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct		s_list
{
	void			*content;
	int				content_size;
	struct s_list	*next;
	struct s_list	*prev;
}					t_et;

/*
** Extras
*/

char				*ft_ret_min_int(int n);
int					ft_isspace(int c);
char				*ft_encode_one(char *str);
char				*ft_encode_index(char *str);
char				*ft_encode_42(char *str);
char				*ft_encode_modulus(char *str, int n);

/*
** List
*/
t_et				*ft_lstnew(void const *content, int size, t_et *prev);
void				ft_lstdelone(t_et **alst, void (*del)(void *, int));
void				ft_lstdel(t_et **alst, void (*del)(void *, int));
void				ft_lstadd(t_et **alst, t_et *new);
void				ft_lstiter(t_et *lst, void (*f)(t_et *elem));
t_et				*ft_lstmap(t_et *lst, t_et *(*f)(t_et *elem));

/*
** Memory allocation
*/
void				*ft_memset(void *b, int c, int len);
void				ft_bzero(void *s, int n);
void				*ft_memcpy(void *dst, const void *src, int n);
void				*ft_memccpy(void *dst, const void *src, int c, int n);
void				*ft_memmove(void *dst, const void *src, int len);
void				*ft_memchr(const void *s, int c, int n);
int					ft_memcmp(const void *s1, const void *s2, int n);

void				*ft_memalloc(int size);
void				ft_memdel(void **ap);

/*
** String Stuff
*/
int					ft_strlen(const char *s);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, int len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, int n);
int					ft_strlcat(char *s1, const char *s2, int n);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *big, const char *little);
char				*ft_strnstr(const char *big, const char *little, int len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, int n);

char				*ft_strnew(int size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, int n);
char				*ft_strsub(char const *s, unsigned int start, int len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

int					ft_atoi(const char *str);
char				*ft_itoa(int c);

/*
** Booleans
*/
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);

int					ft_toupper(int c);
int					ft_tolower(int c);

/*
** Put Displays
*/
void				ft_putchar(wchar_t c);
void				ft_putstr(const char *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);

#endif
