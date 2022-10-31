/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:31:27 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 08:31:30 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <exception>
#include <vector>

class Span
{
public:
        // Constructors
        Span(const unsigned int& N);
        Span(const Span& other);

        // Assignment operator overload
        Span& operator=(const Span& rhs);

        // Destructor
        ~Span();

        void addNumber(int x);
        void addNumber(const std::vector<int>::iterator& begin, const std::vector<int>::iterator& end);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;

        class ContainerFullException : public std::exception
        {
        public:
                const char* what() const throw()
                {
                        return ("Container full");
                }
        };
class ContainerEmptyException : public std::exception
        {
        public:
                const char* what() const throw()
                {
                        return ("Container empty");
                }
        };

private:
        std::vector<int>        _v;
        unsigned int            _size;
};
