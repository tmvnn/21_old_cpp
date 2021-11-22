/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/22 23:31:33 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(char **argv) : fname(argv[1]), s1(argv[2]), s2(argv[3])
{
	if (Parse_file())
	{
		
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
		//std::cout << buff << std::endl;
		inp_file.close();
		
		return (true);
	}
	return (false);
}
