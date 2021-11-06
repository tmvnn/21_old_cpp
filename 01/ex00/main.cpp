/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/06 18:23:02 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	/* On Heap */
	Zombie *z1;
	z1 = newZombie("Zombie_1");
	z1->announce();
	delete z1;
	
	/* On Stack */
	Zombie z2("Zombie_2");
	z2.announce();

	randomChump("Zombie_3");

	return (0);
}
