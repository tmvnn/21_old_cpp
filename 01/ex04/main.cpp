/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/14 21:15:42 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char** argv)
{
	if (argc != 4)
		std::cout << "[usage] ./replacer filename str1 str2" << std::endl;
	else
	{
		std::cout << argv[0] << std::endl;
	}
	
	return (0);
}
