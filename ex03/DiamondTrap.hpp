/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:10:12 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 13:11:17 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define DT_NAME_SUFFIX "_clap_name"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		~DiamondTrap(void);

		DiamondTrap&	operator=(const DiamondTrap &other);
		void whoAmI(void);

	protected:
		static const int	dt_default_hit_points;
		static const int	dt_default_energy_points;
		static const int	dt_default_attack_damage;
		static const bool	dt_default_is_guarded;
		std::string		_name;
};

#endif
