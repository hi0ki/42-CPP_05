#ifndef PRESIDENTIALPARDONFORM_HPP
	#define PRESIDENTIALPARDONFORM_HPP

	#include "AForm.hpp"


	class PresidentialPardonForm : public AForm
	{
		private:
			std::string target;
			PresidentialPardonForm();
		public:
			PresidentialPardonForm(std::string target);
			PresidentialPardonForm(PresidentialPardonForm &obj);
			~PresidentialPardonForm();

			void execute(const Bureaucrat&executor) const;

			PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
	};

#endif