/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:10:12 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 10:51:53 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	:	ClapTrap()
{
	this->_name = ClapTrap::_name;
	ClapTrap::_name += DT_NAME_SUFFIX;
	this->_attack_damage = FT_ATTACK_DAMAGE;
	std::cout << "DiamondTrap.hpp"
	   	<< " default constructor for '" << this->_name << "'"
		<< " called" << std::endl
	   	<< "My name is: '" << this->_name << "'" <<std::endl
		<< "My ClapTrap name is: '" << ScavTrap::ClapTrap::_name << "'"
		<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	:	ClapTrap(name + DT_NAME_SUFFIX)
{
	ClapTrap *base;
	/*
	getchar();
	std::cout << std::endl;
	std::cout << "1) DiamondTrap.hpp"
	   	<< " 'name' constructor for '" << this->_name << "'"
		<< " called" << std::endl;
	std::cout << "FT::ClapTrap name: " << FragTrap::ClapTrap::_name
		<< std::endl;
	std::cout << "FT p: " << &(FragTrap::_name) << std::endl;
	std::cout << "ST p: " << &(ScavTrap::_name) << std::endl;
	std::cout << "DI p: " << &(DiamondTrap::_name) << std::endl;
	getchar();
	*/
	this->_name = name;
	//this->_hit_points = FragTrap::_hit_points;
	/*
	std::cout << "ST ep: " << ScavTrap::ClapTrap::_energy_points; 
	std::cout << std::endl;
	*/
	this->_attack_damage = FT_ATTACK_DAMAGE;
	//this->_energy_points = FT_ENERGY_POINTS;
	std::cout << "DiamondTrap.hpp"
	   	<< " 'name' constructor for '" << this->_name << "'"
		<< " called"
		<< std::endl;
	base = this;
	std::cout << "Base stats: " << *base << std::endl;
	std::cout << "Diamond objetct name: " << this->_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap.hpp"
	   	<< " destructor for '" << this->_name << "'"
		<< " called"
		<< std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap.hpp" << " WhoAmI?: " << std::endl
	   	<< "My name is: '" << this->_name << "'" <<std::endl
		<< "My ClapTrap name is: '" << ScavTrap::ClapTrap::_name << "'"
		<< std::endl;
}
