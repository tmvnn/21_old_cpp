/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:12:58 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/02 21:32:12 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>

# define CONTACT_FILEDS_COUNT 5

class contact
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
	contact();
	~contact();

	std::string	*fields_name_init(void);
	void		print_contact_fields(void);
	bool		contact_added_successfully(void);
};




#endif
