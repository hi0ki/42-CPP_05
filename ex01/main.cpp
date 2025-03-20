#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{

	try 
	{
		Form form("form", 1, 1);
		const Bureaucrat bureaucrat("bureaucrat1", 10);
		bureaucrat.signForm(form);
		form.beSigned(bureaucrat);
		std::cout << "------------\n";
		std::cout << form;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}