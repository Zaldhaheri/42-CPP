NAME = sed

SRC = src/main.cpp

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

.PHONY : all clean fclean re