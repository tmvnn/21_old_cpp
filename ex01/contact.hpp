/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:12:58 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/03 21:29:05 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

# define CONTACT_FILEDS_COUNT 5
# define FIELDS_FOR_SEARCH_DISPLAY_COUNT 4

class Contact
{
private:
	int					field_index;
	std::string			fields_data[CONTACT_FILEDS_COUNT];
	std::string			*fields_name;

	enum	field {
				first_name = 0,
				last_name,
				nickname,
				phone_number,
				darkest_secret
	};
public:
	Contact();
	~Contact();

	std::string	*fields_name_init(void);
	void		print_part_of_pbook(short);
	void		print_contact_fields();
	bool		contact_added_successfully(void);
};




#endif
