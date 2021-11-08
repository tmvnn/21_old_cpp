/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/08 23:08:32 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

int	main(void)
{
	std::string str1 = "HI THIS IS BRAIN";
	std::string *stringPTR = &str1;
	std::string& stringREF = str1;
	
	std::cout << std::left << std::setw(50) << "The adress in memory of string = " << &str1 << std::endl;
	std::cout << std::setw(50) << "The adress in memory of string by stringPTR = " << stringPTR << std::endl;
	std::cout << std::setw(50) << "The adress in memory of string by stringREF = " << &stringREF << std::endl;

	std::cout << std::setw(50) << "Value of string by stringPTR = " << *stringPTR << std::endl;
	std::cout << std::setw(50) << "Value of string by stringREF = " << stringREF << std::endl;

	return (0);
}
