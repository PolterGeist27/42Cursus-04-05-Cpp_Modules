/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:07:34 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 11:05:05 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
		std::string _target;

    public:
        ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& original);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& original);

		virtual void specificExecute(void) const;
};
