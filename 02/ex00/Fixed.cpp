/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/13 17:13:03 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &f_instance)
{
	std::cout << "Copy constructor called" << this->value << std::endl;
	this->value = f_instance.value;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &old_f)
{
	std::cout << "Overloaded assignation operator is called" << std::endl;
	this->value = old_f.value;
	return (*this);
}
