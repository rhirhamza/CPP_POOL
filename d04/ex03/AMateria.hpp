/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrhirha <hrhirha@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 18:11:27 by hrhirha           #+#    #+#             */
/*   Updated: 2021/05/28 18:52:14 by hrhirha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		unsigned int	_xp;
		std::string		_type;
	public:
		AMateria();
		AMateria(AMateria const &);
		AMateria(std::string const &);
		virtual ~AMateria();

		AMateria			&operator =(AMateria const &);

		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia
		void				setType(std::string const &);
		void				setXP(unsigned int);

		void				use();
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &);
};

#endif
