/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:06:08 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 15:27:00 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
    private:
        const std::string _name;
        bool _isSigned;
        const int _reqToSign;
        const int _reqToExec;

    public:
        AForm();
        AForm(std::string name, int reqToSign, int reqToExec);
        AForm(const AForm& original);
        ~AForm();
        AForm &operator=(const AForm &original);

        std::string getName() const;
        bool getSigned() const;
        int getReqToSign() const;
        int getReqToExec() const;

        void beSigned(Bureaucrat& bur);

        virtual void execute(Bureaucrat const & executor) const = 0;

        class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, AForm& src);
