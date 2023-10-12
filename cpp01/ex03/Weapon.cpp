/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:10:29 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 12:28:49 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type) {
}

Weapon::~Weapon() {
}

const std::string &Weapon::getType( void ) {
    return this->_type;
}

void Weapon::setType( std::string type ) {
    this->_type = type;
}
