# cpp-modules

Some useful informations:
-------------------------

1:C++ new Operator
------------------

The new operator allocates memory to a variable. For example,

// declare an int pointer

int* pointVar;

// dynamically allocate memory

// using the new keyword 

pointVar = new int;

// assign value to allocated memory

*pointVar = 45;

Here, we have dynamically allocated memory for an int variable using the new operator.

Notice that we have used the pointer pointVar to allocate the memory dynamically. This is because the new operator returns the address of the
memory location.

In the case of an array, the new operator returns the address of the first element of the array.

From the example above, we can see that the syntax for using the new operator is

pointerVariable = new dataType;

2: delete Operator
---------------
Once we no longer need to use a variable that we have declared dynamically, we can deallocate the memory occupied by the variable.

For this, the delete operator is used. It returns the memory to the operating system. This is known as memory deallocation.

The syntax for this operator is

delete pointerVariable;
