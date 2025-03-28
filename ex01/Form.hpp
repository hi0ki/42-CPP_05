#ifndef FORM_HPP
	#define FORM_HPP

	#include <iostream>

	class Form
	{
		private:
		const std::string name;
		bool isSigned;
		const int requiredGrade;
		const int requiredExecGrade;
		public:
		Form();
		Form(std::string name, int requiredGrade, int requiredExecGrade);
		Form(Form const &form);
		~Form();

		// operator
		Form &operator=(Form const &form);

		// getters
		std::string get_name() const;
		int get_requiredGrade() const;
		() const;


	}
#endif