/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/02 21:57:07 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_H
# define P_BOOK_H

# include <iostream>
# include <string>
# include "contact.hpp"

# define P_BOOK_MAX_SIZE 2

class p_book
{
private:
		short	curr_size;
		short	oldest_contact;
		contact	contacts[P_BOOK_MAX_SIZE];
public:
		p_book();
		~p_book();

		void	display_initial_message(void);
		void	add_contact(void);
		void	search_contact(void);
		void	print_contacts(void);
};

#endif
