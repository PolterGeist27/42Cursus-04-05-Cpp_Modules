/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:14:39 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 15:12:04 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include "Utils.hpp"

class Contact {

    private:
        std::string _first_name;
        std::string _last_name;
        std::string _nickname;
        std::string _darkest_secret;
        std::string _number;

    public:
        void fill_info(void);
        void print_contact(void);
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        std::string get_number(void);
        std::string get_darkest_secret(void);
};

#endif