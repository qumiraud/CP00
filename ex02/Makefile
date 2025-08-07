# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/28 10:21:22 by qumiraud          #+#    #+#              #
#    Updated: 2025/08/07 11:07:05 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = tests.cpp\
		Account.cpp\

OBJ = $(SRC:%.cpp=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CXXFLAGS) $^ -o $@

%.o : %.cpp
	$(CC) -o $@ -c $< -I. $(CXXFLAGS)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re