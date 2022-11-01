/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/11/01 12:06:40 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//template <typename T>
#include "header.hpp"
#include <iostream>


/*int main( void ) 
{
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}*/






/*int main( void ) 
{
    int a = 2;
    int b = 3;
    swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
    //std::string c = "chaine1";
    //std::string d = "chaine2";
    float c = 3.2;
    float d = 2.2;
    swap(c, d);
    std::cout << "c = " << c << ", d = " << d << "\n";
    std::cout << "min( c, d ) = " << min( c, d ) << "\n";
    std::cout << "max( c, d ) = " << max( c, d ) << "\n";
    return 0;
}*/

//more than one instance of function template min matches the argument list, so we shold write min and max with :: 

/*class Awesome
{
    private:
         int _n;
    public:
        Awesome(void):_n(0){}
        Awesome(int n): _n(n){}
        Awesome & operator=(Awesome & a) { _n = a._n;
            return *this;
        }
        bool operator==(Awesome const & rhs) const{
            return (this->_n == rhs._n);
        }
        bool operator!=(Awesome const & rhs) const{
            return (this->_n == rhs._n);
        }
        bool operator>(Awesome const & rhs) const{
            return (this->_n > rhs._n);
        }
        bool operator<(Awesome const & rhs) const{
            return (this->_n < rhs._n);
        }
        bool operator>=(Awesome const & rhs) const{
            return (this->_n >= rhs._n);
        }
        bool operator<=(Awesome const & rhs) const{
            return (this->_n <= rhs._n);
        }
        int get_n() const {return _n;}
};

std::ostream & operator << (std::ostream & o, const Awesome &a) {
    o << a.get_n();
    return o;
}

int main(void)
{
    Awesome a(2),b(4);
    swap(a,b);
    std::cout << a << " " << b << std::endl;
    std::cout<< ::max(a,b) << std::endl;
    std::cout<< ::min(a,b) << std::endl;
    return 0;
}*/

//There  are two ways we can implement templates:

//Function Templates
//Class Templates

//Similar to function templates, we can use class templates to create a single class to work with different data types.


// C++ program to demonstrate the use of class templates

/*#include <iostream>
using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}*/