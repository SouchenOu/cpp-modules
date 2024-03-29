# cpp-modules

// Tout les informations sur Construction, destruction, initialisation et recopie :

https://www.iro.umontreal.ca/~pift1166/cours/ift1166/communs/Cours/2P/C14-1166.pdf


****************************
🌱 Some useful informations:
****************************

📫 In C++, there are three access specifiers:
---------------------------------------------

public - members are accessible from outside the class

private - members cannot be accessed (or viewed) from outside the class

protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.(just the inherited class can use that protected variable ) You will learn more about Inheritance later.


      class MyClass 
      {
        public:    // Public access specifier
            int x;   // Public attribute
        private:   // Private access specifier
            int y;   // Private attribute
       };

       int main() 
       {
            MyClass myObj;
            myObj.x = 25;  // Allowed (public)
            myObj.y = 50;  // Not allowed (private)
            return 0;
       }

📫*using namespace std:
----------------------

The std namespace

All C++ standard library types and functions are declared in the std namespace or namespaces nested inside std.

It is known that “std” (abbreviation for the standard) is a namespace whose members are used in the program.

So the members of the “std” namespace are cout, cin, endl, etc.

This namespace is present in the iostream.h header file.

Below is the code snippet in C++ showing content written inside iostream.h.

📫* What is class :
-------------------

a class is a template for objects, and an object is an instance of a class.

When the individual objects are created, they inherit all the variables and functions from the class.

📫Constructors:
--------------

1: constructor sans parameters:

A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ():


                  Example:

                  class MyClass 
                  {     
                        // The class
                        public:          // Access specifier
                        MyClass() 
                        {
                               // Constructor
                              cout << "Hello World!";
                        }
                  };

                  int main() 
                  {
                        MyClass myObj;    // Create an object of MyClass (this will call the constructor)
                        return 0;
                  }
                  
2: constructor with parameters:

When we call the constructor (by creating an object of the class), we pass parameters to the constructor, which will set the value of the corresponding attributes to the same:

📫*Indirection or Dereferencing Operator (*)
-------------------------------------------

The indirection operator (or dereferencing operator) (*) operates on a pointer, and returns the value stored in the address kept in the pointer variable. For example, if pNumber is an int pointer, *pNumber returns the int value "pointed to" by pNumber.

📫* operator &
-------------

The meaning of symbol & is different in an expression and in a declaration. When it is used in an expression, & denotes the address-of operator, which returns the address of a variable, e.g., if number is an int variable, &number returns the address of the variable number (this has been described in the above section).

Howeve, when & is used in a declaration (including function formal parameters), it is part of the type identifier and is used to declare a reference variable (or reference or alias or alternate name). It is used to provide another name, or another reference, or alias to an existing variable.

-----For example:

-------------------------------------------------------------------------------------------

📫 Test reference declaration and initialization (TestReferenceDeclaration.cpp) */
------------------------------------------------------------------------------------------

                    #include <iostream>
  
                    using namespace std;
  
 
                    int main() {
  
                    int number = 88;           //Declare an int variable called number
  
                    int & refNumber = number;  //Declare a reference (alias) to the variable number
  
                    //Both refNumber and number refer to the same value
 
                    cout << number << endl;     //Print value of variable number (88)
  
                    cout << refNumber << endl;  //Print value of reference (88)
 
                    refNumber = 99;             //Re-assign a new value to refNumber
  
                    cout << refNumber << endl;
  
                    cout << number << endl;    // Value of number also changes (99)
  
 
                    number = 55;               // Re-assign a new value to number
  
                    cout << number << endl;
  
                    cout << refNumber << endl; // Value of refNumber also changes (55)
  
                   }
---------------------------------------------------------------------------------------------------
  
---For example,
--------------------------------------------------------------------
                    int number = 88;

                    int * pNumber = &number;  // Declare and assign the address of variable number to pointer pNumber (0x22ccec)

                    cout << pNumber<< endl;   // Print the content of the pointer variable, which contain an address (0x22ccec)

                    cout << *pNumber << endl; // Print the value "pointed to" by the pointer, which is an int (88)

                    *pNumber = 99;            // Assign a value to where the pointer is pointed to, NOT to the pointer variable

                    cout << *pNumber << endl; // Print the new value "pointed to" by the pointer (99)

                    cout << number << endl;   // The value of variable number changes as well (99)

-----------------------------------------------------------------------

📫The difference between reference and pointers:
-----------------------------------------------

1--Pointers: A pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the * operator to access the memory location it points to. 

2--References: A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e., the compiler will apply the * operator for you. 

A reference variable provides a new name to an existing variable. It is dereferenced implicitly and does not need the dereferencing operator * to retrieve the value referenced. On the other hand, a pointer variable stores an address. You can change the address value stored in a pointer. To retrieve the value pointed to by a pointer, you need to use the indirection operator *, which is known as explicit dereferencing. Reference can be treated as a const pointer. It has to be initialized during declaration, and its content cannot be changed.

Reference is closely related to pointer. In many cases, it can be used as an alternative to pointer. A reference allows you to manipulate an object using pointer, but without the pointer syntax of referencing and dereferencing.

The above example illustrates how reference works, but does not show its typical usage, which is used as the function formal parameter for pass-by-reference.


3--&& Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory address with the original variable but also takes up some space on the stack.




++ The main differences between pointers and reference parameters are −

References are used to refer an existing variable in another name whereas pointers are used to store address of variable.

References cannot have a null value assigned but pointer can.

A reference variable can be referenced by pass by value whereas a pointer can be referenced by pass by reference.

A reference must be initialized on declaration while it is not necessary in case of pointer.

A reference shares the same memory address with the original variable but also takes up some space on the stack whereas a pointer has its own memory address and size on the stack.

📫Pass-By-Reference into Functions with Reference Arguments vs. Pointer Arguments:
---------------------------------------------------------------------------------

1---1: Pass-by-Value:

               /* Pass-by-value into function (TestPassByValue.cpp) */
               #include <iostream>
               using namespace std;
 
               int square(int);
 
               int main() 
               {
                  int number = 8;
                  cout <<  "In main(): " << &number << endl;  // 0x22ff1c
                  cout << number << endl;         // 8
                  cout << square(number) << endl; // 64
                  cout << number << endl;         // 8 - no change
               }
 
                int square(int n) 
                {  // non-const
                    cout <<  "In square(): " << &n << endl;  // 0x22ff00
                    n *= n;           // clone modified inside the function
                    return n;
                }

2---2:Pass-by-Reference with Pointer Arguments:

            /* Pass-by-reference using pointer (TestPassByPointer.cpp) */
            #include <iostream>
            using namespace std;
 
            void square(int *);
 
            int main() 
            {
                int number = 8;
                cout <<  "In main(): " << &number << endl;  // 0x22ff1c
                cout << number << endl;   // 8
                square(&number);          // Explicit referencing to pass an address
                cout << number << endl;   // 64
            }
 
            void square(int * pNumber) 
            {  // Function takes an int pointer (non-const)
                cout <<  "In square(): " << pNumber << endl;  // 0x22ff1c
                *pNumber *= *pNumber;      // Explicit de-referencing to get the value pointed-to
                
            }
3---3:  Passing the Function's Return Value:

/* Passing back return value using reference (TestPassByReferenceReturn.cpp) */
            #include <iostream>
            using namespace std;
 
            int & squareRef(int &);
            int * squarePtr(int *);
 
            int main() 
            {
                int number1 = 8;
                cout <<  "In main() &number1: " << &number1 << endl;  // 0x22ff14
                int & result = squareRef(number1);
                cout <<  "In main() &result: " << &result << endl;  // 0x22ff14
                cout << result << endl;   // 64
                cout << number1 << endl;  // 64
 
                int number2 = 9;
                cout <<  "In main() &number2: " << &number2 << endl;  // 0x22ff10
                int * pResult = squarePtr(&number2);
                cout <<  "In main() pResult: " << pResult << endl;  // 0x22ff10
                cout << *pResult << endl;   // 81
                cout << number2 << endl;    // 81
            }
 
            int & squareRef(int & rNumber) 
            {
                cout <<  "In squareRef(): " << &rNumber << endl;  // 0x22ff14
                rNumber *= rNumber;
                return rNumber;
            }
 
            int * squarePtr(int * pNumber) 
            {
                cout <<  "In squarePtr(): " << pNumber << endl;  // 0x22ff10
                *pNumber *= *pNumber;
                return pNumber;
            }
4---4:"const" Function Reference/Pointer Parameters
  
          /* Test Function const and non-const parameter (FuncationConstParameter.cpp) */
            #include <iostream>
            using namespace std;
 
            int squareConst(const int);
            int squareNonConst(int);
            int squareConstRef(const int &);
            int squareNonConstRef(int &);
 
            int main() 
            {
                int number = 8;
                const int constNumber = 9;
                cout << squareConst(number) << endl;
                cout << squareConst(constNumber) << endl;
                cout << squareNonConst(number) << endl;
                cout << squareNonConst(constNumber) << endl;
 
                cout << squareConstRef(number) << endl;
                cout << squareConstRef(constNumber) << endl;
                cout << squareNonConstRef(number) << endl;
                // cout << squareNonConstRef(constNumber) << endl;
                // error: invalid initialization of reference of
                //  type 'int&' from expression of type 'const int'
            }
 
            int squareConst(const int number) 
            {
                // number *= number;  // error: assignment of read-only parameter
                return number * number;
            }
 
            int squareNonConst(int number) 
            {  
                // non-const parameter
                number *= number;
                return number;
            }
 
            int squareConstRef(const int & number) 
            {  
                  // const reference
                   return number * number;
            }
 
            int squareNonConstRef(int & number) 
            {  
                    // non-const reference
                    return number * number;
            }
            




📫 Pointers to members (C++ only):

Pointers to members allow you to refer to nonstatic members of class objects. You cannot use a pointer to member to point to a static class member because the address of a static member is not associated with any particular object. To point to a static class member, you must use a normal pointer.

You can use pointers to member functions in the same manner as pointers to functions. You can compare pointers to member functions, assign values to them, and use them to call member functions. Note that a member function does not have the same type as a nonmember function that has the same number and type of arguments and the same return type.

Pointers to members can be declared and used as shown in the following example:



                        #include <iostream>
                        using namespace std;

                        class X 
                        {
                              public:
                              int a;
                              void f(int b) 
                              {
                                    cout << "The value of b is "<< b << endl;
                              }
                        };

                        int main() 
                        {

                              // declare pointer to data member
                               int X::*ptiptr = &X::a;

                              // declare a pointer to member function
                              void (X::* ptfptr) (int) = &X::f;

                              // create an object of class type X
                              X xobject;

                              // initialize data member
                              xobject.*ptiptr = 10;

                              cout << "The value of a is " << xobject.*ptiptr << endl;

                              // call member function
                              (xobject.*ptfptr) (20);
                        }

      
📫 Pointers to functions:

      The syntax for creating a non-const function pointer is one of the ugliest things you will ever see in C++:

// fcnPtr is a pointer to a function that takes no arguments and returns an integer
int (*fcnPtr)();
In the above snippet, fcnPtr is a pointer to a function that has no parameters and returns an integer. fcnPtr can point to any function that matches this type.
      
      
📫Assigning a function to a function pointer:

Function pointers can be initialized with a function (and non-const function pointers can be assigned a function). In the above example, we have used foo directly, and it has been converted to a function pointer. Like with pointers to variables, we can also use &foo to get a function pointer to foo.

                        int foo()
                        {
                              return 5;
                        }

                        int goo()
                        {
                               return 6;
                        }

                        int main()
                        {
                              int (*fcnPtr)(){ &foo }; // fcnPtr points to function foo
                              fcnPtr = &goo; // fcnPtr now points to function goo

                              return 0;
                        }

📫 Calling a function using a function pointer

The other primary thing you can do with a function pointer is use it to actually call the function. There are two ways to do this. The first is via explicit dereference:

                  int foo(int x)
                  {
                        return x;
                  }

                  int main()
                  {
                        int (*fcnPtr)(int){ &foo }; // Initialize fcnPtr with function foo
                        (*fcnPtr)(5); // call function foo(5) through fcnPtr.

                        return 0;
                  }
                 The second way is via implicit dereference:

                  int foo(int x)
                  {
                        return x;
                  }

                  int main()
                  {
                        int (*fcnPtr)(int){ &foo }; // Initialize fcnPtr with function foo
                        fcnPtr(5); // call function foo(5) through fcnPtr.

                        return 0;
                  }     

      
      
The differences between copy constructer and  assignment operators:
      
      
      The Copy constructor and the assignment operators are used to initializing one object to another object. The main difference between them is that the copy constructor creates a separate memory block for the new object. But the assignment operator does not make new memory space. It uses the reference variable to point to the previous memory block.
  copy constructer:
      Both the objects uses separate memory locations.
  assignment operators
      One memory location is used but different reference variables are pointing to the same location.
      
      
      Explanation: 
      ---
      
      Here, t2 = t1;  calls the assignment operator, same as t2.operator=(t1); 
      
      Test t3 = t1;  calls the copy constructor, same as Test t3(t1);
      
------------------------------------------------------------------------------------------------------------------
📫*******************************************Les fichier en c++:*******************************************
------------------------------------------------------------------------------------------------------------------
 
 The fstream library allows us to work with files.

To use the fstream library, include both the standard <iostream> AND the <fstream> header file:     
      
      
ofstream	Creates and writes to files
ifstream	Reads from files
fstream	A combination of ofstream and ifstream: creates, reads, and writes to files
      
      --Create and Write To a File:
                  
                  #include <iostream>
                  #include <fstream>
                  using namespace std;

                  int main() 
                  {
                         // Create and open a text file
                              ofstream MyFile("filename.txt");

                        // Write to the file
                         MyFile << "Files can be tricky, but it is fun enough!";

                        // Close the file
                        MyFile.close();
                  }
  
• La classe ofstream :
----------------------

Il s'agit d'un fichier ouvert en écriture : pour créer un tel fichier il suffit d'appeler le constructeur qui a en paramètre

le nom du fichier : par exemple ofstream f("toto.txt");.

Pour savoir si le fichier a bien été ouvert en écriture la méthode is_open() renvoie true si le fichier est effectivement
ouvert.

Programmation C++ (débutant)/Les fichiers 6

Pour écrire dans le fichier on utilise l'opérateur << sans oublier d'écrire des séparateurs dans le fichier texte.

• La classe ifstream :
----------------------

Il s'agit d'un fichier ouvert en lecture : pour créer un tel fichier il suffit d'appeler le constructeur qui a en paramètre le

nom du fichier : par exemple ifstream f("toto.txt");.

Pour savoir si le fichier a bien été ouvert en lecture la méthode is_open() renvoie true si le fichier est effectivement
ouvert.

Pour lire dans le fichier on utilise l'opérateur >>.




String find: 
------------

is used to find the first occurrence of sub-string in the specified string being called upon. It returns the index of
the first occurrence of the substring in the string from given starting position. The default value of starting position is 0.

Function Template:

size_t find (const string& str, size_t pos = 0);
size_t find (const char* s, size_t pos = 0);


npos is a constant static member value with the greatest possible value for an element of type size_t.

To put it simply, think of npos as no-position. As a return value, it is usually used to indicate that no matches were found in the string. Thus, if it returns true, matches were found at no positions (i.e., no matches).

  
  
  --------------------------------------------------------------------------------------------------------------------
  
  📫 Pour bien comprendre Pointeurs et références de fonctions:
----------------------------------------------------------------
  
https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions#:~:text=Pour%20d%C3%A9clarer%20un%20pointeur%20de,(*identificateur)(param%C3%A8tres)%3B



---------------------------------------------------------------------------------------------------------------------------------

📫Surcharge de l’opérateur d’affectation en C++:
---------------------------------------------------------------------------------------------------------------------------------

Dans ce tutoriel nous allons découvrir comment surcharger l’opérateur d’affectation (opérateur =) qui permet de copier la valeur d’un objet, tout comme le constructeur de copie.

Surcharger l’opérateur d’affectation est assez simple. Il doit être surchargé en tant que fonction membre.
 

Syntaxe:
ReturnType operator = (const ClassName &)
 

-------------------------------------------------------------------------------------------------------------------------------

  📫Virgule fixe
   ----------------------------------------------------------------------------------------------------------------------------
  
 https://www.developpez.net/forums/d1168230/c-cpp/c/debuter/conversion-virgule-fixe-virgule-flottante/
  
  
Il suffit de définir la position de la virgule et on sait instantanément la valeur du nombre. Par exemple, pour un nombre stocké sur un octet, soit huit bits, si on définit arbitrairement la position de la virgule juste avant après le quatrième bit, alors on sait que 0110 1001 = 0110,1001.

C’est extrêmement simple. Cette manière de faire s’appelle virgule fixe, car la position de la virgule est connue d’avance. L’inconvénient de cette méthode est que, pour un nombre avec peu de chiffres après la virgule, on perd un espace de stockage significatif. Si le nombre en question est 0110 1000, on perd trois bits “inutilement”.

La virgule fixe est tout de même utilisée. Sur les processeurs à faible coût – les microcontrôleurs – n’ayant que la capacité de traiter les entiers et virgules fixes, c’est l’unique solution. Par ailleurs, dans certaines situations, la virgule fixe permet d’augmenter la vitesse d’exécution ou d’améliorer l’exactitude des calculs.


  
  ++++Virgule flottante++++
  
  
Pour palier à ce problème de perte d’espace induit par la virgule fixe, on utilise la méthode d’écriture à virgule flottante. Cette écriture représente les nombres de la manière suivante : signe × mantisse × baseexposant. La position de la virgule est fixée dans la mantisse. Par la suite, on la fait flotter en faisant varier l’exposant.

C’est exactement comme dans les notations scientifique et ingénieur. Ainsi, pour une même taille de stockage de quatre chiffres par exemple, on peut stocker aussi bien 1234 que 1,234 ou encore 0,1234, il suffit d’indiquer grâce à l’exposant où se place la virgule.



+The round() function in C++ returns the integral value that is nearest to the argument, with halfway cases rounded away from zero.
  
+float powf( float base, float exponent );
+The pow(), powf(), and powl() functions calculate the value of x to the power of y.

base	-	base as floating point value
exponent	-	exponent as floating point value
 
 
 
To convert from floating-point to fixed-point, we follow this algorithm:

Calculate x = floating_input * 2^(fractional_bits)

27.3 * 2^10 = 27955.2
Round x to the nearest whole number (e.g. round(x))

27955
-------------------------------------------------------------------------------------------------------------------------------
  
 📫Surcharge des opérateurs d’insertion de flux (<>) en C++:
  ----------------------------------------------------------------------------------------------------------------------------
  
En C++, l’opérateur d’insertion de flux « << » est utilisé pour la sortie et l’opérateur d’extraction « >> » est utilisé pour l’entrée. 
  
Nous devons connaître les éléments suivants avant de commencer à surcharger ces opérateurs. 
  
1) cout est un objet de la classe ostream et cin est un objet de la classe istream 
  
2) Ces opérateurs doivent être surchargés en tant que fonction globale. Et si on veut leur permettre d’accéder aux données 
privées des membres de la classe, il faut les faire ami. 
  
Pourquoi ces opérateurs doivent être surchargés comme globaux ? 
  
Dans la surcharge d’opérateur, si un opérateur est surchargé en tant que membre, alors il doit être un membre de l’objet sur le
  
côté gauche de l’opérateur. Par exemple, considérons l’instruction « ob1 + ob2 » (soit ob1 et ob2 des objets de deux classes 
différentes). Pour que cette instruction soit compilée, nous devons surcharger ‘+’ dans une classe de ‘ob1’ ou faire de ‘+’ une fonction globale. 
  
Les opérateurs ‘<<‘ et ‘>>’ sont appelés comme ‘cout << ob1’ et ‘cin >> ob1’. Donc, si nous voulons en faire une méthode membre,ils doivent être membres des classes ostream et istream, ce qui n’est pas une bonne option la plupart du temps. Par conséquent, ces opérateurs sont surchargés en tant que fonctions globales avec deux paramètres, cout et objet de classe définie par l’utilisateur.
  
Voici un programme C++ complet pour démontrer la surcharge des opérateurs <>.

                 /*class Complex
                  {
                      private:
                          int real, imag;
                      public:
                          Complex(int r = 0, int i =0)
                          {  real = r;   imag = i; }
                          friend ostream & operator << (ostream &out, const Complex &c);//l=operateur dextraction
                            friend istream & operator >> (istream &in,  Complex &c);//operateur dinsertion
                  };
 
                    ostream & operator << (ostream &out, const Complex &c)
                    {
                         out << c.real;
                         out << "+i" << c.imag << endl;
                          return out;
                    }
 
                    istream & operator >> (istream &in,  Complex &c)
                    {
                        cout << "Enter Real Part ";
                        in >> c.real;
                        cout << "Enter Imaginary Part ";
                        in >> c.imag;
                        return in;
                    }
 
                    int main()
                    {
                      Complex c1;
                      cin >> c1;
                      cout << "The complex object is ";
                      cout << c1;
                      return 0;
                    }*/




----------------------------------------------------------------------------------------------------------------------------------
      
📫 To understand  Operator Overloading == and + , *, /, -......
------------------------------------------------------------------------------------------

https://www.youtube.com/watch?v=ZcmQ5y7QyTc

http://www.java2s.com/ref/cpp/cpp-operator-overload-array-class-overloads-assignment-operator-and-c.html

https://www.geeksforgeeks.org/operator-overloading-c/#:~:text=In%20C%2B%2B%2C%20we%20can,is%20known%20as%20operator%20overloading.

----------------------------------------------------------------------------------------------------------------------------------

      
      
      
      
📈 ++C++ OPP::
------------
      
 1:👨‍ Encapsulation:
      
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users. To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class). If you want others to read or modify the value of a private member, you can provide public get and set methods.
      
2:👨‍💻  Inheritance:

In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:

derived class (child) - the class that inherits from another class
      
base class (parent) - the class being inherited from
      
To inherit from a class, use the : symbol.

In the example below, the Car class (child) inherits the attributes and methods from the Vehicle class (parent):
      
      
      ------Access Specifiers:
      
      You learned from the Access Specifiers chapter that there are three specifiers available in C++. Until now, we have only used public (members of a          class are accessible from outside the class) and private (members can only be accessed within the class). The third specifier, protected, is                similar to private, but it can also be accessed in the inherited class:
      
                  // Base class
                  class Employee 
                  {
                        protected: // Protected access specifier
                              int salary;
                  };

                  // Derived class
                  class Programmer: public Employee 
                  {
                        public:
                              int bonus;
                              void setSalary(int s) 
                              {
                                    salary = s;
                              }
                              int getSalary() 
                              {
                                    return salary;
                              }
                  };

                  int main() 
                  {
                        Programmer myObj;
                        myObj.setSalary(50000);
                        myObj.bonus = 15000;
                        cout << "Salary: " << myObj.getSalary() << "\n";
                        cout << "Bonus: " << myObj.bonus << "\n";
                        return 0;
                  }
      
3: 👨‍💻 virtual class:

![Need-of-Containership-in-C](https://user-images.githubusercontent.com/87101785/192095284-3f241c40-4786-473e-9c3f-61b38bf2c3ed.jpeg)

As we can see from the figure that data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error.

Example: To show the need of Virtual Base Class in C++

            #include <iostream>
            using namespace std;
  
            class A 
            {
                  public:
                        void show()
                        {           
                              cout << "Hello form A \n";
                        }
            };
  
            class B : public A {
            };
  
            class C : public A {
            };
  
            class D : public B, public C {
            };
  
            int main()
            {
                   D object;
                   object.show();
            }
      
      
            Compile Errors:

                  prog.cpp: In function 'int main()':
                  prog.cpp:29:9: error: request for member 'show' is ambiguous
                  object.show();
                        ^
                  prog.cpp:8:8: note: candidates are: void A::show()
                  void show()
                        ^
                  prog.cpp:8:8: note:                 void A::show()
      
            How to resolve this issue?
To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual as :

                  Syntax for Virtual Base Classes:

                  Syntax 1:
                  class B : virtual public A 
                  {
                  };

                  Syntax 2:
                  class C : public virtual A
                  {
                  };


4: 👨‍💻 Polymorphisme :
      
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

For example, think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.):


      
      
      Polymorphism in C++ means, the same entity (function or object) behaves differently in different scenarios.
      
                  // Base class
                  class Animal 
                  {
                        public:
                              void animalSound() 
                              {
                                    cout << "The animal makes a sound \n";
                              }
                  };

                  // Derived class
                  class Pig : public Animal 
                  {
                        public:
                              void animalSound() 
                              {
                                    cout << "The pig says: wee wee \n";
                              }
                  };

                  // Derived class
                  class Dog : public Animal 
                  {
                        public:
                              void animalSound() 
                              {
                                    cout << "The dog says: bow wow \n";
                              }
                  };
      
      Polymorphism in C++ is categorized into two types. The figure below shows the types:
      
      I. Function Overloading:
            
            Function overloading means one function can perform many tasks. In C++, a single function is used to perform many tasks with the same name             and different types of arguments.
      
                        for example :
                  
                        int ADD(int X,int Y)   // Function with parameter 
                        {
                                    return X+Y;     // this function is performing addition of  two Integer value
                        }
                        int ADD() 
                        {             
                              // Function with same name but without parameter
                              string a= "HELLO";
                              string b="SAM";   // in this function concatenation is performed
                              string c = a + b;
                              cout<<c<<endl;
                        }
      II. Function overriding :
            
            In function overriding, we give the new definition to base class function in the derived class. At that time, we can say the base function             has been overridden. It can be only possible in the ‘derived class’. In function overriding, we have two definitions of the same function,             one in the superclass and one in the derived class. The decision about which function definition requires calling happens at runtime. That             is the reason we call it ‘Runtime polymorphism’.
      
      
                        #include <iostream>  
                        using namespace std;  
                        class Animal 
                        {  
                              public:  
                                    void function()
                                    {    
                                          cout<<"Eating..."<<endl;    
                                    }      
                        };   
                        class Man: public Animal    
                        {    
                              public:  
                                    void function()    
                                    {    
                                          cout<<"Walking ..."<<endl;    
                                    }    
                        };  
                        int main(void) 
                        {  
                              Animal A =Animal();
                              A.function();   //parent class object 
                              Man m = Man();    
                              m.function();   // child class object
   
                              return 0;  
                        }
      (We have the same function in the base class and in the derived class so When we declare a virtual function, the compiler determines which             function to invoke at runtime.)
      
                        #include <iostream>  
                        using namespace std;  
                        class Animal 
                        {  
                              public:  
                                    virtual void function()
                                    {    
                                          cout<<"Eating..."<<endl;    
                                    }      
                        };   
                        class Man: public Animal    
                        {    
                              public:  
                                    void function()    
                                    {    
                                          cout<<"Walking ..."<<endl;    
                                    }    
                        };  
                        int main(void) 
                        {  
                              Animal A =Animal();
                              A.function();   //parent class object 
                              Man m = Man();    
                              m.function();   // child class object
   
                              return 0;  
                        }
      
      
5 : 👨‍ Classe abstraite:

En C++, une classe avec une fonction virtuelle pure est appelée une classe abstraite. Par exemple, la fonction suivante est une fonction virtuelle pure:

virtual void myFunction() = 0;

6: 👨‍ C++ Exceptions:

      +An exception is a problem that arises during the execution of a program. A C++ exception is a response to an exceptional circumstance that arises while a program is running, such as an attempt to divide by zero.
When executing C++ code, different errors can occur: coding errors made by the programmer, errors due to wrong input, or other unforeseeable things.

When an error occurs, C++ will normally stop and generate an error message. The technical term for this is: C++ will throw an exception (throw an error).
      
      C++ try and catch:
      
            Exception handling in C++ consist of three keywords: try, throw and catch:

            The try statement allows you to define a block of code to be tested for errors while it is being executed.

            The throw keyword throws an exception when a problem is detected, which lets us create a custom error.

            The catch statement allows you to define a block of code to be executed, if an error occurs in the try block.

            The try and catch keywords come in pairs:
      
      
                  Example:
      
                  try 
                  {
                        // Block of code to try
                        throw exception; // Throw an exception when a problem arise
                  }
                  catch () 
                  {
                        // Block of code to handle errors
                  }
      
👨=++++ Standard exceptions:

The C++ Standard library provides a base class specifically designed to declare objects to be thrown as exceptions. It is called std::exception and is defined in the <exception> header. This class has a virtual member function called what that returns a null-terminated character sequence (of type char *) and that can be overwritten in derived classes to contain some sort of description of the exception.

            // using standard exceptions
            #include <iostream>
            #include <exception>
            using namespace std;

            class myexception: public exception
            {
                  virtual const char* what() const throw()
                  {
                        return "My exception happened";
                  }
            } myex;

            int main () 
            {
                  try
                  {
                        throw myex;
                  }
                        catch (exception& e)
                        {
                              cout << e.what() << '\n';
                        }
                 return 0;
            }

👨+++++++. C++ Cast:

A cast is a special operator that forces one data type to be converted into another. As an operator, a cast is unary and has the same precedence as any other unary operator.

The most general cast supported by most of the C++ compilers is as follows −

(type) expression .
      
 ===   C++ supports four types of casting:
      
      1.Static Cast
      2. Dynamic Cast
      3. Const Cast
      4. Reinterpret Cast
      
-Static Cast: This is the simplest type of cast that can be used. It is a compile-time cast. It does things like implicit conversions between types (such as int to float, or pointer to void*), and it can also call explicit conversion functions (or implicit ones).

-Dynamic Cast: A cast is an operator that converts data from one type to another type. In C++, dynamic casting is mainly used for safe downcasting at run time. To work on dynamic_cast there must be one virtual function in the base class. A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.

                  Syntax:

                        dynamic_cast <new_type>(Expression)      
      
-Downcasting: Casting a base class pointer (or reference) to a derived class pointer (or reference) is known as downcasting. In figure 1  casting from the Base class pointer/reference to the “derived class 1” pointer/reference showing downcasting (Base ->Derived class).
     
<img width="804" alt="Screen Shot 2022-10-10 at 12 08 42 PM" src="https://user-images.githubusercontent.com/87101785/194852942-0191dba6-fa74-463e-a93c-495de765ca9b.png">

-Upcasting: Casting a derived class pointer (or reference) to a base class pointer (or reference) is known as upcasting. In figure 1 Casting from Derived class 2 pointer/reference to the “Base class” pointer/reference showing Upcasting (Derived class 2 -> Base Class).

-reinterpret_cast is the most dangerous cast, and should be used very sparingly. It turns one type directly into another — such as casting the value from one pointer to another, or storing a pointer in an int, or all sorts of other nasty things. Largely, the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type, you will get the exact same value (but not if the intermediate type is smaller than the original type). There are a number of conversions that reinterpret_cast cannot do, too. It's used primarily for particularly weird conversions and bit manipulations, like turning a raw data stream into actual data, or storing data in the low bits of a pointer to aligned data.

It is used to convert a pointer of some data type into a pointer of another data type, even if the data types before and after conversion are different.
It does not check if the pointer type and data pointed by the pointer is same or not.

  !== To understand dynamic-cast : https://www.ibm.com/docs/en/zos/2.3.0?topic=expressions-dynamic-cast-operator-c-only    
------NAN:
      
*The NaN values are used to identify undefined or non-representable values for floating-point elements, such as the square root of negative numbers or the result of 0/0.

nanf() function is a library function of cmath header, it is used to get the NaN value of type float. It accepts an argument (which is an implementation-specific C String – to get NaN value we have to pass an empty string), it returns NaN value of type float.

👨 C++ Class Templates:

      Templates are powerful features of C++ which allows us to write generic programs. There are two ways we can implement templates:

            =Function Templates
            =Class Templates
            
            Similar to function templates, we can use class templates to create a single class to work with different data types.


+++++=Shadow and deep copiees:
------------------------------

Deep Copy and Shallow Copy in C++


Deep Copy and Shallow Copy in C++ with Examples:

In this article, I am going to discuss Deep Copy and Shallow Copy in C++ with Examples. We have seen different Types of Constructors in our previous article and one of the constructors is the copy constructor that we have already discussed in our previous article.

Deep Copy and Shallow Copy in C++
Creating a copy of an object by copying data of all member variables as it is, is called shallow copy while creating an object by copying data of another object along with the values of memory resources that reside outside the object but handled by that object, is called deep copy.

In general, creating a copy of an object means creating an exact replica of the object having the same literal value, data type, and resources.

Depending upon the resources like dynamic memory held by the object, either we need to perform Shallow Copy or Deep Copy in order to create a replica of the object. In general, if the variables of an object have been dynamically allocated then it is required to do a Deep Copy in order to create a copy of the object.

In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from the heap section, then copied object variable will also reference the same memory location.

This will create ambiguity and run-time errors dangling pointer. Since both objects will reference the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy.

Example to Understand Shallow Copy and Deep Copy Constructors in C++:
Now let us see the problem with Shallow copy and then we will understand the need and use of a deep copy constructor in C++. Please have a look at the below example.

                                    class Test
                                    {
                                          int a;
                                          int *p;
                                           Test (int x)
                                          {
                                                a = x;
                                                p = new int[a];
                                          }
                                          Test (Test &t)
                                          {
                                                a = t.a;
                                                p = t.p;
                                          }
                                    };
                                    
  Here we have a class called Test with two constructors i.e. with one parameterized constructor and one copy constructor. We already discussed that we can define more than one constructor in a class i.e. constructor overloading. Next, we have the main function as,

int main(){
       Test t (3);
}

  Here we have created an object “t” of class “Test” with the value of 3. Now let us study the class and see what will be created.

![word-image-227](https://user-images.githubusercontent.com/87101785/196676327-9f2503f4-84cf-437a-8bb6-2d33e12e6724.png)
         
         
Here, the first constructor i.e. Test (int x) will be called as we are passing an integer value as an argument. Inside the constructor, a will assign to 3 and p will point to the address of 3 blocks of memory as we have created an array inside the heap of size a i.e. 3. Next, we will create another object that is t2 and we will pass t as an argument as follows.

            int main()
            {
                  Test t (5);
                  Test t2 (t);
            }
            
            
 So, which constructor we are calling? As we are passing ‘t’ as a parameter, so we are calling the copy constructor. Now for object ‘t2’, again memory is allocated for data members a and p.

![word-image-229](https://user-images.githubusercontent.com/87101785/196676517-729a6f14-2e9d-4f47-a5c6-880b17687de5.png)

Here t2.a is assigned to t.a. Which t? Object ‘t’ that we have created first. So t2.a is assigned to 3. Then t2.p will assign to t.p that is t2.p and t.p will point to the same memory address. This is wrong. This t2 object should have its own array of the same size.

Suppose this ‘t’ is mine and I am having my own array and you wanted the copy of this. So, you created an object like mine but you’re not having a new array. You are pointing to my array. Only I help you with copying. You should create your own array. Why you are pointing to my array? For you, a new array should be created.

So, the problem with the copy constructor is that if there is a dynamic memory allocation (memory allocation in the heap section) done by an object then the copy constructor will not create a new memory for it. It will point to the same memory. So, you have to be careful with this type of thing. So, what we are supposed to do here that we should modify the copy constructor as

Test(Test &t){
      a = t.a;
      p = new int [a];
}

So here everything will be copied and a new array will be created by the copy constructor. So, whenever you required a copy constructor just observe and find out whether you need a shallow copy constructor or a deep copy constructor.

And one more thing, if suppose already ‘t’ is having some elements in the array then also you should copy them. Everything we should take care of. Not just creating an array, if it is having the values copy the values also. So now let us write the complete program in C++ language.






                  Example to Understand Shallow Copy Constructor in C++:
                        #include <iostream>
                        using namespace std;
                        class Test
                        {
                              public:
                                    int a;
                                    int *p;
                              Test (int x)
                              {
                                    a = x;
                                    p = new int[a];
                              }
                              Test (Test & t)
                              {
                                    a = t.a;
                                    p = t.p;
                              }
                        };
                        int main()
                        {
                              Test t (5);
                              t.p[0] = 1;
                              Test t2 (t);
                              cout << "t: " << t.a << " " << t.p[0] << endl;
                              cout << "t2: " << t2.a << " " << t2.p[0] << endl;
                        }

      
                        Example to Understand Deep Copy Constructor in C++:
                       
                        #include <iostream>
                        using namespace std;
      
                        class Test
                        {
                              public:
                              int a;
                              int *p;
                              Test (int x)
                              {
                                    a = x;
                                    p = new int[a];
                              }
                              Test (Test & t)
                              {
                                    a = t.a;
                                    p = new int[a];
                                    if (p)
                                    {
                                          for (int i = 0; i < a; i++)
                                          {
                                                p[i] = t.p[i];
                                          }
                                    }
                              }
                        };
                                                                
                        int main()
                        {
                              Test t (5);
                              t.p[0] = 1;
                              Test t2 (t);
                              cout << "t: " << t.a << " " << t.p[0] << endl;
                              cout << "t2: " << t2.a << " " << t2.p[0] << endl;
                        }

                      





