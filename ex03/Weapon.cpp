/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:19:30 by tsn               #+#    #+#             */
/*   Updated: 2025/10/20 00:33:20 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
    std::cout << "The weapon " << type << " was destroyed" << std::endl;
}

const std::string& Weapon::getType(void) const
{
    return (this->type);
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}