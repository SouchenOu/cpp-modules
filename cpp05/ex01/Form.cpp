#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name)
{
	this->name = name;
	this->signed = false;
	this->gradeSign = 1;
	this->gradeExec = 1;
	
}

Form::Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExec)
	: name(name), signed(false), gradeSign(gradeSign), gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& var)
	: name(var.name), signed(var.signed), gradeSign(var.gradeSign), gradeExec(var.gradeExec)
{
}

Form& Form::operator=(const Form& var)
{
	(void)var;
	return *this;
}

Form::~Form()
{
}

unsigned int Form::getGradeSign() const
{
	return this->gradeSign;
}

unsigned int Form::getGradeExec() const
{
	return this->gradeExec;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::isSigned() const
{
	return this->signed;
}

void Form::beSigned(const Bureaucrat& candidate)
{
	if (!this->signed)
	
		if (candidate.getGrade() <= this->gradeSign)
			this-signed = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormAlreadySignedException();
}

std::ostream& operator<<(std::ostream& out, const Form& var)
{
	out << "Form " << var.getName() << ": ";
	out << "{signed: " << std::boolalpha << var.isSigned() << ", gradeSign: " << var.getGradeSign() << ", gradeExec: " << var.getGradeExec() << "}";
	return o;
}
