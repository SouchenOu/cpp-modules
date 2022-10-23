/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 21:59:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "Form.hpp"

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
		void signForm(Form& candidate);
        void executeForm(Form const & form);

		//standard exception(exception)
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

};
std::ostream& operator<<(std::ostream& o, const Bureaucrat& var);