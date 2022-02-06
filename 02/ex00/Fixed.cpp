/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/06 21:02:45 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "New Fixed is raised!" << std::endl;
}

Fixed::Fixed(int val_)
{
	this->val = val_;
	std::cout << " Val == " << this->val << std::endl;
}

Fixed::Fixed(Fixed const &f_instance)
{
	this->val = f_instance.val;
	std::cout << "From copy constructor Val = " << this->val << std::endl;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &old_f)
{
	std::cout << "Overloaded assignation operator is called" << std::endl;
	this->val = old_f.val;
	return (*this);
}
