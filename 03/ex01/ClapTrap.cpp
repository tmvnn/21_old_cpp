/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/12 22:11:22 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &f_instance)
{
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	std::cout << this->name << ": Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const &name)
{
	this->name 			= name;
	this->hit_points 	= 10;
	this->energy_points = 10;
	this->attack_damage = 0;
	std::cout << this->name << ": Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << this->name << ": Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &f_instance)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	
	return (*this);
}

void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

/*
std::string    ClapTrap::getName()
{
    return (this->name);
}
*/

void ClapTrap::setAttackDamage(int dmg)
{
	std::cout << "Set attack damage of " << this->name << " to " << dmg << std::endl;
	this->attack_damage = dmg;
}

int const &ClapTrap::getAttackDamage(void)
{
	return (attack_damage);
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
		this->hit_points -= amount;
		if (this->hit_points <= 0)
			std::cout << "ClapTrap " << this->name << " are dead! " << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " are dead! " << std::endl;
	//std::cout << "hp = "<< this->hit_points << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points > 0)
	{
		std::cout << "ClapTrap " << name << " restored "<< amount << " hit points!"<<std::endl;
		hit_points += amount;
	}
}
