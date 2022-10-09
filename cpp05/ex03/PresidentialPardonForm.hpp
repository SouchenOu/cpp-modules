/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/09 11:03:28 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm();
	public:
		// Constructors
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& other);

		// Assignment operator overload
		PresidentialPardonForm& operator=(const PresidentialPardonForm& var);

		// Destructor
		~PresidentialPardonForm();
		//executor
		void execute(const Bureaucrat& executor) const;
};