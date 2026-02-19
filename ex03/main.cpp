/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 10:15:49 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
//# include "FragTrap.hpp"
//# include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "Hit points (FragTrap 100): " << FT_HIT_POINTS << std::endl
		<< "Energy points (ScavTrap 50): " << ST_ENERGY_POINTS << std::endl
		<< "Attack damage (FragTrap 30): " << FT_ATTACK_DAMAGE << std::endl;
	std::cout << "----------------" << std::endl;

	DiamondTrap ct("DT_robot1");
	std::cout << (ClapTrap&) ct << std::endl;
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.attack("magin");
	std::cout << "----------------" << std::endl;
	ct.whoAmI();
	std::cout << "----------------" << std::endl;
	ct.beRepaired(1);
	std::cout << "----------------" << std::endl;
	DiamondTrap dt;
	std::cout << (ClapTrap&) dt << std::endl;
	std::cout << std::endl;
	/*
	ct.attack("another_guy");
	std::cout << std::endl;
	ct.beRepaired(1);
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.highFivesGuys();
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.takeDamage(101); // Dies
	std::cout << std::endl;
	ct.attack("should_not_be_possible");
	std::cout << std::endl;
	ct.beRepaired(1);
	std::cout << std::endl;
	ct.takeDamage(10); // Already dead
	std::cout << "----------------" << std::endl;
	ct.highFivesGuys();
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	*/
	return (0);
}

