/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:07:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/04 15:55:38 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	try {
		this->_grade = grade;
		if (this->_grade < 1)
			throw(GradeTooHighException& e);
		if (this->_grade > 150)
			throw(GradeTooLowException& e);
	}
	catch (Bureaucrat::GradeTooHighException) {
		//handle
	}
	catch (Bureaucrat::GradeTooLowException) {
		//handle
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& original) : _name(original._name), _grade(original._grade) {}   

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& original) {
	if (this != &original)
		this->_grade = original._grade;
	return (*this);
}

const std::string Bureaucrat::getName() {
	return (this->_name);
}

int Bureaucrat::getGrade() {
	return (this->_grade);
}

void Bureaucrat::incrementGrade(int value) {
	try {
		this->_grade -= value;
		if (this->_grade < 1)
			;//throw exception
	}
	catch (std::exception) {
		// handle exception
	}
}

void Bureaucrat::decrementGrade(int value) {
	try {
		this->_grade += value;
		if (this->_grade > 150)
			;//throw exception
	}
	catch (std::exception) {
		// handle exception
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Bureaucrat exception: grade too high.\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Bureaucrat exception: grade too low.\n");
}
