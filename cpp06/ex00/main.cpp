/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/25 18:23:51 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <iostream>
#include <string>
#include <iomanip>

//Check if it is float 
bool FloatType(char* str)
{
    int i;
    size_t pos;
    i = 0;
    pos = 0;
    
    if(!strcmp(str, "-inff"))
        return true;
    if(!strcmp(str, "+inff"))
        return true;
    if(!strcmp(str, "nanf"))
        return true;
    while(str[i] != '\0')
    {
        if (str[i] == '.')
        {
            pos = i;
        }
        i++;
    }
    i = 0;
    if(str[0] == '-')
        i++;
    if(pos == 0)
    {
         return false;
    }
    int j = strlen(str) - 1;
    while(i < j)
    {
        if(!isnumber(str[i]) && str[i] != '.')
        {
            return false;
        }
        i++;
    }
    if(str[strlen(str) -1] != 'f')
    {
        return false;
    }
    return true;
}

//Check if it is integer
bool IntType(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-')
        i++;
    while (str[i])
    {
        if (!isnumber(str[i]))
            return false;
        i++;
    }
    return true;
}

//Check if it is double
bool DoubleType(char *str)
{
    int i;
    size_t pos;
    i = 0;
    pos = 0;
    
    if(!strcmp(str, "-inff"))
        return true;
    if(!strcmp(str, "+inff"))
        return true;
    if(!strcmp(str, "nan"))
        return true;
    while(str[i] != '\0')
    {
        if (str[i] == '.')
        {
            pos = i;
        }
        i++;
    }
    i = 0;
    if(str[0] == '-')
        i++;
    if(pos == 0)
    {
         return false;
    }
    int j = strlen(str) - 1;
    while(i < j)
    {
        if(!isnumber(str[i]) && str[i] != '.')
        {
            return false;
        }
        i++;
    }
    return true;
}

// Check if it is Char
bool CharType(std::string str)
{
    if(str.length() == 1 && !isnumber(str[0]) && isascii(str[0]))
        return true;
    return false;
}

void   convertTochar(double nb)
{
    try
    {
        if (nb < 0 || nb > 127)
        {
           throw std::invalid_argument( "char: impossible\n" );
        }
        char a = static_cast<char>(nb);
        
        if (nb <= 32 || nb >= 127)
        {
             throw std::invalid_argument( "char: Non displayable\n");
        }
        else
        {
            std::cout << "char: " << a << "\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }
    
}

void   convertToint(double nb)
{
    //thrown as exception. It reports errors that arise because an argument value has not been accepted.
    //try
    //{
        //if (nb > 2147483647 || nb < -2147483648)
            //throw std::invalid_argument( "int:impossible\n");
        std::cout << "int: " << static_cast<int>(nb) << "\n";
    //}
   // catch(const std::exception& e)
   // {
    //    std::cout << e.what();
    //}
    
}

void    convertTodouble(float nb)
{
    try
    {
        std::cout << "double: "  << static_cast<double>(nb) << "\n";
    }
    catch(const std::exception& e)
    {
        std::cout << "double:impossible\n";
    }
    
}

void    convertTofloat(double a)
{
    try
    {
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f\n";
    }
    catch(const std::exception& e)
    {
       std::cout << "float:impossible\n";
    }
    
}

void   FromChar(std::string x)
{
    int a = static_cast<int>(x[0]);
    convertTochar(static_cast<double>(a));
    convertToint(static_cast<double>(a));
    convertTofloat(static_cast<double>(a));
    convertTodouble(static_cast<float>(a));
}

void   FromInt(std::string str)
{
    try
    {
    //In C++, the stoi() function converts a string to an integer value
       int nb = std::stoi(str);//the stoi() function converts a string to an integer value
        convertTochar(static_cast<double>(nb));
        convertToint(static_cast<double>(nb));
        convertTofloat(static_cast<double>(nb));
        convertTodouble(static_cast<float>(nb));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
void   FromFloat(std::string x)
{
    try
    {
        float a = std::stof(x);
        convertTochar(static_cast<double>(a));
        convertToint(static_cast<double>(a));
        convertTofloat(static_cast<double>(a));
        convertTodouble(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void    FromDouble(std::string x)
{
    try
    {
       double a = std::stold(x);
        convertTochar(a);
        convertToint(a);
        convertTofloat(a);
        convertTodouble(static_cast<float>(a));
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

bool    SomeCases(std::string str)
{
    if (str.compare("nan") && str.compare("nanf") && str.compare("-inf")
        && str.compare("-inff") && str.compare("+inff") && str.compare("+inf"))
        return (false);
    std::cout << "char: impossible\n";
    std::cout << "int: impossible\n";
    if (!str.compare("-inf") || !str.compare("-inff"))
    {
        std::cout << "float: -inff\n";
        std::cout << "double: -inf\n";
    }
    if (!str.compare("nan") || !str.compare("nanf"))
    {
        std::cout << "float: nanf\n";
        std::cout << "double: nan\n";
    }
    if (!str.compare("+inff") || !str.compare("+inf"))
    {
        std::cout << "float: +inff\n";
        std::cout << "double: +inf\n";
    }
    return (true);
}

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
       if (CharType(argv[1]) || FloatType(argv[1]) || DoubleType(argv[1]) || IntType(argv[1]))
       {
           if (CharType(argv[1]))
               FromChar(argv[1]);
           else if (DoubleType(argv[1]) == true)
           {
               if (SomeCases(argv[1]) == true)
                    return (1);
              FromDouble(argv[1]);
           }
           else if (IntType(argv[1]))
               FromInt(argv[1]);
           else if (FloatType(argv[1]) == true)
           {
               if (SomeCases(argv[1]) == true)
                    return (1);
               FromFloat(argv[1]);
           }
       }
       else
       {
           std::cout << "This Type doesnt match to anyType here!\n";
       }
    }
    return 0;
}


