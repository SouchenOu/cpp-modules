#include <string>
#include <iostream>

class Bureaucrat
{
	
	private:

	std::string const	name;
	unsigned int		grade;
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(const Bureaucrat& var);
			// Destructor
		~Bureaucrat();
		// Assignment operator overload
		Bureaucrat& operator=(const Bureaucrat& var);	
		// Getters
		std::string const getName() const;
		unsigned int getGrade() const;
		void incrementGrade();
		void decrementGrade();
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too high");
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("Grade too low");
				}
		};

};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs);
