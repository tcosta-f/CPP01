/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+         +:+     */
/*   Created: 2025/10/19 23:01:03 by tsn               #+#    #+#             */
/*   Updated: 2025/10/19 23:01:03 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
    std::cout << name << " is unarmed." << std::endl;
}

HumanB::~HumanB()
{
    std::cout << name << " has gone." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
    std::cout << name << " took the " << weapon.getType() << std::endl; 
}

void HumanB::attack() const
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " can't attack, is unarmed!" << std::endl;
}
