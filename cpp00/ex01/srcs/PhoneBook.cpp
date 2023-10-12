/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:01:12 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 10:11:05 by diogmart         ###   ########.fr       */
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
    this->_index = 0;
}

size_t  PhoneBook::getSize(void) {
    return this->_size;
}

void    PhoneBook::add(void)
{
    std::cout << std::endl << "Add new contact: " << std::endl; 
    this->_contacts[this->_index % 8].fill_info();
    std::cout << std::endl << "Contact added!" << std::endl;
    std::cout << std::endl;
    this->_index++;
    if (this->_index >= 8)
        this->_index = 0;
    if (this->_size < 8)
        this->_size++;
}

void    PhoneBook::search_display(void) {
    Contact contact;

    for (size_t i = 0; i < this->_size; i++) {
        std::cout << std::setw(10) << i <<"|";
        contact = this->_contacts[i];
        std::cout << std::setw(10) << format_string(contact.get_first_name()) << "|";
        std::cout << std::setw(10) << format_string(contact.get_last_name()) << "|";
        std::cout << std::setw(10) << format_string(contact.get_nickname()) << "|";
        std::cout << std::endl;
    }
}

Contact PhoneBook::get_contact(int index) {
    return (this->_contacts[index]);
}

void PhoneBook::   search(void)
{
    if (this->_size == 0) {
        std::cout << "Add a contact first!" << std::endl;
        return;
    }
    this->search_display();
    std::string in_index;
    int index;
    do {
        std::cout << "Please enter the index of the contact you want to display: ";
         getline(std::cin, in_index);
        if (in_index == "EXIT")
            break;
        if (!is_number(in_index)) {
            std::cout << "Invalid index!" << std::endl;
            continue;
        }
        index = atoi(in_index.c_str());
        if (index < 0 || index >= (int)this->_size)
            std::cout << "No contact with that index!" << std::endl;
    } while (index < 0 || index >= (int)this->_size);
    if (in_index != "EXIT" && is_number(in_index))
        this->get_contact(index).print_contact();
}
