#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Intern::~Intern(void)
{
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	int i = 0;
	while (i < 3 && formNames[i] != formName)
	{
		i++;
	}

	AForm* form = NULL;
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Intern cannot create form '" << formName << "' because it is an unknown type." << std::endl;
			return NULL;
	}

	std::cout << "Intern creates " << formName << std::endl;
	return form;
}
