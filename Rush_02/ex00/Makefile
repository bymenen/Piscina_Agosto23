# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmenende <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/27 18:35:57 by vmenende          #+#    #+#              #
#    Updated: 2023/08/27 19:18:20 by vmenende         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

SRCS = main.c functions.c prevcheck.c

OBJS = $(SRCS:.c=.o)

# Reglas de construcción
all: $(NAME)

%.o:	%.c
	$(CC) $(CFLAGS) -c $<

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re all