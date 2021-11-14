/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 16:41:23 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(void)
{
}

Replacer::Replacer(std::string type) : _type(type) 
{}

Replacer::~Replacer(void)
{
}

std::string const &Replacer::getType(void)
{
	return (_type);
}

void	Replacer::setType(std::string type)
{
	_type = type;
}
