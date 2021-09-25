/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:15:28 by lbellona          #+#    #+#             */
/*   Updated: 2021/09/25 19:03:51 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
	this->field_index = 0;
	this->fields_name = this->fields_name_init();
}

contact::~contact()
{
}

std::string	*contact::fields_name_init(void)
{
	static std::string fields_name[CONTACT_FILEDS_COUNT] = {
		"First name",
		"Last name",
		"Nickname",
		"Phone number",
		"Darcest secret"
	};

	return (fields_name);
}

void contact::print_field_names()
{
	int i = -1;
	while (++i < CONTACT_FILEDS_COUNT)
	{
		std::cout << this->fields_name[i] << std::endl;
	}
}
