/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/11 20:45:54 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap war1("warrior_1");
	ClapTrap war2("warrior_2");

	war1.setAttackDamage(3);
	war2.setAttackDamage(7);
	
	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());
	
	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());

	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());

	war2.attack("warrior_1");
	war1.takeDamage(war2.getAttackDamage());

	war1.beRepaired(6);

	war2.attack("warrior_1");
	war1.takeDamage(war2.getAttackDamage());

	war1.attack("warrior_2");
	war2.takeDamage(war1.getAttackDamage());

	return (0);
}
