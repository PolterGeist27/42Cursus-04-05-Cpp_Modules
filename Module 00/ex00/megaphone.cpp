/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 12:50:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/10 15:05:17 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
    //string input;
    vector<string> input;
    
    if (argc == 1)  {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
        return 0;
    }

    input.assign(argv, argv + argc);
    
    for (unsigned int i = 1; i < input.size(); i++)  {
        
       for (unsigned int j = 0; j < input[i].length(); j++)   {
            putchar(toupper(input[i][j]));
       }
    }
    cout << endl;
    return 0;
}