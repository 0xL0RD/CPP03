/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:10:12 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 10:09:33 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

# define DT_NAME_SUFFIX "_clap_name"

//class DiamondTrap : public FragTrap, public ScavTrap 
class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string &name);
		~DiamondTrap(void);
		void whoAmI(void);

	private:
		std::string		_name;
};

#endif
