NAME = AwesomePhoneBook

SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = ${SRC:.cpp=.o}

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -m64

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM)  $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re