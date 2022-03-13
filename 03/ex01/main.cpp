/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/13 21:33:28 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap war1("warrior_1");
	ScavTrap war2("warrior_2");
	
	war1.setAttackDamage(12);
	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());

	war2.attack("warrior_1");
	war1.takeDamage(war2.getAttackDamage());
	war2.guardGate();

	return (0);
}
