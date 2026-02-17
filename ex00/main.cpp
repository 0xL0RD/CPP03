/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 12:09:48 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	ct("number1");
	ct.attack("another_guy");
	ct.beRepaired(1);
	ct.takeDamage(10); // Dies
	ct.attack("should_not_be_possible");
	ct.beRepaired(1);
	ct.takeDamage(10); // Already dead
	std::cout << "----------------" << std::endl;

	ClapTrap	ct2("number2");
	ct2.beRepaired(99999);
	ct2.attack("attacking_is_posible");
	ct2.beRepaired(std::numeric_limits<unsigned int>::max());
	ct2.takeDamage(std::numeric_limits<unsigned int>::max());
	ct2.beRepaired(1);
	return (0);
}

