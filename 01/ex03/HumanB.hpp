/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 17:12:42 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
		Weapon *weapon;
		std::string	name;
public:
		HumanB(std::string const &_name);
		~HumanB(void);
		void 	setWeapon(Weapon *_weapon);
		void	attack(void);
};

#endif
