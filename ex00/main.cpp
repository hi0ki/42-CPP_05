#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	try
	{
		Bureaucrat b1("b1", 10);
	}
	catch ()
	{
		std::cout << e.what() << '\n';
	}

	return 0;
}