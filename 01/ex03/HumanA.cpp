/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 17:05:56 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &_name, Weapon &_weapon) : weapon(_weapon), name(_name)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
