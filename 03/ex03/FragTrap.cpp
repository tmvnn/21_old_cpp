/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/14 22:29:10 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &f_instance)
{
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	std::cout << this->name << ": FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	this->hit_points 	= 100;
	this->energy_points = 100;
	this->attack_damage = 30;
	std::cout << this->name << ": FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->name << ": FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &f_instance)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	
	return (*this);
}

void FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->name <<" requesting high five!"<<std::endl;
}
