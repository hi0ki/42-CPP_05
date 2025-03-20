#ifndef ROBOTOMYREQUESTFORM_HPP
	#define ROBOTOMYREQUESTFORM_HPP

	#include "AForm.hpp"

	class RobotomyRequestForm : public AForm
	{
		private:
			std::string target;
			RobotomyRequestForm();
		public:
			RobotomyRequestForm(std::string target);
			RobotomyRequestForm(const RobotomyRequestForm &obj);
			RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
			void execute(const Bureaucrat &executor) const;
			~RobotomyRequestForm();
	};

#endif