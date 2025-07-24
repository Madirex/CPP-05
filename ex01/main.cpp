#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	std::cout << "--- Testing Form Creation ---" << std::endl;
	try
	{
		Form f1("Tax Form", 50, 25);
		std::cout << "Successfully created: " << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Failed to create form: " << e.what() << std::endl;
	}
	try
	{
		Form f2("Invalid Form High", 0, 25);
		std::cout << "Successfully created: " << f2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Failed to create form: " << e.what() << std::endl;
	}
	try
	{
		Form f3("Invalid Form Low", 50, 151);
		std::cout << "Successfully created: " << f3 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Failed to create form: " << e.what() << std::endl;
	}
	std::cout << std::endl;


	std::cout << "--- Testing Signing ---" << std::endl;
	Bureaucrat highGrade("Alice", 40);
	Bureaucrat lowGrade("Bob", 60);
	Form myForm("Project Approval", 50, 20);

	std::cout << highGrade << std::endl;
	std::cout << lowGrade << std::endl;
	std::cout << myForm << std::endl;
	std::cout << std::endl;

	std::cout << "--- Low grade tries to sign ---" << std::endl;
	lowGrade.signForm(myForm);
	std::cout << "Form status: " << (myForm.getIsSigned() ? "Signed" : "Not Signed") << std::endl;
	std::cout << std::endl;

	std::cout << "--- High grade tries to sign ---" << std::endl;
	highGrade.signForm(myForm);
	std::cout << "Form status: " << (myForm.getIsSigned() ? "Signed" : "Not Signed") << std::endl;
	std::cout << std::endl;

	std::cout << "--- High grade tries to sign again ---" << std::endl;
	highGrade.signForm(myForm);
	std::cout << std::endl;

	return 0;
}
