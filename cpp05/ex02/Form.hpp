#pragma once
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:

		const std::string	_name;
		bool				signedOuNon;
		const int	gradeSign;
		const int	gradeExecute;
	public:
		// Constructor
		Form(const std::string& name);
		Form(const std::string& name, const int gradeSign, const int gradeExecute);
		Form(const Form& var);
		// Destructor
		~Form();

		// Assignment operator overload
		Form& operator=(const Form& var);
		// Getters
		unsigned int getGradeSign() const;
		unsigned int getGradeExecute() const;
		std::string getName() const;
		bool getSignedOuNon() const;

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
