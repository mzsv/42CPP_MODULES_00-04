# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 21:18:25 by amenses-          #+#    #+#              #
#    Updated: 2023/11/23 17:06:53 by amenses-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -pedantic -std=c++98

SRCS			=	main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS			=	$(SRCS:.cpp=.o)

NAME			=	clap

all:				$(NAME)

$(NAME):			$(OBJS)
					$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJS):			$(SRCS)
					$(CC) $(CFLAGS) -c $(SRCS)

clean:
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean all
