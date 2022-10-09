/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/09 21:09:15 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "data.hpp"

int main() {
    Data data1 = {20};
    std::cout << "value of data1 : ";
    std::cout << data1.data << '\n';
    std::cout << "address of Data : ";
    std::cout << &data1 << '\n';
    uintptr_t seria = serialize(&data1);
    std::cout << "takes a pointer and converts it to the unsigned integer type uintptr_t : ";
    std::cout << seria << '\n';
    Data *deseria = deserialize(seria);
    std::cout << "takes an unsigned integer parameter and converts it to a pointer to Data: ";
    std::cout << deseria->data << '\n';
}