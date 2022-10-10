/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/10 11:32:35 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
    
/*class Polygone {
  public:
    int width, height;
  public:
  Polygone(){}
  Polygone(int w, int h)
  {
     this->width = w;
     this->height = h;
  }
    void update (int a, int b){ 
    width = a; 
    height = b; 
  }
  void hellofunc()
  {
    std::cout << "Hello world\n";
  }
};

class Rectangle: public Polygone {
  public:
    int aire(){
    return width * height; 
  }
  Rectangle(){}
  Rectangle(int a, int b) : Polygone(a, b){}
};

class Triangle: public Polygone {
  public:
    int aire(){
    return width * height/2; 
  }
  void hellofunc()
  {
    std::cout << "Hello Triangle\n";
  }
};*/

/*int main () {
  Polygone P1(1,2);
  P1.update(1,2);
  Rectangle r(3,4);
  Triangle t;
  std::cout << r.width << "\n";
  std::cout << P1.width << "\n";
  //Polygone *p = &T;
  //Polygone p;
  Polygone p1(14,15);
  Triangle T;
  //Polygone *p2 = &T;
  //p2->width =20;
  //p2->height = 30;
  Rectangle Re(1,2);
  T.hellofunc();
  //std::cout << p.width << "\n";
  //p->update(1,2);
  std::cout << T.width << "\n";
  std::cout << Re.width;
  return 0;
}*/

int main()
{
  //const Animal* meta = new Animal();
  //const Animal mata;
  //Animal a;
  Dog D1;
  //Dog j;
  //Cat i;
  //Animal *b = &D1;
  Animal *b = new Dog();
  b->makeSound();//(*b).makeSound()
  D1.makeSound();
  //j.makeSound();
  /*const Animal *A= &j;  //const Animal* A = new Dog();---> This is object
  //int *a=new(5) -----> This is variable int a = 5
  //int b = 5;
  //int *a = &b;
  const Animal *B = &i;  //const Animal* B = new Cat();
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
  WrongCat1.makeSound();*/
  return 0;
}



