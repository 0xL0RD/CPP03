/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 12:31:57 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 17:49:21 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

# define HIT_POINTS 100
# define ENERGY_POINTS 50
# define ATTACK_DAMAGE 20
# define IS_GUARDED false

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
		
	private:
		static const std::string	_class_name;
		bool	_is_guarded;
};

#endif
