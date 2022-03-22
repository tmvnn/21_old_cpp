/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/22 23:00:15 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : virtual public ClapTrap
{
	protected:
			//std::string		name;
			//int				hit_points;
			int				energy_points;
			//int				attack_damage;
	public:
			ScavTrap();
			ScavTrap(std::string const &name);
			ScavTrap(ScavTrap const &f_instance);
			~ScavTrap();

			ScavTrap &operator=(ScavTrap const &f_instance);

			void attack(std::string const &target);
			void guardGate();
};

#endif
