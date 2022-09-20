# cpp-modules

****************************
🌱 Some useful informations:
****************************

*Indirection or Dereferencing Operator (*)

The indirection operator (or dereferencing operator) (*) operates on a pointer, and returns the value stored in the address kept in the pointer variable. For example, if pNumber is an int pointer, *pNumber returns the int value "pointed to" by pNumber.

* operator &

The meaning of symbol & is different in an expression and in a declaration. When it is used in an expression, & denotes the address-of operator, which returns the address of a variable, e.g., if number is an int variable, &number returns the address of the variable number (this has been described in the above section).

Howeve, when & is used in a declaration (including function formal parameters), it is part of the type identifier and is used to declare a reference variable (or reference or alias or alternate name). It is used to provide another name, or another reference, or alias to an existing variable.

-----For example:

-------------------------------------------------------------------------------------------
/* Test reference declaration and initialization (TestReferenceDeclaration.cpp) */

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

*The difference between reference and pointers:
-----------------------------------------------

1--Pointers: A pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the * operator to access the memory location it points to. 

2--References: A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e., the compiler will apply the * operator for you. 

A reference variable provides a new name to an existing variable. It is dereferenced implicitly and does not need the dereferencing operator * to retrieve the value referenced. On the other hand, a pointer variable stores an address. You can change the address value stored in a pointer. To retrieve the value pointed to by a pointer, you need to use the indirection operator *, which is known as explicit dereferencing. Reference can be treated as a const pointer. It has to be initialized during declaration, and its content cannot be changed.

Reference is closely related to pointer. In many cases, it can be used as an alternative to pointer. A reference allows you to manipulate an object using pointer, but without the pointer syntax of referencing and dereferencing.

The above example illustrates how reference works, but does not show its typical usage, which is used as the function formal parameter for pass-by-reference.


3--&& Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory address with the original variable but also takes up some space on the stack.



*Pass-By-Reference into Functions with Reference Arguments vs. Pointer Arguments:
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
  
