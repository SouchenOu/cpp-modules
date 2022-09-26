#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		bool				signed;
		const unsigned int	gradeSign;
		const unsigned int	gradeExec;
	public:
		// Constructor
		Form(const std::string& name);
		Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec);
		Form(const Form& var);

		// Assignment operator overload
		Form& operator=(const Form& var);

		// Destructor
		~Form();

		// Getters
		unsigned int getGradeSign() const;
		unsigned int getGradeExec() const;
		std::string getName() const;
		bool isSigned() const;

		void beSigned(const Bureaucrat& candidate);

		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return ("grade is too high");
			}
		};

		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return ("grade is too low");
			}
		};

		class FormAlreadySignedException : public std::exception
		{
			public:
			const char* what() const throw()
			{
				return ("form is already signed");
			}
		};

};

std::ostream& operator<<(std::ostream& o, const Form& rhs);
