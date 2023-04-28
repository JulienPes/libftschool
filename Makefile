# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/28 17:16:05 by jpes              #+#    #+#              #
#    Updated: 2023/04/27 18:48:49 by jpes             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = 	ft_isalpha.c \
			ft_isdigit.c \
			ft_strlen.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_bzero.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_strchr.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_strrchr.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strlcpy.c \
			ft_atoi.c \
			ft_strnstr.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_striteri.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_itoa.c \
			ft_split.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			
			
OBJECTS = ${SRCS:.c=.o}
RM = rm -f

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}
	@echo "Library successfuly created."

clean:
	${RM} ${OBJECTS}
	@echo "Files .o successfuly removed"

fclean: clean
	${RM} ${NAME}
	@echo "Files .a successfuly removed"

re: fclean all