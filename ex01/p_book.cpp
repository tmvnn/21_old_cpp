/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/03 21:29:10 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.h"

P_book::P_book()
{
	this->curr_size = 0;
	this->filled_contacts = 0;
}

P_book::~P_book()
{
}

void	P_book::display_initial_message(void)
{
	std::cout << "# Hi! The Phonebook is launched!" << std::endl;
	std::cout << "# Enter command one of the possible command [ADD, SEARCH, EXIT]" << std::endl;
}

void	P_book::add_contact()
{
	if (this->contacts[this->curr_size].contact_added_successfully())
	{
		this->curr_size = (this->curr_size + 1) % P_BOOK_MAX_SIZE;
		if (this->curr_size)
			this->filled_contacts = this->curr_size;
		else
			this->filled_contacts = P_BOOK_MAX_SIZE;
	}
	this->print_contacts();
}

void	P_book::search_contact()
{
	if (this->curr_size == 0 && this->filled_contacts != P_BOOK_MAX_SIZE)
		std::cout << "# Phonebook is empty!" << std::endl;
	else
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (short i = 0; i < this->filled_contacts; i++)
			this->contacts[i].print_part_of_pbook(i);
		std::cout << "|-------------------------------------------|" << std::endl;
	}
}

void	P_book::print_contacts()
{
	short 	i;

	i = -1;
	while (++i < this->filled_contacts)
	{
		this->contacts[i].print_contact_fields();
		std::cout << std::endl;
	}
}
