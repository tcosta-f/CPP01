/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsn <tsn@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:40:00 by tsn               #+#    #+#             */
/*   Updated: 2025/10/22 00:51:49 by tsn              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// Função auxiliar que substitui todas as ocorrências de 's1' por 's2' dentro de uma string
std::string replaceAll(std::string line, const std::string &s1, const std::string &s2)
{
    size_t pos;

    pos = 0;
    // Procura todas as posições onde s1 aparece
    while ((pos = line.find(s1, pos)) != std::string::npos)
    {
        line.erase(pos, s1.length());   // Remove s1 da posição encontrada
        line.insert(pos, s2);           // Insere s2 no mesmo local
        pos += s2.length();             // Avança o cursor para depois da substituição
    }
    return (line);
}

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: ./sed <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (s1.empty())
    {
        std::cerr << "Error: s1 cannot be empty." << std::endl;
        return 1;
    }
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "Error: cannot open input file '" << filename << "'" << std::endl;
        return 1;
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "Error: cannot create output file '" << filename << ".replace'" << std::endl;
        infile.close();
        return 1;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        outfile << replaceAll(line, s1, s2);
        if (!infile.eof())
            outfile << std::endl;
    }
    return (0);
}
