# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/30 21:21:04 by lbellona          #+#    #+#              #
#    Updated: 2021/10/03 20:09:30 by lbellona         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= main.cpp P_book.cpp Contact.cpp 
OBJS			= $(SRCS:.cpp=.o)

CXX				= clang++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror -I.

NAME			= p_book

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re test
