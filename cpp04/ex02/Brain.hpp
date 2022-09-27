/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/27 10:05:47 by souchen          ###   ########.fr       */
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
        void   setIdeas(std::string *idea, int nb);
        Brain(std::string *ideas, int nb);
        Brain(Brain &var);
        Brain *operator=(Brain &var);
        Brain();
        ~Brain();
};