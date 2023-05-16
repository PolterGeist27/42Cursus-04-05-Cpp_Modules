/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:02:46 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 15:09:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int main(int argc, char **argv)
{
    std::string input;
    PhoneBook phonebook;

    (void)argv;
    if (argc != 1) {
        std::cout << "Error: Wrong number of arguments." << std::endl;
        return (1);
    }

    std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
    
    do {
        std::cout << "Available commands:\n -ADD: save a new contact\n -SEARCH: display a specific contact\n -EXIT" << std::endl;
        std::cout << "Please enter a command: ";
        std::cin >> input;

        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH") {
            phonebook.search();
            int index;
            do {
                std::cout << "Please enter the index of the contact you want to display: ";
                std::cin >> index;
            } while (index < 0 || index > 7);
            phonebook.get_contact(index).print_contact();
        }
    }   while (input != "EXIT");
    return 0;
}