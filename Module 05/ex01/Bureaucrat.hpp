/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:07:18 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 12:42:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& original);
		~Bureaucrat();
		Bureaucrat &operator=(const Bureaucrat &original);

		const std::string getName();
		int getGrade();
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();

		void signForm(Form& form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat& src);

#endif