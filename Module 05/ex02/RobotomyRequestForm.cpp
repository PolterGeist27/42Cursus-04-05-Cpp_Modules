/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:08:04 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 15:20:02 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

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

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > this->getReqToExec())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSigned())
		; // throw exception
	// execute
}
