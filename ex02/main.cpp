#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	srand(time(NULL));

	Bureaucrat high("High-Grade Exec", 1);
	Bureaucrat mid("Mid-Grade Signer", 40);
	Bureaucrat low("Low-Grade Intern", 140);

	ShrubberyCreationForm	shrub("garden");
	RobotomyRequestForm		robot("Bender");
	PresidentialPardonForm	pardon("Ford Prefect");

	std::cout << "--- Testing Shrubbery ---" << std::endl;
	mid.signForm(shrub);
	low.executeForm(shrub);
	mid.executeForm(shrub);
	std::cout << std::endl;

	std::cout << "--- Testing Robotomy ---" << std::endl;
	mid.signForm(robot);
	high.executeForm(robot);
	high.executeForm(robot);
	std::cout << std::endl;

	std::cout << "--- Testing Pardon ---" << std::endl;
	high.signForm(pardon);
	high.executeForm(pardon);
	std::cout << std::endl;
	
	std::cout << "--- Testing Failures ---" << std::endl;
	low.executeForm(pardon);
	mid.signForm(pardon);
	
	RobotomyRequestForm unsignedRobot("Unsigned");
	high.executeForm(unsignedRobot);

	return 0;
}
