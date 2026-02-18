/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:31:57 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/18 10:29:41 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define ST_HIT_POINTS 100
# define ST_ENERGY_POINTS 50
# define ST_ATTACK_DAMAGE 20
# define ST_IS_GUARDED false

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
		
	private:
		static const std::string	_class_name;
		bool	_is_guarded;
};

#endif
