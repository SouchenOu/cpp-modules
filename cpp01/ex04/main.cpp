/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/10/13 10:59:49 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(char **argv)
{
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	
	std::ifstream ifFile(filename);// read access
	if (ifFile.is_open()) // ou if(ifFile.good()) // Est ce que le fichier est effectivement ouvert ou bien no
	{
		if (ifFile.peek() == EOF) // eof() : means endofline
			std::cout << "Error: File is empty" << std::endl;
		else
		{
			std::ofstream ofFile(argv[1] + (std::string) ".replace");//create and write
			std::string line;
			std::size_t found_index;
			while (ifFile.good() && ofFile.good())
			{
				std::getline(ifFile, line);// read line by line 
				found_index = line.find(s1, 0);//found is a position of the first char in s1 at line
				while (found_index != std::string::npos)//means until the end of the string.
				{
					line.erase(found_index, s1.length());
					line.insert(found_index, s2);
					found_index = line.find(s1, found_index + s2.length());
				}
				ofFile << line;
				if (ifFile.eof())
					break;
				ofFile << "\n";
			}
			ifFile.close();
			ofFile.close();
		}
	}
	else
		std::cout << "Error: " << "no such file or directory" << "\n";
}

int main(int argc, char **argv)
{
	if (argc == 4 && strlen(argv[2]) != 0)
		replace(argv);
	else
		std::cout << "Error: write ->: ./file <filename> <String> <remplaceString>" << "\n";
}
