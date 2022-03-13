/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/13 21:23:26 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f_instance)
{
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	std::cout << this->name << ": ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name) : ClapTrap(name)
{
	this->hit_points 	= 100;
	this->energy_points = 50;
	this->attack_damage = 20;
	std::cout << this->name << ": ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->name << ": ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &f_instance)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	
	return (*this);
}

void ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name <<" have enterred in Gate keeper mode!"<<std::endl;
}
