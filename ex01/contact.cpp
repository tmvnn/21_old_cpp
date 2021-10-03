/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:15:28 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/03 21:28:49 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->field_index = 0;
	this->fields_name = this->fields_name_init();
	//this->print_field_names();
}

Contact::~Contact()
{
}

std::string	*Contact::fields_name_init(void)
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
void 	Contact::print_part_of_pbook(short index)
{
	int i;
	
	std::cout << "|" << std::setw(10) << index << "|";
	i = -1;
	while (++i < FIELDS_FOR_SEARCH_DISPLAY_COUNT - 1)
	{
		if (this->fields_data[i].length() < 10)
			std::cout << std::setw(10) << this->fields_data[i] << "|";
		else
			std::cout << std::setw(10) << this->fields_data[i].substr(0, 9) + '.' << "|";
	}
	std::cout << std::endl;
}

void 	Contact::print_contact_fields()
{
	int i = -1;
	while (++i < CONTACT_FILEDS_COUNT)
		std::cout << "	" << this->fields_name[i] << ": " << this->fields_data[i] << std::endl;
}

bool	Contact::contact_added_successfully()
{
	int		i;
	
	i = -1;
	while (++i < CONTACT_FILEDS_COUNT)
	{
		std::cout << "	# Enter " << this->fields_name[i] << std::endl;
		std::getline(std::cin, this->fields_data[i]);
	}
	std::cout << "# Contact added succesfully!" << this->fields_name[i] << std::endl;
	
	return (true);
}
