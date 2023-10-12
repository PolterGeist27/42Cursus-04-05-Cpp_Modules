/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:20:27 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 11:41:49 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombies;
    std::string name;
    int number;

    std::cout << "Input a number of zombies to create: " << std::endl;
    std::cin >> number;
    
    std::cout << "Give the zombies a name: " << std::endl;
    std::cin >> name;
    
    zombies = zombieHorde(number, name);

    for (int i = 0; i < number; i++) {
        zombies[i].announce();
    }

    delete [] zombies;
}