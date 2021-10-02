/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:15:28 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/02 21:55:52 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact()
{
	this->field_index = 0;
	this->fields_name = this->fields_name_init();
	//this->print_field_names();
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
		"Darkest secret"
	};

	return (fields_name);
}

/* DELETE */
void 	contact::print_contact_fields()
{
	int i = -1;
	while (++i < CONTACT_FILEDS_COUNT)
		std::cout << "	" << this->fields_name[i] << ": " << this->fields_data[i] << std::endl;
}

bool	contact::contact_added_successfully()
{
	int		i;
	
	i = -1;
	while (++i < CONTACT_FILEDS_COUNT)
	{
		std::cout << "	# Enter " << this->fields_name[i] << std::endl;
		std::getline(std::cin, this->fields_data[i]);
	}
	std::cout << "# Contact added succesfully!" << this->fields_name[i] << std::endl;
	//this->print_contact_fields();
	
	return (true);
}
