#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat b1("b1", 2);
	b1.decrementGrade();
	std::cout << b1 << std::endl;
	return 0;
}