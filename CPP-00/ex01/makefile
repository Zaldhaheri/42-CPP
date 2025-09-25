# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaldhahe <zaldhahe@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/18 16:56:21 by zaldhahe          #+#    #+#              #
#    Updated: 2025/09/18 16:56:21 by zaldhahe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC = main.cpp PhoneBook.cpp

OBJ = $(SRC:.cpp=.o)

CPP = c++

CFLAG = -Wall -Werror -Wextra -std=c++98

COMPILE = $(CPP) $(CFLAG)

all : $(NAME)

$(NAME) : $(OBJ)
	$(COMPILE) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re