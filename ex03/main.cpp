#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main(void)
{
	Intern	someRandomIntern;
	AForm*	form;

	std::cout << "--- Testing Robotomy Request ---" << std::endl;
	form = someRandomIntern.makeForm("robotomy request", "Bender");
	if (form)
	{
		Bureaucrat b("Hermes", 1);
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;

	std::cout << "--- Testing Shrubbery Creation ---" << std::endl;
	form = someRandomIntern.makeForm("shrubbery creation", "Garden");
	if (form)
	{
		Bureaucrat b("Gardener", 130);
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;

	std::cout << "--- Testing Presidential Pardon ---" << std::endl;
	form = someRandomIntern.makeForm("presidential pardon", "Marvin");
	if (form)
	{
		Bureaucrat b("Zaphod", 1);
		b.signForm(*form);
		b.executeForm(*form);
		delete form;
	}
	std::cout << std::endl;

	std::cout << "--- Testing Unknown Form ---" << std::endl;
	form = someRandomIntern.makeForm("unknown form", "Nowhere");
	if (form)
	{
		delete form;
	}

	return 0;
}
