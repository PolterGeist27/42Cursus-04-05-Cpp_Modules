/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:07:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 11:04:59 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

// Required grades: sign 145, exec 137

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& original) : AForm(original), _target(original._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm& original) {
	if (this != &original)
		this->_target = original._target;
	return (*this);
}

void ShrubberyCreationForm::specificExecute(void) const {
	std::ofstream outfile;

	outfile.open((this->_target + "_shrubbery").c_str());
	if (outfile.is_open()) {
		outfile << "         _-_         " << "\n";
    	outfile << "      /~~   ~~\\	 " << "\n";
 		outfile << "   /~~         ~~\\  " << "\n";
		outfile << "  {               }  " << "\n";
 		outfile << "   \\  _-     -_  /  " << "\n";
   		outfile << "     ~  \\\\ //  ~    " << "\n";
		outfile << "  _- -   | | _- _   " << "\n";
		outfile << "    _ -  | |   -_   " << "\n";
		outfile << "        // \\\\     " << "\n";
		outfile.close();
	}
}
