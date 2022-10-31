/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:32:21 by souchen           #+#    #+#             */
/*   Updated: 2022/10/31 08:32:23 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
        // Constructors
        MutantStack() : MutantStack<T, Container>::stack() {};
        MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) {};

        // Assignment operator overload
        MutantStack<T, Container>& operator=(const MutantStack<T, Container>& rhs)
        {
                if (this != &rhs)
                        this->MutantStack<T, Container>::stack::operator=(rhs);
                return *this;
        }

        // Destructor
        virtual ~MutantStack() {};

        typedef typename Container::iterator                            iterator;
        typedef typename Container::reverse_iterator            reverse_iterator;

        iterator                        begin() { return this->c.begin(); };
        iterator                        end() { return this->c.end(); };
        reverse_iterator        rbegin() { return this->c.rbegin(); };
        reverse_iterator        rend() { return this->c.rend(); };
};
