/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/23 15:11:06 by lbellona         ###   ########.fr       */
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

Fixed Fixed::operator+(Fixed const &f_instance) const
{
	Fixed sum(*this);
	
	sum.setRawBits(this->getRawBits() + f_instance.getRawBits());
	return (sum);
}

Fixed Fixed::operator-(Fixed const &f_instance) const
{
	Fixed diff(*this);
	
	diff.setRawBits(this->getRawBits() - f_instance.getRawBits());
	return (diff);
}

Fixed Fixed::operator*(Fixed const &f_instance) const
{
	Fixed mul(*this);
	long v1, v2;
	
	v1 = (long)this->getRawBits();
	v2 = (long)f_instance.getRawBits();
	mul.setRawBits((v1 * v2) / ((1 << Fixed::bits)));
	return (mul);
}

Fixed Fixed::operator/(Fixed const &f_instance) const
{
	Fixed div(*this);
	long v1, v2;
	
	v1 = (long)this->getRawBits();
	v2 = (long)f_instance.getRawBits();
	div.setRawBits((v1 * ((1 << Fixed::bits))) / v2);
	return (div);
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	
	operator--();
	return (tmp);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (float)(1 << Fixed::bits));
}

int Fixed::toInt( void ) const
{
	return (this->value >> Fixed::bits);
}

Fixed &Fixed::min(Fixed &v1, Fixed &v2)
{
	if(v1 > v2)
		return(v2);
	return (v1);
}

Fixed const &Fixed::min(Fixed const &v1, Fixed const &v2)
{
	if(v1 > v2)
		return(v2);
	return (v1);
}

Fixed &min(Fixed &v1, Fixed &v2)
{
	return (Fixed::min(v1, v2));
}

Fixed const &min(Fixed const &v1, Fixed const &v2)
{
	return (Fixed::min(v1, v2));
}

Fixed &Fixed::max(Fixed &v1, Fixed &v2)
{
	if(v1 > v2)
		return(v1);
	return (v2);
}

Fixed const &Fixed::max(Fixed const &v1, Fixed const &v2)
{
	if(v1 > v2)
		return(v1);
	return (v2);
}

Fixed &max(Fixed &v1, Fixed &v2)
{
	return (Fixed::max(v1, v2));
}

Fixed const &max(Fixed const &v1, Fixed const &v2)
{
	return (Fixed::max(v1, v2));
}

int Fixed::getRawBits( void ) const
{
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	this->value = raw;
}
