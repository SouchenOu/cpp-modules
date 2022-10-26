/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/26 11:46:31 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}



//we use reinterpret_cast : Between pointers and pointers (even of unrelated classes). All pointer conversions are allowed: neither the content pointed nor the pointer type itself is checked.
//Between integers and pointers.
//Between function-pointers and function-pointer


/**const_cast
can be used to remove or add const to a variable. This can be useful if it is necessary to add/remove constness from a variable.

static_cast
This is used for the normal/ordinary type conversion. This is also the cast responsible for implicit type coersion and can also be called explicitly. You should use it in cases like converting float to int, char to int, etc.

dynamic_cast
This cast is used for handling polymorphism. You only need to use it when you're casting to a derived class. This is exclusively to be used in inheritence when you cast from base class to derived class.

reinterpret_cast
This is the trickiest to use. It is used for reinterpreting bit patterns and is extremely low level. It's used primarily for things like turning a raw data bit stream into actual data or storing data in the low bits of an aligned pointer.*/



/**-reinterpret_cast is the most dangerous cast, and should be used very sparingly. It turns one type directly into another — such as casting the value from one pointer to another, or storing a pointer in an int, or all sorts of other nasty things. Largely, the only guarantee you get with reinterpret_cast is that normally if you cast the result back to the original type, you will get the exact same value*/