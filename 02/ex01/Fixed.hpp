/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/20 13:34:25 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
		int					value;
		static const int 	bits = 8;
public:
		Fixed();
		Fixed(const int val);
		Fixed(const float val);
		Fixed(Fixed const &f_instance);
		~Fixed();

		Fixed &operator=(Fixed const &old_f);

		float toFloat( void ) 				const;
		int toInt( void ) 					const;
		int getRawBits( void ) 				const;
		void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &outp, Fixed const &f_instance);

#endif
