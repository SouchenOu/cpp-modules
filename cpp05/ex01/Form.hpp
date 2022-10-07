/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 14:36:59 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:

		const std::string	name;
		bool		signedOuNon;
		const int	gradeSign;
		const int	gradeExecute;
	public:
		// Constructor
		Form(const std::string name);
		Form(const std::string name, const int gradeSign, const int gradeExecute);
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
};

std::ostream& operator<<(std::ostream& out, const Form& var);
