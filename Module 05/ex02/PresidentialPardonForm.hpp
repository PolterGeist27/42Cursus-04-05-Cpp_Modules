/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 15:13:33 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
		std::string _target;

    public:
        PresidentialPardonForm();
		 PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm& original);
        ~PresidentialPardonForm();
        PresidentialPardonForm &operator=(const PresidentialPardonForm& original);

		virtual void execute(const Bureaucrat& executor) const;
};
