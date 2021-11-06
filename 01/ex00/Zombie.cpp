/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/06 18:00:12 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->z_name = name;
	std::cout << " Zombie <" << name << "> is raised!" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << this->z_name << "> died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << "<" << this->z_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

