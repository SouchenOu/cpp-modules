/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/19 09:33:27 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
  //const Animal* meta = new Animal();
  //const Animal mata;
  //Animal a;
  Dog D1;
  Dog j;
  Cat i;
  //Animal *b = &D1;
  const Animal *b = new Dog();
  //b = &i;
  //b = new Cat();
  b->makeSound();//(*b).makeSound()
  D1.makeSound();
  //j.makeSound();
  Animal *A= &j;  //const Animal* A = new Dog();---> This is object
  //int *a=new(5) -----> This is variable int a = 5
  //int b = 5;
  //int *a = &b;
  Animal *B = &i;  //const Animal* B = new Cat();
  std::cout << j.getType() << " " << std::endl;
  std::cout << i.getType() << " " << std::endl;
  std::cout << A->getType() << " " << std::endl;
  i.makeSound(); //will output the cat sound!
  j.makeSound();
  A->makeSound();//((*A).makeSound())
  B->makeSound();

  //-----Wrong animal --------
  std::cout << "Wrong Animal -----------\n";
  //WrongAnimal *Animal = new WrongAnimal();// WrongAnimal Animal
  WrongCat WrongCat1;
  const WrongAnimal *W1 = new WrongCat();// WrongCat *wa = &WrongCat1;
  W1->makeSound();
  WrongCat1.makeSound();
  return 0;
}

/*using namespace std;

class Shape {
   public:
      int width, height;
      
   public:
      Shape( int a = 0, int b = 0){
         width = a;
         height = b;
      }
      void  virtual area();
};
void Shape::area() {
         cout << "Parent class area :" << width * height << endl;
      }
class Rectangle: public Shape {
   public:
      Rectangle(){}
      Rectangle( int a, int b) { 
         this->width = a;
         this->height = b;
      }
      void area () { 
         cout << "Rectangle class area :" << width * height << endl;
      }
};

class Triangle: public Shape {
   public:
      Triangle( int a, int b){ 
        this->width = a;
        this->height = b;
      }
      
      void area () { 
         cout << "Triangle class area :" << width * height << endl; 
      }
};

// Main function for the program
int main() {
  
   Rectangle rec(11,12);
   Triangle  tri(10,5);
   //Shape shape(10,3);
    //Shape *shape = new Rectangle();
    Shape *shape = &rec;
    std::cout << "height here "<< rec.height << "\n";
    std::cout << "height here " << shape->height << "\n";
   // store the address of Rectangle
   //shape = &rec;
   
   // call rectangle area.
   shape->area();
   rec.area();

   // store the address of Triangle
   //shape = &tri;
   
   // call triangle area.
   //shape->area();
   
   return 0;
}*/



