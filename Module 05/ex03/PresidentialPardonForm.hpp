/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 11:04:38 by diogmart         ###   ########.fr       */
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

		virtual void specificExecute(void) const;
};
