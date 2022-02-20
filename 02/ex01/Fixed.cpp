/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/20 13:37:39 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = (val << Fixed::bits);
}

Fixed::Fixed(const float val)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(val * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &f_instance)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = f_instance.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &old_f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->value = old_f.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &outp, Fixed const &f_instance)
{
	return ( outp << (f_instance.toFloat()) );
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> Fixed::bits);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}
