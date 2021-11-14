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
# include <string>

class Replacer
{
private:
		std::string		_type;
public:
		Replacer(std::string type);
		Replacer(void);
		~Replacer(void);

		const std::string &getType(void);
		void				setType(std::string type);
};

#endif
