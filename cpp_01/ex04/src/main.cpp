/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 14:19:52 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/09 15:18:26 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

static std::string unescape(const std::string& s)
{
	std::string out;
	out.reserve(s.size());
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		if (s[i] == '\\' && i + 1 < s.size())
		{
			char c = s[i + 1];
			if (c == 'n')
			{
				out += '\n';
				i++;
			}
			else if (c == 't')
			{
				out += '\t';
				i++;
			}
			else if (c == '\\')
			{
				out += '\\';
				i++;
			}
			else
				out += s[i];
		}
		else
			out += s[i];
	}
	return (out);
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "Usage: ./replace <filename> <search> <replacement>" << std::endl;
		return (1);
	}
	const std::string filename = av[1];
	std::string search = unescape(av[2]);
	std::string replace = unescape(av[3]);

	std::ifstream in(filename.c_str());
	if (!in)
	{
		std::cout << "Can't read file " << filename << std::endl;
		return (1);
	}

	std::ostringstream buffer;
	buffer << in.rdbuf();
	std::string text = buffer.str();

	std::ofstream out((filename + ".replace").c_str());
	if (!out)
	{
		std::cout << "Can't write file " << filename << ".replace" << std::endl;
		return (1);
	}
	if (search.empty() || search == replace)
	{
		out << text;
		return (0);
	}

	std::string::size_type pos = 0;
	while (true)
	{
		std::string::size_type found = text.find(search, pos);
		if (found == std::string::npos)
		{
			out << text.substr(pos);
			break;
		}
		out << text.substr(pos, found - pos);
		out << replace;
		pos = found + search.size();
	}
	return (0);
}
