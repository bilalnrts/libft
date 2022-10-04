# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2019/10/18 23:01:39 by ncolomer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_atoi.c ft_bzero.c ft_isdigit.c ft_isalpha.c ft_isascii.c \
			ft_isalnum.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memmove.c ft_memset.c ft_strchr.c ft_strlen.c ft_strlcat.c \
			ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
			ft_strnstr.c ft_calloc.c ft_strdup.c
OBJS			= $(SRCS:.c=.o)

BONUS			=

BONUS_OBJS		= $(BONUS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus