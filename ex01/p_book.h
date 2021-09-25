/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/09/25 19:15:02 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_H
# define P_BOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

# define P_BOOK_MAX_SIZE 8

class p_book
{
private:
		short	curr_size;
		contact	contacts[8];
public:
		p_book();
		~p_book();

		void	display_initial_message(void);
		void	add_contact(void);
};

#endif
