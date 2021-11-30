/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/30 21:24:58 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( char** argv ): level(argv[1]){
}

Karen::~Karen( void )
{
}

void Karen::logFilter( void )
{
	int i;
	std::string lvl[LVL_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < LVL_COUNT)
		if (!level.compare(lvl[i]))
			break;
	switch (i)
	{
		case 0:
			debug();
			break;
		case 1:
			info();
			break;
		case 2:
			warning();
			break;
		case 3:
			error();
			break;
		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
		default:
			break;
	}
	
}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. \nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
