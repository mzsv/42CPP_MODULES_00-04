# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amenses- <amenses-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 21:44:00 by amenses-          #+#    #+#              #
#    Updated: 2023/10/13 23:02:10 by amenses-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	c++
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -std=c++98

SRCS			=	main.cpp

OBJS			=	$(SRCS:.cpp=.o)

NAME			=	replace

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
