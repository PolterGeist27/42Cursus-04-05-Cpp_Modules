/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:50:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/15 15:10:11 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <bits/stdc++.h>

int main(int argc, char **argv)
{
    if (argc == 1)  {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }

    for (int i = 1; i < argc; i++)  {

       for (unsigned int j = 0; j < strlen(argv[i]); j++)   {
            putchar(toupper(argv[i][j]));
       }
    }
    std::cout << std::endl;
    return 0;
}
