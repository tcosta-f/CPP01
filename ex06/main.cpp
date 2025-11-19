/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 03:14:52 by tsn               #+#    #+#             */
/*   Updated: 2025/11/18 17:51:36 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
    std::string command;
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Usage: ./Harl ... <level>" << std::endl;
		return (-1);		
	}
	command = argv[1];
    harl.complain(command);
    return (0);
}
