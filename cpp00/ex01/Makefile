NAME = Library

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  contact.cpp PhoneBook.cpp main.cpp
HED = contact.hpp PhoneBook.hpp

all : $(NAME)

$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re