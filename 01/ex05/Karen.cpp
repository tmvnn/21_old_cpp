/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/28 19:41:36 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	fc_ptr[0] = &Karen::debug;
	fc_ptr[1] = &Karen::info;
	fc_ptr[2] = &Karen::warning;
	fc_ptr[3] = &Karen::error;
}

Karen::~Karen( void )
{
}

void Karen::complain( std::string level )
{
	int i;
	std::string lvl[LVL_COUNT] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < LVL_COUNT)
		if (!level.compare(lvl[i]))
			break;
	if (i != LVL_COUNT)
		(this->*fc_ptr[i])();
}

void Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
