/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:14:39 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/15 15:45:12 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <ctime>

class Contact {

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _darkest_secret;
        unsigned int _number;

    Contact();

    ~Contact();
};

#endif