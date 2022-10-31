#include "span.hpp"
#include <numeric>
#include <iostream>
#include <cstdlib>

Span::Span(const unsigned int& N)      
{
    std::cout << "span: constructer with parameter\n";
    this->N = N;
}

Span::Span(const Span& other)   
{
    std::cout << "Span: copy constructer called\n";
    this->vector = other.vector;
    this->N = other.N;
}

Span::~Span()
{
    std::cout << "Span: Destructer called\n";
}

Span& Span::operator=(const Span& var)
{
    std::cout << "Span : assignment operater called\n";
        if (&var == this)
            return (*this);
        this->vector = var.vector;
        this->N = var.N;
        
        return *this;
}

void Span::addNumber(int number)
{
        if (this->vector.size() < this->N)
                this->vector.push_back(number);
        else
                throw IsFullException();
}

unsigned int Span::shortestSpan() const
{
        std::vector<int>::iterator i;
        std::vector<int> vect;

        int (*varAbs)(int) = &std::abs;
       
        if (this->vector.size() <= 1)
                throw IsEmptyException();
        std::adjacent_difference(this->vector.begin(), this->vector.end(), std::back_inserter(vect));
        /*std::cout << "Her vector after adjacent difference \n";
        for (i = vect.begin(); i != vect.end(); ++i)
        {
                std::cout <<*i << "\n";
        }
         std::cout << "Finish output\n";*/
        std::transform(vect.begin(), vect.end(), vect.begin(), varAbs);//Apply valAbs to all elements of vect[] and store the modified elements from vect.begin
        /*std::cout << "Her vector after transform function \n";
        for (i = vect.begin(); i != vect.end(); ++i)
        {
                std::cout <<*i << "\n";
        }
         std::cout << "Finish output\n";*/
        return *min_element(vect.begin(), vect.end());
}

unsigned int Span::longestSpan() const
{
        std::vector<int> vect;

        int (*varAbs)(int) = &std::abs;
        if (this->vector.size() <= 1)
                throw IsEmptyException();
        std::adjacent_difference(this->vector.begin(), this->vector.end(), std::back_inserter(vect));
        std::transform(vect.begin(), vect.end(), vect.begin(), varAbs);
        return *max_element(vect.begin(), vect.end());
}