/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 13:41:47 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//# include "FragTrap.hpp"
//# include "ScavTrap.hpp"

int	main(void)
{
//	std::cout << "Hit points (FragTrap 100): " << FT_HIT_POINTS << std::endl
//		<< "Energy points (ScavTrap 50): " << ST_ENERGY_POINTS << std::endl
//		<< "Attack damage (FragTrap 30): " << FT_ATTACK_DAMAGE << std::endl;
//	std::cout << "----------------" << std::endl;

	DiamondTrap ct("DT_robot1");
	std::cout << (ClapTrap&) ct << std::endl;
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.attack("magin");
	std::cout << "----------------" << std::endl;
	ct.whoAmI();
	std::cout << "----------------" << std::endl;
	ct.beRepaired(1);
	ct.guardGate();
	ct.highFivesGuys();
	std::cout << "----------------" << std::endl;
	std::cout << "Copy whoAmI: " << std::endl;
	DiamondTrap copy(ct);
	std::cout << (ClapTrap&) copy << std::endl;
	std::cout << std::endl;
	copy.whoAmI();
	std::cout << "----------------" << std::endl;
	std::cout << "Default constructor: " << std::endl;
	DiamondTrap dt;
	std::cout << (ClapTrap&) dt << std::endl;
	std::cout << std::endl;
	return (0);
}

