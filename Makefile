# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/15 11:19:15 by thlefebv          #+#    #+#              #
#    Updated: 2023/06/15 11:19:17 by thlefebv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = push_swap

FICHIERS_C = pile.c\
	     push_swap_utilis.c\
	     push_swap.c\
	     push.c\
	     swap.c\
	     rotate.c\
	     rrotate.c\


OBJS = $(patsubst %.c,%.o,$(FICHIERS_C))

CFLAGS= -Wall -Wextra -Werror

CC = cc
${NAME} : ${OBJS} 
	$(CC) $(CFLAGS)  ${OBJS} -o $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all : ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
