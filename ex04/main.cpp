/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaptist <mbaptist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:13:38 by mbaptist          #+#    #+#             */
/*   Updated: 2024/04/29 16:50:20 by mbaptist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2) {
    std::ifstream inputFile(filename.c_str());
    if (!inputFile)
    {
        std::cerr << "Error: can't open INput file: " << filename << std::endl;
        return;
    }
    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile)
    {
        std::cerr << "Error: can't create OUTput file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
    std::size_t pos = 0;
    std::size_t next_pos = 0;
    while ((pos = line.find(s1, next_pos)) != std::string::npos) {
        outputFile << line.substr(next_pos, pos - next_pos) << s2;
        next_pos = pos + s1.length();
    }
    outputFile << line.substr(next_pos) << std::endl;
}
    
    std::cout << "File: " << filename << " replaced with success " << s1 
              << " with " << s2 << std::endl;
    inputFile.close();
    outputFile.close();
}


int main (int argc, char **argv) {
    if (argc != 4) {
        std::cerr << "Use: " << argv[0] << " <filename> <find> <replace>" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceInFile(filename, s1, s2);
    
    return 0;
}


/*while (std::getline(inputFile, line)) {
        std::size_t pos = 0;

        while ((pos = line.find(s1, pos)) != std::string::npos) {
            outputFile << line.substr(0, pos) << s2;
            pos += s1.length();
        }
        if (pos == std::string::npos) {
            outputFile << line << std::endl;
        } else
            outputFile << line.substr(pos) << std::endl;
    }*/