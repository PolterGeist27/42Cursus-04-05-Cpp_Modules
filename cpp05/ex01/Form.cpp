/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:06:05 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 12:47:30 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _reqToSign(150), _reqToExec(150) {}

Form::Form(std::string name, int reqToSign, int reqToExec) : _name(name), _isSigned(false), _reqToSign(reqToSign), _reqToExec(reqToExec){
    if (this->_reqToSign > 150 || this->_reqToExec > 150)
        throw Form::GradeTooLowException();
    if (this->_reqToSign < 1 || this->_reqToExec < 1)
        throw Form::GradeTooHighException();
}

Form::Form(const Form& original) : 
_name(original._name), _isSigned(original._isSigned), _reqToSign(original._reqToSign), _reqToExec(original._reqToExec) {}

Form::~Form() {}

Form &Form::operator=(const Form &original) {
    if (this != &original)
        this->_isSigned = original._isSigned;
    return (*this);
}

std::string Form::getName() {
    return (this->_name);
}

bool Form::getSigned() {
    return (this->_isSigned);
}

int Form::getReqToSign() {
    return(this->_reqToSign);
}

int Form::getReqToExec() {
    return (this->_reqToExec);
}

void Form::beSigned(Bureaucrat& bur) {
    if (this->_isSigned) {
        std::cout << "Form is already signed!" << std::endl;
        return;
    }
    if (bur.getGrade() <= this->getReqToSign()) {
        this->_isSigned = true;
        bur.signForm(*this);
    }
    else {
        bur.signForm(*this);
        throw Form::GradeTooLowException();
    }
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Form exception: grade too high.\n");
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Form exception: grade too low.\n");
}

std::ostream& operator<<(std::ostream& os, Form& src) {
    os << "Form " << src.getName() << ", requires grade " << src.getReqToSign() << " to be signed and grade " << src.getReqToExec() << " to be executed. ";
    if (src.getSigned())
        os << "This form is currently signed." << std::endl;
    else
        os << "This form is currently NOT signed." << std::endl;
    return (os);
}
