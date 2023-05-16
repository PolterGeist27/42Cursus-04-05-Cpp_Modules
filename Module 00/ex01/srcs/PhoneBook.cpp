/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:01:12 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 15:15:30 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   PhoneBook:
 *       ◦ It has an array of contacts.
 *       ◦ It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
 *       replace the oldest one by the new one.
 *       ◦ Please note that dynamic allocation is forbidden.
 */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
    this->_size = 0;
    this->index = 0;
}

size_t  PhoneBook::getSize(void) {
    return this->_size;
}

void    PhoneBook::add(void)
{
    this->_contacts[this->index % 8].fill_info();
    this->index++;
    if (this->index >= 8)
        this->index = 0;
    if (this->_size < 8)
        this->_size++;
}

void    PhoneBook::search(void) {
    Contact contact;

    for (size_t i = 0; i < this->_size; i++) {
        std::cout << std::setw(10) << i <<"|";
        contact = this->_contacts[i];
        std::cout << std::setw(10) << contact.get_first_name() << "|";
        std::cout << std::setw(10) << contact.get_last_name() << "|";
        std::cout << std::setw(10) << contact.get_nickname() << "|";
        std::cout << std::endl;
    }
}

Contact PhoneBook::get_contact(int index) {
    return (this->_contacts[index]);
}
