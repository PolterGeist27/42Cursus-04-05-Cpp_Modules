/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:14:28 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/17 12:46:41 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include "Utils.hpp"

class PhoneBook {
    
    private:
        Contact _contacts[8];
        size_t  _size;
        int     _index;

    public:
        PhoneBook();
        void add(void);
        size_t getSize(void);
        void search_display(void);
        Contact get_contact(int index);
        void    search(void);
};

#endif