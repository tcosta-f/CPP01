/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 20:11:07 by tsn               #+#    #+#             */
/*   Updated: 2025/10/19 20:30:32 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;

    std::cout << "The memory address of the string variable is " << &brain << std::endl;
    std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of the string variable is " << brain << std::endl;
    std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
    std::cout << "The The value pointed to by stringREF is " << stringREF << std::endl;
}
