/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 10:56:59 by souchen          ###   ########.fr       */
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
		class GradeTooHighException : public std::exception
		{
			public:
			//what to do if something out of the ordinary 
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
