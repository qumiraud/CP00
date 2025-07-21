# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qumiraud <qumiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 09:18:36 by qumiraud          #+#    #+#              #
#    Updated: 2025/07/17 13:42:04 by qumiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook

CC = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g

SRC = Phonebook.cpp\
		main.cpp\
		printPhonebook.cpp\
		Contact.class.cpp\

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