/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_book.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:13:49 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/02 22:11:29 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_book.h"

p_book::p_book()
{
	this->curr_size = 0;
	this->oldest_contact = 0;
}

p_book::~p_book()
{
}

void	p_book::display_initial_message(void)
{
	std::cout << "# Hi! The Phonebook is launched!" << std::endl;
	std::cout << "# Enter command one of the possible command [ADD, SEARCH, EXIT]" << std::endl;
	//this->contacts[0].print_field_names();
}

void	p_book::add_contact()
{
	if (this->contacts[this->curr_size].contact_added_successfully())
	{
		this->curr_size = (this->curr_size + 1) % P_BOOK_MAX_SIZE;
		std::cout << "cur size = " << this->curr_size << std::endl;
	}
	this->print_contacts();
}

void	p_book::search_contact()
{
	if (this->curr_size == P_BOOK_MAX_SIZE)
		std::cout << "# Phonebook is full!" << std::endl;
}

void	p_book::print_contacts()
{
	int i;

	//std::cout << "cur size = " << this->curr_size << std::endl;
	i = -1;
	while (++i < this->curr_size + 1)
	{
		this->contacts[i].print_contact_fields();
		std::cout << std::endl;
	}
}
