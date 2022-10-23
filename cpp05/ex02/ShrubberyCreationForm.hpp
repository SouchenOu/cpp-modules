/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 22:05:02 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		// Constructors
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& var);

		// Assignment operator overload
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& var);

		// Destructor
		~ShrubberyCreationForm();
		std::string getTarget() const;
		void execute(const Bureaucrat& executor) const;
};