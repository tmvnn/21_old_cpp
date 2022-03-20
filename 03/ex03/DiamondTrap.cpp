/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/14 22:29:10 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &f_instance)
{
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	std::cout << this->name << ": DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &_name) : ClapTrap(_name + "_clap_name"), FragTrap(_name), ScavTrap(_name)
{
	this->name = _name;
	//ClapTrap::name = (name + "_clap_name");
	this->hit_points 	= FragTrap::hit_points;
	this->energy_points = ScavTrap::energy_points;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << this->name << ": DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << ": DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &f_instance)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->name 			= f_instance.name;
	this->hit_points 	= f_instance.hit_points;
	this->energy_points = f_instance.energy_points;
	this->attack_damage = f_instance.attack_damage;
	
	return (*this);
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
	//std::cout << "DiamondTrap " << this->name << " attacks " << target << " causing " << this->attack_damage << " points of damage!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << std::endl;
	std::cout << "DiamondTrap's ClapTrap name: " << ClapTrap::name << std::endl;
	/*
	std::cout << "DiamondTrap hit_points: " << this->hit_points << std::endl;
	std::cout << "DiamondTrap energy_points: " << this->energy_points << std::endl;
	std::cout << "DiamondTrap attack_damage: " << this->attack_damage << std::endl;

	std::cout << std::endl;

	std::cout << "ClapTrap hit_points: " << ClapTrap::hit_points << std::endl;
	std::cout << "ClapTrap energy_points: " << ClapTrap::energy_points << std::endl;
	std::cout << "ClapTrap attack_damage: " << ClapTrap::attack_damage << std::endl;

	std::cout << std::endl;
	
	std::cout << "FragTrap hit_points: " << FragTrap::hit_points << std::endl;
	std::cout << "FragTrap energy_points: " << FragTrap::energy_points << std::endl;
	std::cout << "FragTrap attack_damage: " << FragTrap::attack_damage << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "ScavTrap hit_points: " << ScavTrap::hit_points << std::endl;
	std::cout << "ScavTrap energy_points: " << ScavTrap::energy_points << std::endl;
	std::cout << "ScavTrap attack_damage: " << ScavTrap::attack_damage << std::endl;
	*/
}
