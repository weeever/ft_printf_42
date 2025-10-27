# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tidebonl <tidebonl@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 12:18:26 by tidebonl          #+#    #+#              #
#    Updated: 2025/10/27 13:06:56 by tidebonl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INCLUDES = .printf.h

SOURCES	  = ft_printf.c \
			ft_putnbr.c \
			ft_putstr.c

MY_OBJECTS = $(SOURCES:.c=.o)

CFLAGS += -Wall -Werror -Wextra -I $(INCLUDES)

all: $(NAME)

$(NAME): $(MY_OBJECTS)
	ar rcs -o $(NAME) $(MY_OBJECTS)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(MY_OBJECTS) $(MY_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
