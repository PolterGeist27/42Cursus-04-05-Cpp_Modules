/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:07:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 12:49:57 by diogmart         ###   ########.fr       */
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

const std::string Bureaucrat::getName() {
	return (this->_name);
}

int Bureaucrat::getGrade() {
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

void Bureaucrat::signForm(Form& form) {
	if (form.getSigned())
		std::cout << this->getName() << " signed " << form.getName() << "." << std::endl;
	else {
		if (this->_grade <= form.getReqToSign())
			form.beSigned(*this);
		else {
			std::cout << this->getName() << " couldn't sign " << form.getName() << " because is grade is too low." << std::endl;
			throw Form::GradeTooLowException();
		}
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat exception: grade too high.\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception: grade too low.\n");
}

std::ostream& operator<<(std::ostream& os, Bureaucrat& src) {
	os << src.getName()	<< ", bureaucrat grade " << src.getGrade() << "." << std::endl;
	return (os);
}