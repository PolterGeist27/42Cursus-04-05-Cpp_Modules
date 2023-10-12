/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 12:16:49 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer {

	public:
		Serializer();
		Serializer(const Serializer& original);
		~Serializer();
		Serializer& operator=(const Serializer& original);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};