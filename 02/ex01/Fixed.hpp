/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2022/02/14 22:37:57 by lbellona         ###   ########.fr       */
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
		/*Fixed(const float val);*/
		Fixed(Fixed const &f_instance);
		~Fixed();

		Fixed &operator=(Fixed const &old_f);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
