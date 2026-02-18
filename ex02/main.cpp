/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/18 11:22:33 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap ct("'FT_robot1'");
	std::cout << std::endl;
	ct.attack("another_guy");
	std::cout << std::endl;
	ct.beRepaired(1);
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	ct.highFivesGuys();
	std::cout << std::endl;
	std::cout << "----------------" << std::endl;
	FragTrap copy(ct);
	copy.highFivesGuys();
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
	return (0);
}

