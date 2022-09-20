# cpp-modules


+ Some useful informations:
----------------------------

*Indirection or Dereferencing Operator (*)

The indirection operator (or dereferencing operator) (*) operates on a pointer, and returns the value stored in the address kept in the pointer variable. For example, if pNumber is an int pointer, *pNumber returns the int value "pointed to" by pNumber.

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
------------------------------

Pointers: A pointer is a variable that holds the memory address of another variable. A pointer needs to be dereferenced with the * operator to access the memory location it points to. 

References: A reference variable is an alias, that is, another name for an already existing variable. A reference, like a pointer, is also implemented by storing the address of an object. 
A reference can be thought of as a constant pointer (not to be confused with a pointer to a constant value!) with automatic indirection, i.e., the compiler will apply the * operator for you. 


&& Memory Address: A pointer has its own memory address and size on the stack, whereas a reference shares the same memory address with the original variable but also takes up some space on the stack.
