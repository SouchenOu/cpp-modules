/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:31:27 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 17:36:00 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#include <vector>

class Span
{
        private:
                std::vector<int>        vector;
                unsigned int           N;
        
        public:
                //default constructer
                Span();
                // constructer with parameter
                Span(const unsigned int& N);
                //copy constructer
                Span(const Span& other);

                // Assignment operator overload
                Span& operator=(const Span& var);

                // Destructor
                ~Span();

                void addNumber(int Num);
                unsigned int shortestSpan() const;
                unsigned int longestSpan() const;

        class IsFullException : public std::exception
        {
                 public:
                        const char* what() const throw()
                        {
                                return ("Container is full");
                        }
        };
        class IsEmptyException : public std::exception
        {
                public:
                        const char* what() const throw()
                        {
                                return ("Container is empty");
                        }
        };


};
