/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 10:31:53 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

    public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &var);
    FragTrap &operator= (const FragTrap &var);
    ~FragTrap();
    void highFivesGuys(void);
    void attack(const std::string& target);

    
};