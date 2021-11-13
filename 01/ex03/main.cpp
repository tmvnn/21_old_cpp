/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 17:17:45 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon	club("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	club("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(&club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
		
	return (0);
}
