/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 12:28:30 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 13:01:16 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {}

Intern::Intern (const Intern& original) {
    (void)original;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern& original) {
    (void)original;
    return (*this);
}

AForm *Intern::makeShrubberyCreation(const std::string& target) {
    std::cout << "Intern creates shrubbery creation form." << std::endl;
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeRobotomyRequest(const std::string& target) {
    std::cout << "Intern creates robotomy request form." << std::endl;
    return (new RobotomyRequestForm(target));
}

AForm *Intern::makePresidentialPardon(const std::string& target) {
    std::cout << "Intern creates presidential pardon form." << std::endl;
    return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(const std::string& name, const std::string& target) {
    const std::string forms[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(Intern::*constructors[3])(const std::string&) = {
        &Intern::makeShrubberyCreation,
        &Intern::makeRobotomyRequest,
        &Intern::makePresidentialPardon
    };

    for (int i = 0; i < 4; i++) {
        if (forms[i] == name)
            return ((this->*constructors[i])(target));
    }
    std::cout << "Intern couldn't find form!" << std::endl;
    throw Intern::FormNotFoundException();
}

const char *Intern::FormNotFoundException::what() const throw() {
    return ("Intern exception: Form not found.");
}
