# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenses- <amenses-@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/19 19:20:07 by amenses-          #+#    #+#              #
#    Updated: 2023/11/23 16:49:24 by amenses-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp Fixed.cpp

OBJS			=	$(SRCS:.cpp=.o)

NAME			=	fixed

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
