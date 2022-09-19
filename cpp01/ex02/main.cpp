#include <iostream>
#include <string.h>
int main()
{
    int a;
    a = 2;
    int *p;
    p=&a;

    std::cout << a;
    std::cout<< "\n";
    std::cout << &a;
    std::cout<< "\n";
    std::cout << p;
    std::cout<< "\n";
    std::cout << *p;

}