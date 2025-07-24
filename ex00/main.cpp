#include "Bureaucrat.hpp"

void test_constructor(const std::string& name, int grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "Successfully created: " << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Failed to create " << name << ": " << e.what() << std::endl;
	}
}

void test_increment(const std::string& name, int grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "Before increment: " << b << std::endl;
		b.incrementGrade();
		std::cout << "After increment:  " << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during increment: " << e.what() << std::endl;
	}
}

void test_decrement(const std::string& name, int grade)
{
	try
	{
		Bureaucrat b(name, grade);
		std::cout << "Before decrement: " << b << std::endl;
		b.decrementGrade();
		std::cout << "After decrement:  " << b << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Error during decrement: " << e.what() << std::endl;
	}
}

int main(void)
{
	std::cout << "--- Testing Constructors ---" << std::endl;
	test_constructor("Valid Bob", 75);
	test_constructor("TooHigh Alice", 0);
	test_constructor("TooLow Charlie", 151);
	std::cout << std::endl;

	std::cout << "--- Testing Increment ---" << std::endl;
	test_increment("Normal Dave", 42);
	test_increment("Maxed Eve", 1);
	std::cout << std::endl;

	std::cout << "--- Testing Decrement ---" << std::endl;
	test_decrement("Normal Frank", 42);
	test_decrement("Minned Grace", 150);
	std::cout << std::endl;

	return 0;
}
