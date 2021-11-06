/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/09/18 18:13:27 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			std::string out_str(argv[i]);
			for (size_t j = 0; j < out_str.length(); j++)
				std::cout << (char)std::toupper(out_str[j]);
		}
		std::cout << std::endl; 
	}
	return (0);
}
