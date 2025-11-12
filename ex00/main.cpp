/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 03:17:24 by tsn               #+#    #+#             */
/*   Updated: 2025/06/17 17:31:52 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
    Zombie *heapZombie;
    
    std::cout << "Creating stack Zombies" << std::endl;

    randomChump("StackZombie");

    std::cout << "Creating heap Zombies" << std::endl;

    heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete (heapZombie);
    return (0);
}
