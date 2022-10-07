/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/07 18:14:01 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat;
class Form 
{
    private:
        std::string target;
        const std::string	name;
		bool		signedOuNon;
		const int	gradeSign;
		const int	gradeExecute;
    public:
        std::string    getTarget(void) const;
        void beSigned(const Bureaucrat &y);
        // Constructor
		 Form();
		//Form(const std::string name);
		Form(std::string target ,std::string name,int gradeSign, int gradeExecute);
		Form(const Form& var);
		// Destructor
		~Form();
		// Assignment operator overload
		Form& operator=(const Form& var);
        std::string getName(void) const;
        bool getsignedOuNon(void) const;
        int getGradeSign() const;
		int getGradeExecute() const;
        void setsigned(bool x);
    virtual void execute(Bureaucrat const & executor) const = 0;
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
    class NotSigned : public std::exception
    {
        public:
            const char *what() const throw()
			{
				return ("Not participate\n");
			}
    };
};

std::ostream& operator<<(std::ostream& out, const Form& var);

