/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:09:12 by hrhirha           #+#    #+#             */
/*   Updated: 2021/04/29 15:09:17 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class	Zombie
{
	private:
		std::string	_type;
		std::string	_name;
	public:
		Zombie();
		~Zombie();

		std::string	getName() const;
		void		setName(std::string);
		std::string	getType() const;
		void		setType(std::string);
		void		announce(void) const;
};
