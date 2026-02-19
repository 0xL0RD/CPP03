/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:56:16 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 13:00:24 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const int	ScavTrap::ft_default_hit_points = 100;
const int	ScavTrap::ft_default_energy_points = 50;
const int	ScavTrap::ft_default_attack_damage = 20;
const bool	ScavTrap::ft_default_is_guarded = false;
const std::string	ScavTrap::_class_name = __FILE__;

ScavTrap::ScavTrap(void)
	: ClapTrap("defaultSCAVTRAJP")
{
	std::cout << this->class_name_get()
	   	<< " default constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	//this->_hit_points = ST_HIT_POINTS;
	//this->_energy_points = ST_ENERGY_POINTS;
	//this->_attack_damage = ST_ATTACK_DAMAGE;
	//this->_is_guarded = ST_IS_GUARDED;
	this->_hit_points = ScavTrap::ft_default_hit_points;
	this->_energy_points = ScavTrap::ft_default_energy_points;
	this->_attack_damage = ScavTrap::ft_default_attack_damage;
	this->_is_guarded = ScavTrap::ft_default_is_guarded;
	return ;
}

ScavTrap::ScavTrap(const std::string &name)
	: ClapTrap(name)
{
	std::cout << this->class_name_get()
	   	<< " 'name' constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	//this->_hit_points = ST_HIT_POINTS;
	//this->_energy_points = ST_ENERGY_POINTS;
	//this->_attack_damage = ST_ATTACK_DAMAGE;
	this->_is_guarded = ST_IS_GUARDED;
	this->_hit_points = ScavTrap::ft_default_hit_points;
	this->_energy_points = ScavTrap::ft_default_energy_points;
	this->_attack_damage = ScavTrap::ft_default_attack_damage;
	this->_is_guarded = ScavTrap::ft_default_is_guarded;
	return ;
}

//ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy constructor (ST) for " << this->name_get() 
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
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " setting guardGate:";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else if (this->energy_points_get() == 0)
		std::cout << " failed (NO ENERGY)";
	else
	{
		this->_energy_points--;
		this->_is_guarded = !this->_is_guarded;
		std::cout << " is now in Gate keeper mode? " << this->_is_guarded;
	}
	std::cout << std::endl << "[STATS] " << *this << std::endl;
	return ;
}

const std::string&	ScavTrap::class_name_get(void)
{
	return ((const std::string&) ScavTrap::_class_name);
}

ScavTrap&	ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy operator for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	(ClapTrap&) *this = (ClapTrap&) other;
	this->_is_guarded = (bool) other.is_guarded_get();
	return (*this);
}

bool		ScavTrap::is_guarded_get(void) const
{
	return (this->_is_guarded);
}
