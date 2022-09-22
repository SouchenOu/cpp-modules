/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souchen <souchen@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:33:56 by souchen           #+#    #+#             */
/*   Updated: 2022/09/22 11:27:04 by souchen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(char **argv)
{
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream ifFile(filename);
	if (ifFile.is_open()) // ou if(ifFile.good()) // Est ce que le fichier est effectivement overt ou bien no
	{
		if (ifFile.peek() == std::ifstream::traits_type::eof()) // eof() : means endofline
			std::cout << "Error: File is empty" << std::endl;
		else
		{
			std::ofstream ofFile("file-replace.txt");
			while (ifFile.good() && ofFile.good())
			{
				std::string line;
				std::size_t found;
				std::getline(ifFile, line);// read line by line 
				found = line.find(s1, 0);
				while (found != std::string::npos)
				{
					line.erase(found, s1.length());
					line.insert(found, s2);
					found = line.find(s1, found);
				}
				ofFile << line;
				if (ifFile.eof())
					break;
				ofFile << std::endl;
			}
			ifFile.close();
			ofFile.close();
		}
	}
	else
		std::cout << "Error: " << strerror(errno) << std::endl;
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv);
	else
		std::cout << "Error: Usage: ./replace <filename> <string 1> <string 2>" << std::endl;
}


/*int main()
{

	// ecrire dans un fichier
	ofstream monFlux("file.txt");  //On essaye d'ouvrir le fichier
   //Si je fais ofstream monFlux("file.txt, ios::app"); on va ajouter a tout ce que ce trouve avant dans ce fichier, on ne peux pas supprimer
   	if(monFlux.good())  //On teste si tout est OK
   	{
		  monFlux << "hello" <<std::endl;
		  monFlux << "souchen" <<std::endl;
	   //Tout est OK, on peut utiliser le fichier
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}
		return 0;
}*/


// pour lire un fichier
/*int main()
{

	// lire dans un fichier
	ifstream lire("file.txt");  //On essaye de lire le fichier
   	if(lire.good())  //On teste si tout est OK
   	{
		   std::string line;
		  while(!lire.eof())
		  {
			  getline(lire,line);
			  cout << line << std::endl;
		  }
	   //Tout est OK, on peut utiliser le fichier
	}
	else
	{
		cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	}
		return 0;
}*/