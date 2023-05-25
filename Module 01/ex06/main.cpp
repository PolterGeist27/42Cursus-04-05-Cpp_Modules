/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:13:37 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:34:30 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cout << "Wrong number of arguments!" << std::endl;
        return (0);
    }

    Harl harl;
    std::string input = argv[1];

    harl.filter(argv[1]);
    return (0);
}