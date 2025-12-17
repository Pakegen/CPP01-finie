#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char *av[])
{
	if (ac != 4)
		return (std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl, 1);

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
		return (std::cerr << "Error: s1 cannot be empty." << std::endl, 1);

	std::ifstream infile(filename.c_str());
	if (!infile)
		return (std::cerr << "Error: could not open input file." << std::endl, 1);

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
		return (std::cerr << "Error: could not create output file." << std::endl, 1);

	std::string line;
	while (std::getline(infile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		outfile << line;
		if (!infile.eof())
			outfile << '\n';
	}

	return 0;
}
