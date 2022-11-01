/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:31:57 by souchen           #+#    #+#             */
/*   Updated: 2022/11/01 11:46:48 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
        public:
                // Constructors
                MutantStack() : MutantStack<T, Container>::stack() 
                {
                        std::cout << "MutantStack: Default constructer called\n";
                }
                MutantStack(const MutantStack<T, Container>& other) : MutantStack<T, Container>::stack(other) 
                {
                        std::cout << "MutantStack: Copy constructer called\n";
                }
                MutantStack<T, Container>& operator=(const MutantStack<T, Container>& other)
                {
                        std::cout << " MutantStack: Assignement operater called\n";
                        if (&other == this)
                                return (*this);
                        else if (this != &other)
                                this->MutantStack<T, Container>::stack::operator=(other);
                        return *this;
                 }

                 virtual ~MutantStack() 
                {
                        std::cout <<  "MutantStack destructer called\n";
                };

                typedef typename Container::iterator                            iterator;
                //typedef typename Container::reverse_iterator            reverse_iterator;

                iterator                        begin() { return this->c.begin(); };
                iterator                        end() { return this->c.end(); };
};

//0:std::stack class is a container adapter that gives the programmer the functionality of a stack 
//1:Internally it uses std::deque STL container.
//2: it is Lifo (last in first out ) data structer
//3: std::stack allows to push (insert) and pop(remove) only from back