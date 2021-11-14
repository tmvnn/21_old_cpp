/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:12:58 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/14 21:29:48 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

# define CONTACT_FILEDS_COUNT 5
# define FIELDS_FOR_SEARCH_DISPLAY_COUNT 4

class Contact
{
private:
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
	void		print_part_of_contact(short);
	void		print_contact_fields();
	bool		contact_added_successfully(void);
};




#endif
