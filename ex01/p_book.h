/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/04 21:23:09 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef P_BOOK_H
# define P_BOOK_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Contact.hpp"

# define P_BOOK_MAX_SIZE 8

class P_book
{
private:
		short	curr_size;
		short	filled_contacts;
		Contact	contacts[P_BOOK_MAX_SIZE];
public:
		P_book();
		~P_book();

		void	display_initial_message(void);
		void	add_contact(void);
		void	search_contact(void);
		void	print_all_contacts(void);
		void	print_part_of_pbook(void);
};

#endif
