NAME = SRP

FLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -rf

FILES =  Bureaucrat.cpp Form.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
HED = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

all : $(NAME)
$(NAME): $(FILES) $(HED)
		c++ $(FLAGS) $(FILES) -o $(NAME) 
	
clean:
	$(RM) $(NAME)
	
fclean: clean
re: fclean all
.PHONY: all clean fclean re