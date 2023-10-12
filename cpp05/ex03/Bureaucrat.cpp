/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:07:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 11:56:29 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& original) : _name(original._name), _grade(original._grade) {}   

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& original) {
	if (this != &original)
		this->setGrade(original._grade);
	return (*this);
}

const std::string Bureaucrat::getName() const {
	return (this->_name);
}

int Bureaucrat::getGrade() const {
	return (this->_grade);
}

/*
	1 is the highest grade and 150 the lowest
*/

void Bureaucrat::incrementGrade() {
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	this->_grade += 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::setGrade(int grade) {
	this->_grade = grade;
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm& form) {
	if (form.getSigned())
		std::cout << this->getName() << " signed " << form.getName() << "." << std::endl;
	else {
		if (this->_grade <= form.getReqToSign())
			form.beSigned(*this);
		else {
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because is grade is too low." << std::endl;
			throw AForm::GradeTooLowException();
		}
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat exception: grade too high.\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception: grade too low.\n");
}

void Bureaucrat::executeForm(const AForm& form) {
	if (this->getGrade() > form.getReqToExec()) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " because their grade is too low." << std::endl;
		throw AForm::BureaucratGradeTooLowException();
	}
	if (!form.getSigned()) {
		std::cout << this->_name << " couldn't execute " << form.getName() << " because it wasn't signed." << std::endl;
		throw AForm::FormNotSignedException();
	}
	else {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << "." << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& src) {
	os << src.getName()	<< ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (os);
}