#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("def_name"), grade(1)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw "you can't have a grade lower than 1";
	if (grade > 150)
		throw "you can't have a grade higher than 150";
	this->grade = grade;
	std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name) , grade(obj.grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat assignation operator called" << std::endl;
	if (this != &obj)
	{
		this->grade = obj.grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

//	methods

std::string Bureaucrat::getName() const
{
	return this->name;
}
int Bureaucrat::getGrade() const
{
	return this->grade;
}