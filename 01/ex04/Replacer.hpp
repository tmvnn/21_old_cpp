/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbellona <lbellona@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 23:07:05 by lbellona          #+#    #+#             */
/*   Updated: 2021/11/13 16:41:27 by lbellona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACER_HPP
# define REPLACER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Replacer
{
private:
		std::string fname;
		std::string s1;
		std::string s2;
		std::string buff;

		bool Parse_file(void);
		void WriteToFile(void);
		void Replace();
public:
		Replacer(char **argv);
		~Replacer(void);
};

#endif
