#include <string>
#include <iostream>
#include <fstream>

void replace(char **argv)
{
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream ifFile(filename);
	if (ifFile.good())
	{
		if (ifFile.peek() == std::ifstream::traits_type::eof())
			std::cout << "Error: File is empty" << std::endl;
		else
		{
			std::ofstream ofFile(filename.append(".replace").data());
			while (ifFile.good() && ofFile.good())
			{
				std::string line;
				std::size_t found;
				std::getline(ifFile, line);
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
