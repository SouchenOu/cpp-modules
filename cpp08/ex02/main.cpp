/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:31:57 by souchen           #+#    #+#             */
/*   Updated: 2022/11/01 11:53:14 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>
int main()
{
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);

         std::cout   << mstack.top() << std::endl;

        mstack.pop();

        std::cout << mstack.size() << std::endl;
        //push() and pop() member functions are used for inserting and removing elements from stack.
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);

        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();

        ++it;
        --it;
        while (it != ite)
        {
                std::cout << *it << std::endl;
                ++it;
        }
        std::stack<int> s(mstack);


        /*std::cout << "--- Copy constructor ---" << std::endl;

        MutantStack<int> muta1(mstack);
        MutantStack<int> muta2;

        muta1.pop();
        muta1.pop();
        muta1.pop();
        muta1.push(1);
        muta1.push(2);
        muta1.push(3);

        MutantStack<int>::iterator iter = muta1.begin();
        for (iter = muta1.begin() ; iter <= muta1.end(); iter++)
                std::cout << *iter << std::endl;


        muta2.pop();
        muta2.pop();
        muta2.pop();
        muta2.push(4);
        muta2.push(5);
        muta2.push(6);

        MutantStack<int>::iterator iter2= muta2.begin();
        for (iter2  = muta1.begin(); iter2 <= muta2.end(); iter2++)
                std::cout << *iter2 << std::endl;*/

        return 0;
}
