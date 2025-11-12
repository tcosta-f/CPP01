/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 18:06:47 by tsn               #+#    #+#             */
/*   Updated: 2025/06/11 03:28:47 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout <<"Zombie " << name << " was destroyed"<< std::endl;
}

void Zombie::announce (void) const
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
