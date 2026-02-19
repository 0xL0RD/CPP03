/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:31:57 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 17:16:06 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &other);
		~ScavTrap(void);
		void	attack(const std::string& target);
		void	guardGate(void);
		static const std::string&	class_name_get(void);
		ScavTrap&	operator=(const ScavTrap &other);
		bool		is_guarded_get(void) const;
		
	protected:
		static const int	st_default_hit_points;
		static const int	st_default_energy_points;
		static const int	st_default_attack_damage;
		static const bool	st_default_is_guarded;
		static const std::string	_class_name;
		bool	_is_guarded;
};

#endif
