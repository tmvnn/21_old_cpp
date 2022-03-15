/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/03/14 22:26:51 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap : public ClapTrap
{
	public:
			DiamondTrap();
			DiamondTrap(std::string const &name);
			DiamondTrap(DiamondTrap const &f_instance);
			~DiamondTrap();

			DiamondTrap &operator=(DiamondTrap const &f_instance);

			void attack(std::string const &target);
			void highFivesGuys(void);
};

#endif
