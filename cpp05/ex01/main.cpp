#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Employe("Ahmed", 10);
	Bureaucrat student("souchen", 100);

	try
	{
		std::cout << Employe << std::endl;
		std::cout << student << std::endl;
		Employe.incrementGrade();
		student.decrementGrade();
		std::cout << Employe<< std::endl;
		std::cout << student << std::endl;
		Employe.incrementGrade();
		student.decrementGrade();
		std::cout << Employe << std::endl;
		std::cout <<student << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
