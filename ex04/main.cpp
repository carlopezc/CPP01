/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlopez <carlopez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:32:16 by carlopez          #+#    #+#             */
/*   Updated: 2025/12/10 17:34:24 by carlopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream file;
    std::string content;
    std::string line;
    size_t pos;
    size_t i;

    i = 0;
    if (argc != 4)
    {
        std::cout << "Incorrect number of parameters " << std::endl;
        return (1);
    }
    std::string argv2 = argv[2];
    std::string argv3 = argv[3];
    if (argv2.empty())
    {
        std::cout << "Search string is empty" << std::endl;
        return (1);
    }
    file.open(argv[1]);
    if (!file.is_open())
    {
        std::cout << "Error opening file";
        return (1);
    }
    while (std::getline(file, line))
    {
        content += line;
        if (!file.eof())
            content += "\n";
    }
    file.close();
    while (i < content.length())
    {
        pos = content.find(argv2, i);
        if (pos != std::string::npos)
        {
            content.erase(pos, argv2.length());
            content.insert(pos, argv3);
            i = pos + argv3.length();
        }
        else
            break ;
    }
    std::string outfile_name = std::string(argv[1]) + ".replace";
    std::ofstream outfile(outfile_name.c_str());
    if (!outfile.is_open())
    {
        std::cout << "Error opening output file" << std::endl;
        return (1);
    }
    outfile << content;
    outfile.close();
    return (0);
}