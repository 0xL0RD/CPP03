/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/18 07:58:38 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <limits>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &other);
		~ClapTrap(void);
		ClapTrap&			operator=(const ClapTrap &other);
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		const std::string&	name_get(void) const;
		unsigned int		hit_points_get(void) const;
		unsigned int		energy_points_get(void) const;
		unsigned int		attack_damage_get(void) const;
		
		static const 	std::string&	class_name_get(void);

	protected:
		std::string		_name;
		unsigned int	_hit_points;	//health
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

		static const std::string	_class_name;
};

std::ostream&	operator<<(std::ostream &os, const ClapTrap &input);

#endif
