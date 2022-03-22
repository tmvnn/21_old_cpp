/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/22 23:00:25 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
# define FragTrap_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : virtual public ClapTrap
{
	protected:
			//std::string		name;
			int				hit_points;
			//int				energy_points;
			int				attack_damage;
	public:
			FragTrap();
			FragTrap(std::string const &name);
			FragTrap(FragTrap const &f_instance);
			~FragTrap();

			FragTrap &operator=(FragTrap const &f_instance);

			void attack(std::string const &target);
			void highFivesGuys(void);
};

#endif
