/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 19:07:55 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap ct("'ST_robot1'");
	std::cout << std::endl;
	ct.attack("another_guy");
	std::cout << std::endl;
	ct.beRepaired(1);
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.guardGate();
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.guardGate();
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.takeDamage(101); // Dies
	std::cout << std::endl;
	ct.attack("should_not_be_possible");
	std::cout << std::endl;
	ct.guardGate();
	std::cout << std::endl;
	ct.beRepaired(1);
	std::cout << std::endl;
	ct.takeDamage(10); // Already dead
	std::cout << "----------------" << std::endl;
	return (0);
}

