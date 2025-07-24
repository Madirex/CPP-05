#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute) :
	_name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& other) :
	_name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->_isSigned = other._isSigned;
	}
	return *this;
}

Form::~Form(void) {}

std::string Form::getName(void) const
{
	return this->_name;
}

bool Form::getIsSigned(void) const
{
	return this->_isSigned;
}

int Form::getGradeToSign(void) const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const
{
	return this->_gradeToExecute;
}

void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->_gradeToSign)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& os, const Form& f)
{
	os << "Form: " << f.getName()
	   << ", Signed: " << (f.getIsSigned() ? "Yes" : "No")
	   << ", Grade to Sign: " << f.getGradeToSign()
	   << ", Grade to Execute: " << f.getGradeToExecute();
	return os;
}
