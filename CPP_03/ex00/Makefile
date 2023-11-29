# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 19:47:55 by amenses-          #+#    #+#              #
#    Updated: 2023/10/03 18:29:12 by amenses-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp ClapTrap.cpp

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
