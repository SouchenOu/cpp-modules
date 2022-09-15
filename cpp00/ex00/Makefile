NAME = megaphone

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  megaphone.cpp

all : $(NAME)

$(NAME):
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	

clean:
	$(RM) $(NAME)
	

fclean: clean

re: fclean all

.PHONY: all clean fclean re