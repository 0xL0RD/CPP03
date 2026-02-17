/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 08:34:28 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:
		void			ClapTrap(const std::string &name);
		void			ClapTrap(const ClapTrap &other);
		ClapTrap&		operator=(const ClapTrap &other);
		void			~ClapTrap(void);
		void			attack(const std::string& target); //TODO: should be const, but subject states prototype
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string&	name_get(void) const;
		std::string&	class_name_get(void) const;
		
	private:
		std::string					_name;
		unsigned int				_hit_points;
		unsigned int				_energy_points;
		unsigned int				_attack_damage;
		static const std::string	_class_name;
}

#endif
