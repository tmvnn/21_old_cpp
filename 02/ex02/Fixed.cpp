/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/20 14:39:54 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(const int val)
{

	this->value = (val << Fixed::bits);
}

Fixed::Fixed(const float val)
{

	this->value = roundf(val * (1 << Fixed::bits));
}

Fixed::Fixed(Fixed const &f_instance)
{
	this->value = f_instance.getRawBits();
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &old_f)
{
	this->value = old_f.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &outp, Fixed const &f_instance)
{
	return ( outp << (f_instance.toFloat()) );
}

bool Fixed::operator>(Fixed const &f_instance) const
{
	return (this->getRawBits() > f_instance.getRawBits());
}

bool Fixed::operator<(Fixed const &f_instance) const
{
	return (this->getRawBits() < f_instance.getRawBits());
}

bool Fixed::operator>=(Fixed const &f_instance) const
{
	return (this->getRawBits() >= f_instance.getRawBits());
}

bool Fixed::operator<=(Fixed const &f_instance) const
{
	return (this->getRawBits() <= f_instance.getRawBits());
}

bool Fixed::operator==(Fixed const &f_instance) const
{
	return (this->getRawBits() == f_instance.getRawBits());
}

bool Fixed::operator!=(Fixed const &f_instance) const
{
	return (this->getRawBits() != f_instance.getRawBits());
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
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
