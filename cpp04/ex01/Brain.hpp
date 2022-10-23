/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/22 16:43:09 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        std::string const *getIdeas() const;
        void   setIdeas(std::string *idea);
        Brain(std::string *ideas);
        Brain(Brain &var);
        Brain &operator=(Brain &var);
        Brain();
        ~Brain();
};