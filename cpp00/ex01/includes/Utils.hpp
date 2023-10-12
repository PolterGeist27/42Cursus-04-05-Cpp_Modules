/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:15 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 10:09:58 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <stdlib.h>

std::string get_input(std::string prompt);
std::string format_string(std::string str);
bool is_number(std::string str);

#endif