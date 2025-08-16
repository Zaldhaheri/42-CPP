# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zaldhahe <zaldhahe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/17 00:05:50 by zaldhahe          #+#    #+#              #
#    Updated: 2025/08/17 00:05:50 by zaldhahe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

SRC = Account.cpp, tests.cpp

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
	rn -f $(NAME)

re : fclean all

.PHONY: all clean fclean re