/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:56:16 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 17:43:19 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const std::string	ScavTrap::_class_name = __FILE__;

ScavTrap::ScavTrap(void)
	: ClapTrap("defaultSCAVTRAJP")
{
	std::cout << this->class_name_get()
	   	<< " default constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guarded = false;
	return ;
}

ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	std::cout << this->class_name_get()
	   	<< " 'name' constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_is_guarded = false;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
	std::cout << this->class_name_get()
	   	<< " copy constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	*this = other;	
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->class_name_get()
	   	<< " default destructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " attacking (SCAVTRAP)"
		<< target << ": ";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else if (this->energy_points_get() == 0)
		std::cout << " failed (NO ENERGY)";
	else if (this->attack_damage_get() == 0)
	{
		std::cout << "attacking BUT causing " << this->attack_damage_get()
			<< " points of damage!";
		this->_energy_points--;
	}
	else
	{
		std::cout << "causing " << this->attack_damage_get()
			<< " points of damage!";
		this->_energy_points--;
	}
	std::cout << std::endl << "[STATS] " << *this << std::endl;
}

void	ScavTrap::guardGate(void)
{
	this->_is_guarded = !this->_is_guarded;
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
	   	<< " is now in Gate keeper mode? " << this->_is_guarded;
	std::cout << std::endl << "[STATS] " << *this << std::endl;
	return ;
}

const std::string&	ScavTrap::class_name_get(void)
{
	return ((const std::string&) ScavTrap::_class_name);
}

