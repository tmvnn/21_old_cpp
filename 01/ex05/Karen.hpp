/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 16:41:27 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

# define LVL_COUNT 4

class Karen
{
private:
		void (Karen::*fc_ptr[LVL_COUNT])();

		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
public:
		Karen( void );
		~Karen( void );
		void complain( std::string level );
};

#endif
