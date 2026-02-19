/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 14:22:19 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
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

