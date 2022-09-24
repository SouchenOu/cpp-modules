/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/24 12:14:40 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "DiamondTrap.hpp"

int main()
{
    //ScavTrap Scav1("friend1");  
    ClapTrap Clap1("test1");  
    ScavTrap Scav2("friend2");
    FrapTrap frap1("souchen");
    DiamondTrap D1("diamonda");
    D1.attack(frap1.getname());
    //std::cout << D1.getname() << "\n";
    //std::cout << frap1.getname() << "\n";
    /*Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.guardGate();
    Scav1.attack(Scav2.getname());
    Scav2.takeDamage(1);
    Scav1.beRepaired(10);
    Scav2.attack(Scav1.getname());*/
    
}

// To understand concept of heritage

/*class mainClass {
    public:
        int i;
    public:
     mainClass(){}
     mainClass(int x)
     {
         std::cout<< " mainClass :Default constructer\n";
         this->i = x;
    }
     void test()
     {
         std::cout << "Hello main class\n";
     }
     
};
// herate class

class h : public mainClass{
    public:
        int i;
    public:
        h(){std::cout<< "Default constructer\n";}
        h(int x)
        {
            std::cout<< " h :Default constructer\n";
            this->i = x;
        }
        void test()
        {
            std::cout << "Hello h class\n";
        }
};

int main()
{
    mainClass test0(1);
    h test1(2);
    std::cout << test0.i << "\n";
    std::cout << test1.i << "\n";
    test1.test();
  
    
    
}*/


#include<iostream>
using namespace std;
  
class base {
public:
    virtual void print()
    {
        cout << "print base class\n";
    }
  
    void show()
    {
        cout << "show base class\n";
    }
};
  
/*class derived : public base {
public:
    void print()
    {
        cout << "print derived class\n";
    }
  
    void show()
    {
        cout << "show derived class\n";
    }
};
  
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
  
    // Virtual function, binded at runtime
    bptr->print();
    // Non-virtual function, binded at compile time
    bptr->show();
    // Virtual function, binded at runtime
    d.show();
    // Non-virtual function, binded at compile time
    d.show();
    
    return 0;
}*/