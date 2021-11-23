/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/23 23:31:10 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(char **argv) : fname(argv[1]), s1(argv[2]), s2(argv[3])
{
	if (Parse_file())
	{
		Replace();
		WriteToFile();
	}
	else
	{
		std::cout << "File: <" << argv[1] << "> does not exists..." << std::endl;
		return;
	}
}

Replacer::~Replacer(void)
{
	
}

bool	Replacer::Parse_file(void)
{
	int len;
	std::ifstream inp_file(fname);
	
	if(inp_file)
	{
		inp_file.seekg(0, inp_file.end);
		len = inp_file.tellg();
		buff.assign(len, '\0');
		inp_file.seekg(0, inp_file.beg);
		inp_file.read(&buff[0], len);
		inp_file.close();
		
		return (true);
	}
	
	return (false);
}

void	Replacer::Replace()
{
	std::size_t pos;
	std::size_t delta;
	std::size_t s1_len;
	std::string out;

	s1_len = s1.length();
	delta = 0;
	while ((pos = buff.find(s1, delta)) != std::string::npos)
	{
		out += buff.substr(delta, pos - delta);
		out += s2;
		delta = pos + s1_len;	
	}
	if (delta)
		buff.assign(buff.begin() + delta, buff.end());
	buff = out + buff;
}

void	Replacer::WriteToFile(void)
{
	std::string new_fn;

	new_fn = fname + ".replace";
	std::ofstream out_file(new_fn);
	out_file << buff;
	out_file.close();
}
