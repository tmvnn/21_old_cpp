/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/20 20:30:15 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap war1("warrior_1");
	war1.whoAmI();
	//FragTrap war2("warrior_2");
	war1.attack("warrior_2");
	war1.takeDamage(45);
	
	war1.guardGate();
	war1.highFivesGuys();
	
	
	/*
	war1.setAttackDamage(12);
	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());

	war2.attack("warrior_1");
	war1.takeDamage(war2.getAttackDamage());
	war2.highFivesGuys();

	war1.whoAmI();
	*/
	war1.whoAmI();
	return (0);
}
