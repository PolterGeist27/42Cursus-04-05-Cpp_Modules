/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:01:08 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 15:12:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 *   Contact:
 *       ◦ Stands for a phonebook contact.
 */

#include "../includes/Contact.hpp"

void Contact::print_contact(void) {
    std::cout << "First name: " + this->_first_name << std::endl;
    std::cout << "Last name: " + this->_last_name << std::endl;
    std::cout << "Nickname: " + this->_nickname << std::endl;
    std::cout << "Phone number: " + this->_number << std::endl;
    std::cout << "Darkest secret: " + this->_darkest_secret << std::endl;
}

void Contact::fill_info(void) {
    this->_first_name = get_input("First name: ");
    this->_last_name = get_input("Last name: ");
    this->_nickname = get_input("Nickname: ");
    this->_number = get_input("Phone number: ");
    this->_darkest_secret = get_input("Darkest secret: ");
}

std::string Contact::get_first_name(void) {
    return (this->_first_name);
}

std::string Contact::get_last_name(void) {
    return (this->_last_name);
}

std::string Contact::get_nickname(void) {
    return (this->_nickname);
}

std::string Contact::get_number(void) {
    return (this->_number);
}

std::string Contact::get_darkest_secret(void) {
    return (this->_darkest_secret);
}

