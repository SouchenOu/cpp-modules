#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(const std::string& name)
{
	this->name = name;
	this->signed = false;
	this->gradeSign = 1;
	this->gradeExecute = 1;
	
}

Form::Form(const std::string& name, const unsigned int gradeSign, const unsigned int gradeExecute)
	: name(name), signed(false), gradeSign(gradeSign), gradeExecute(gradeExecute)
{
	if (gradeSign < 1 || gradeExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
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

unsigned int Form::getGradeExecute() const
{
	return this->gradeExecute;
}

std::string Form::getName() const
{
	return this->name;
}

bool Form::getSignedOuNon() const
{
	return this->signedOuNon;
}

void Form::beSigned(const Bureaucrat& candidate)
{
	if (!this->signedOuNon)
	
		if (candidate.getGrade() <= this->gradeSign)
			this-signedOuNon = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::FormAlreadySignedException();
}

std::ostream& operator<<(std::ostream& out, const Form& var)
{
	out << "Form " << var.getName() << ": ";
	out << "signed: " << std::boolalpha << var.getSignedOuNon() << ", gradeSign: " << var.getGradeSign() << ", gradeExec: " << var.getGradeExecute() << "\n";
	return out;
}
