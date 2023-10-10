/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:08:04 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 12:10:32 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>


// Required grades: sign 72, exec 45

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& original) : AForm(original), _target(original._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm& original) {
	if (this != &original)
		this->_target = original._target;
	return (*this);
}

/*
	Should only work 50% of the time so lets get a random number and if it is divisible by 2
	the robotomy will be successful otherwise it will fail.
*/

void RobotomyRequestForm::specificExecute(void) const {

	// dont forget to seed the pseudo random numbers
	int randNum = std::rand();

	std::cout << "*DRILLING NOISES*" << std::endl;
	if (randNum % 2 == 0) {
		std::cout << this->_target << " has been robotomized!" << std::endl;
	}
	else
	{
		std::cout << "Robotomy of " << this->_target << " failed!" << std::endl;
	}
}
