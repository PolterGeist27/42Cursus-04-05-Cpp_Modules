/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 12:22:53 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {
	private:
		// Since this is a static class and can't be instantiated the
        // Constructors and Destructors should be private.
		Serializer();
		Serializer(const Serializer& original);
		~Serializer();
		Serializer& operator=(const Serializer& original);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};