/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 08:31:57 by souchen           #+#    #+#             */
/*   Updated: 2022/11/02 15:50:24 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <stack>
#include <algorithm>
int main()
{
        MutantStack<int> mstack;

        mstack.push(5);
        mstack.push(17);
        while(!mstack.empty())
        {
                std::cout   << "Top here:"<<mstack.top() << std::endl;
                mstack.pop(); // remove top element
        }

        //mstack.pop();

        std::cout << "size here :"<<mstack.size() << std::endl;
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
        std::cout << "stack s::\n";
        while(!s.empty())
        {
                std::cout << s.top() << "\n";
                s.pop();
        }
        std::cout << "Copy constructor:" << std::endl;
        
        MutantStack<int> muta1(mstack);
        std::cout << "stack muta1::\n";
        while(!muta1.empty())
        {
                std::cout << muta1.top() << "\n";
                muta1.pop();
        }
        
        /*std::cout << "Other way to print stack \n";
        MutantStack<int>::iterator iter = muta1.begin();
        for (iter = muta1.begin() ; iter <= muta1.end(); iter++)
                std::cout << *iter << std::endl;*/
        return 0;
}

 

/**The pop() function is used to remove or 'pop' an element from the top of the stack(newest or the topmost element in the stack). This is an inbuilt function from C++ Standard Template Library(STL). This function belongs to the <stack> header file.*/
