/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 18:13:15 by lbellona          #+#    #+#             */
/*   Updated: 2021/09/22 23:17:10 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "p_book.h"

int	main(void)
{
	std::string input_command;
	bool program_is_working;
	
	pr_out("Enter command [ADD, SEARCH, EXIT]"); //show start message
	program_is_working = true;
	while (program_is_working)
	{
		std::cout << "<";
		std::getline(std::cin, input_command);
		if (input_command == "ADD") 
			void(0); //Add new contaact
		else if (input_command == "SEARCH")
			void(0); //Search contact
		else if (input_command == "EXIT")
			program_is_working = false;
		//std::cout << input_command << std::endl;	
	}
	
	return (0);
}
