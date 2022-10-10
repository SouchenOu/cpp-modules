/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 14:02:24 by souchen          ###   ########.fr       */
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
    Base testD;
    identify(&testD);
    
    cout << "Test 2:\n";
    Base *test1 = generate();
    identify(test1);
    delete test1;

    cout << "Test 3: \n";
    A *test2 = new A;
   identify(test2);
    delete test2;

}



/*struct t1 {
  virtual ~t1() { };
};

struct t2 : t1 { };

int main() {
  t2 bobj;
  t1* ap = &bobj;
  void * vp = dynamic_cast<void *>(ap);
  std::cout << "Address of vp  : " << vp << "\n";
  std::cout << "Address of bobj: " << &bobj << "\n";
}*/

