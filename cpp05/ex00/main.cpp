#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Employ�("Ahmed", 10);
	Bureaucrat student("souchen", 100);

	try
	{
		std::cout << Employ� << std::endl;
		std::cout << student << std::endl;
		Employ�.incrementGrade();
		student.decrementGrade();
		std::cout << Employ�<< std::endl;
		std::cout << student << std::endl;
		Employ�.incrementGrade();
		student.decrementGrade();
		std::cout << Employ� << std::endl;
		std::cout <<student << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
