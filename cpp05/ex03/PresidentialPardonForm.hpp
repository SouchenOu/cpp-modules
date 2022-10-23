/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/23 22:04:50 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	private:
		std::string target;
	public:
		// Constructors
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& other);

		// Assignment operator overload
		PresidentialPardonForm& operator=(const PresidentialPardonForm& var);

		// Destructor
		~PresidentialPardonForm();
		std::string getTarget() const;
		//executor
		void execute(Bureaucrat const & executor) const;
	
	};