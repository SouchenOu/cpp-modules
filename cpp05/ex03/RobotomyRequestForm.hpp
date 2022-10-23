/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 22:04:46 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		// Constructors
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& other);

		// Assignment operator overload
		RobotomyRequestForm& operator=(const RobotomyRequestForm& var);
		// Destructor
		~RobotomyRequestForm();
		std::string getTarget() const;
		void execute(Bureaucrat const & executor) const;
};