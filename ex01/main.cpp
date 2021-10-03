/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/10/03 20:45:53 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "P_book.h"

int	main(void)
{
	std::string input_command;
	bool program_is_working;
	P_book p_book;

	p_book.display_initial_message();
	program_is_working = true;
	while (program_is_working)
	{
		std::cout << "<";
		std::getline(std::cin, input_command);
		if (input_command == "ADD") 
			p_book.add_contact();
		else if (input_command == "SEARCH")
			p_book.search_contact();
		else if (input_command == "EXIT")
			program_is_working = false;	
	}
	
	return (0);
}
