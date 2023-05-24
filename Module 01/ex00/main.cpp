/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:26:15 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 11:18:36 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    std::string zombie_name;
    std::string chump_name;

    std::cout << "Give the random chump a name: " << std::endl;
    std::cin >> chump_name;
    randomChump(chump_name);

    std::cout << "Give the new zombie a name: " << std::endl;
    std::cin >> zombie_name;

    zombie = newZombie(zombie_name);
    zombie->announce();
    delete zombie;

    return (0);
}