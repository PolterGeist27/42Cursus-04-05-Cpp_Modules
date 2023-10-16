/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:07:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/16 15:26:11 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void iter(T *arr, int len, void (*f)(T&)) {
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template <typename T>
void print(T& a) {
	std::cout << a << " ";
}