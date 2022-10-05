/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/05 12:27:12 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();
	public:
		// Constructors
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& other);

		// Assignment operator overload
		RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);
		// Destructor
		~RobotomyRequestForm();
		void action(const Bureaucrat& executor) const;

};