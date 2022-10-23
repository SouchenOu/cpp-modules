/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 21:15:46 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
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
		virtual ~Form();

		// Assignment operator overload
		Form& operator=(const Form& var);
		// Getters
		int getGradeSign() const;
		int getGradeExecute() const;
		std::string getName() const;
		bool getSignedOuNon() const;

		void beSigned(Bureaucrat& candidate);
		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::runtime_error
		{
			public:
			//what to do if something out of the ordinary 
				GradeTooHighException(const std::string& msg = "Grade too High") : runtime_error(msg){}
		};

		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException(const std::string& msg = "Grade too low") : runtime_error(msg){}
		};

		class NotSigned : public std::runtime_error
		{
			public:
				NotSigned(const std::string& msg = "not signed") : runtime_error(msg){}
		};
};

std::ostream& operator<<(std::ostream& out, const Form& var);