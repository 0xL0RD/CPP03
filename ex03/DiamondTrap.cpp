/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 09:10:12 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 15:24:56 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

const int	DiamondTrap::dt_default_hit_points
				= FragTrap::ft_default_hit_points;
const int	DiamondTrap::dt_default_energy_points
				= ScavTrap::st_default_energy_points;
const int	DiamondTrap::dt_default_attack_damage
				= FragTrap::ft_default_attack_damage;
const bool	DiamondTrap::dt_default_is_guarded
				= ScavTrap::st_default_is_guarded;

DiamondTrap::DiamondTrap(void)
	:	ClapTrap()
{
	this->_name = ClapTrap::_name;
	ClapTrap::_name += DT_NAME_SUFFIX;
	this->_hit_points = DiamondTrap::dt_default_hit_points;
	this->_energy_points = DiamondTrap::dt_default_energy_points;
	this->_attack_damage = DiamondTrap::dt_default_attack_damage;
	this->_is_guarded = DiamondTrap::dt_default_is_guarded;
	std::cout << "DiamondTrap.hpp"
	   	<< " default constructor for '" << this->_name << "'"
		<< " called" << std::endl
	   	<< "My name is: '" << this->_name << "'" <<std::endl
		<< "My ClapTrap name is: '" << ScavTrap::ClapTrap::_name << "'"
		<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap.hpp"
	   	<< " COPY constructor for '" << this->_name << "'"
		<< " called" << std::endl;
	(*this) = other;
	this->_name = other._name;
	std::cout << "My name is: '" << this->_name << "'" <<std::endl
		<< "My ClapTrap name is: '" << ScavTrap::ClapTrap::_name << "'"
		<< std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	:	ClapTrap(name + DT_NAME_SUFFIX),
		_name(name)
{
	ClapTrap *base;

	std::cout << "Hit points (FragTrap 100): " 
		<< FragTrap::ft_default_hit_points << std::endl 
		<< "Energy points (ScavTrap 50): " << ScavTrap::st_default_energy_points	
		<< std::endl << "Attack damage (FragTrap 30): "
		<< FragTrap::ft_default_attack_damage << std::endl;
	std::cout << "----------------" << std::endl;
	this->_hit_points = DiamondTrap::dt_default_hit_points;
	this->_energy_points = DiamondTrap::dt_default_energy_points;
	this->_attack_damage = DiamondTrap::dt_default_attack_damage;
	this->_is_guarded = DiamondTrap::dt_default_is_guarded;
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

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap &other)
{
	ScavTrap	*st;

	std::cout << "DiamondTrap.hpp"
	   	<< " operator= for '" << this->_name << "'"
		<< " called"
		<< std::endl;
	st = this;
	*st = other;
	this->_name = other._name;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	std::cout << "DiamondTrap.hpp"
		<< "Diammong calling ScavTrap to "
	   	<< "attack to '" << target << "'"
		<< std::endl;
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap.hpp" << " WhoAmI?: " << std::endl
	   	<< "My name is: '" << this->_name << "'" <<std::endl
		<< "My ClapTrap name is: '" << ScavTrap::ClapTrap::_name << "'"
		<< std::endl
	   	<< "is_guarded: '" << this->is_guarded_get() << "'" <<std::endl;
}
