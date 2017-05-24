# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tochen <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/27 18:11:05 by tochen            #+#    #+#              #
#    Updated: 2017/05/11 13:17:56 by tochen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = libft.a

HEADER = libft.h

CFLAGS = -Wall -Wextra -Werror -c -Iincludes

CC = gcc

SRC = 	ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memccpy.c\
		ft_memmove.c	ft_memchr.c 	ft_memcmp.c\
		ft_memalloc.c	ft_memdel.c\
		ft_strlen.c		ft_strdup.c\
		ft_strcpy.c		ft_strncpy.c\
		ft_strcat.c		ft_strncat.c	ft_strlcat.c\
		ft_strchr.c		ft_strrchr.c	ft_strstr.c		ft_strnstr.c\
		ft_strcmp.c		ft_strncmp.c\
		ft_strnew.c		ft_strdel.c		ft_strclr.c\
		ft_striter.c	ft_striteri.c	ft_strmap.c		ft_strmapi.c\
		ft_strequ.c		ft_strnequ.c	ft_strsub.c\
		ft_strjoin.c	ft_strtrim.c	ft_strsplit.c\
		ft_atoi.c		ft_itoa.c		ft_ret_min_int.c\
		ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
		ft_isprint.c	ft_isspace.c\
		ft_toupper.c	ft_tolower.c\
		ft_putchar.c	ft_putchar_fd.c	ft_putstr.c		ft_putstr_fd.c\
		ft_putendl.c	ft_putendl_fd.c	ft_putnbr.c		ft_putnbr_fd.c\
		ft_lstnew.c		ft_lstdelone.c	ft_lstdel.c		ft_lstadd.c\
		ft_lstiter.c	ft_lstmap.c\
		ft_encode_one.c	ft_encode_index.c	ft_encode_42.c\
		ft_encode_modulus.c\

OBJ = $(SRC:.c=.o)

$(LIB): $(SRC) ./includes/libft.h
		$(CC) $(CFLAGS) $(SRC) -I includes
		ar rc $(LIB) $(OBJ)

all: $(LIB) start

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB)

re: fclean all

start:
	@echo "\n"
	@echo "						$(CY) - - - - - - - - - - - - - - - - - - - - - - - - - - -$(CE)";
	@echo "						$(CY)|$(CE)$(CG)     _       _________ ______   _______  _________    $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    ( \      \__   __/(  ___ \ (  ____ \ \__   __/    $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    | (         ) (   | (   ) )| (    \/    ) (       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    | |         | |   | (__/ / | (__        | |       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    | |         | |   |  __ (  |  __)       | |       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    | |         | |   | (  \ \ | (          | |       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    | (____/\___) (___| )___) )| )          | |       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|$(CE)$(CG)    (_______/\_______/|/ \___/ |/           )_(       $(CE)$(CY)|$(CE)";
	@echo "						$(CY)|                                                      |$(CE)";
	@echo "						$(CY) - - - - - - - - - - - - - - - - - - - - - - - - - - -$(CE)";
