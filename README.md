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

protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.


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


*Indirection or Dereferencing Operator (*)

The indirection operator (or dereferencing operator) (*) operates on a pointer, and returns the value stored in the address kept in the pointer variable. For example, if pNumber is an int pointer, *pNumber returns the int value "pointed to" by pNumber.

* operator &

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
            
            
------------------------------------------------------------------------------------------------------------------
📫*******************************************Les fichier en c++:*******************************************
------------------------------------------------------------------------------------------------------------------
  
  
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

----------------------------------------------------------------------------------------------------------------------------------

      
      
      
      
📈 ++C++ OPP::
-------------
      
1:       Inheritance:
      
      
