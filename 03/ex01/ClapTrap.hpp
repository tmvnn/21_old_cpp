/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/13 21:33:11 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
		std::string			name;
		int					hit_points;
		int					energy_points;
		int					attack_damage;
public:
		ClapTrap();
		ClapTrap(std::string const &name);
		ClapTrap(ClapTrap const &f_instance);
		~ClapTrap();

		/*
		std::string getName();
		*/
	
		void setAttackDamage(int dmg);
		int const &getAttackDamage(void);

		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(ClapTrap const &old_f);

};

#endif
