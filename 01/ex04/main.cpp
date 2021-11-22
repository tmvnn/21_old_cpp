/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/20 19:51:48 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char** argv)
{
	if (argc != 4 || !argv[1][0] || !argv[2][0] || !argv[3][0])
		std::cout << "<usage> ./replacer filename str1 str2" << std::endl;
	else
	{
		Replacer replace(argv);
		

	}
	
	return (0);
}
