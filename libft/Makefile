# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cboussau <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 09:52:28 by cboussau          #+#    #+#              #
#    Updated: 2015/12/02 18:10:31 by cboussau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Werror -Wextra
SRC = ft_isascii.c\
		ft_memcpy.c\
		ft_strcat.c\
		ft_strlen.c\
		ft_strstr.c\
		ft_isdigit.c\
		ft_memmove.c\
		ft_strchr.c\
		ft_strncat.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_isprint.c\
		ft_memset.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_toupper.c\
		ft_bzero.c\
		ft_memccpy.c\
		ft_putchar.c\
		ft_strcpy.c\
		ft_strncpy.c\
		ft_isalnum.c\
		ft_memchr.c\
		ft_putnbr.c\
		ft_strdup.c\
		ft_strnstr.c\
		ft_isalpha.c\
		ft_memcmp.c\
		ft_putstr.c\
		ft_strlcat.c\
		ft_strrchr.c\
		ft_memalloc.c\
		ft_memdel.c\
		ft_strnew.c\
		ft_strdel.c\
		ft_strclr.c\
		ft_striter.c\
		ft_striteri.c\
		ft_putendl.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strequ.c\
		ft_strnequ.c\
		ft_strsub.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_isspace.c\
		ft_strsplit.c\
		ft_itoa.c\
		ft_lstnew.c\
		ft_lstdelone.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c
OBJ = $(SRC:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC) -I $(HEADER)
	ar r $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)
fclean: clean
		rm -rf $(NAME)

re: fclean all
