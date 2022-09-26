#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Employé("Ahmed", 10);
	Bureaucrat student("souchen", 100);

	try
	{
		std::cout << Employé << std::endl;
		std::cout << student << std::endl;
		Employé.incrementGrade();
		student.decrementGrade();
		std::cout << Employé<< std::endl;
		std::cout << student << std::endl;
		Employé.incrementGrade();
		student.decrementGrade();
		std::cout << Employé << std::endl;
		std::cout <<student << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
