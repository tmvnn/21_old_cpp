/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 17:14:41 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &_name) : weapon(NULL), name(_name)
{
}

HumanB::~HumanB(void)
{
}

void 	HumanB::setWeapon(Weapon *_weapon)
{
	 weapon = _weapon;
}

void	HumanB::attack(void)
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
