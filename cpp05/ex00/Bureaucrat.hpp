/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 19:05:46 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
class Bureaucrat
{
	private:
		std::string const name;
		int		grade;
	public:
		// Constructors
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(const Bureaucrat& var);
			// Destructor
		~Bureaucrat();
		// Assignment operator overload
		Bureaucrat& operator=(const Bureaucrat& var);	
		// Getters
		std::string const getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		//standard exception(exception)
		class GradeTooHighException : public std::runtime_error
		{
			public:
			//what to do if something out of the ordinary 
				GradeTooHighException(const std::string& msg = "Grade too High") : runtime_error(msg){}
				/*const char* what() const throw()
				{
					return ("Grade too high");
				}*/

		};

		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException(const std::string& msg = "Grade too low") : runtime_error(msg){}
				/*const char* what() const throw()
				{
					return ("Grade too low");
				}*/
		};

};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& var);



//When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).
//All objects thrown by components of the standard library are derived from this class. Therefore, all standard exceptions can be caught by catching this type by reference.
//To implement exception handling in C++, you use try, throw, and catch expressions.

//       Exception handling in C++ consist of three keywords: try, throw and catch:
//       The try statement allows you to define a block of code to be tested for errors while it is being executed.
// 		 The throw keyword throws an exception when a problem is detected
//		 The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

/**The C++ Standard library provides a base class specifically designed to declare objects to be thrown as exceptions. It is called std::exception and is defined in the header. This class has a virtual member function called what that returns a null-terminated character sequence (of type char *) and that can be overwritten in derived classes to contain some sort of description of the exception.*/


//All standard exception classes derive ultimately from the class exception 
//two derived classes are logic_error and runtime_error
//The class logic_error represents errors in programming logic, such as passing an invalid argument. Runtime errors are those that occur as the result of unforeseen forces such as hardware failure or memory exhaustion.


//Both runtime_error and logic_error provide a constructor that takes a std::string argument so that you can store a message in the exception object and extract it later with exception::what( ) , as the following program illustrates: