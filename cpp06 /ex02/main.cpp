/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 13:23:03 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "info.hpp"
using std::cout;


int main() {

    cout << "Test 1:\n";
    A testA;
    identify(&testA);
    B testB;
    identify(&testB);
    C testC;
    identify(&testC);
    
    cout << "Test 2:\n";
    A testAA;
    identify(testAA);
    B testBB;
    identify(testBB);
    C testCC;
    identify(testCC);
    Base b;
    identify(b);

    
    cout << "Test 3:\n";
    Base *test1 = generate();
    identify(test1);
    delete test1;

    cout << "Test 4: \n";
    A *test2 = new A;
    identify(test2);
    delete test2;

}

