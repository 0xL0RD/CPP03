/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/18 17:20:56 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string	ClapTrap::_class_name = __FILE__;

ClapTrap::ClapTrap(void)
	: _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->class_name_get()
	   	<< " default constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}
ClapTrap::ClapTrap(const std::string &name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->class_name_get()
	   	<< " 'name' constructor for '" << this->name_get() << "'"
		<< " p: " << &this->_name
		<< " called"
		<< std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	*this = other;	
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->class_name_get()
	   	<< " default destructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy operator for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	this->_name = other.name_get();
	this->_hit_points = other.hit_points_get();
	this->_energy_points = other.energy_points_get();
	this->_attack_damage = other.attack_damage_get();
	return (*this);
}

const std::string&	ClapTrap::class_name_get(void)
{
	return ((const std::string&) ClapTrap::_class_name);
}

const std::string&	ClapTrap::name_get(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::hit_points_get(void) const
{
	return (this->_hit_points);
}

unsigned int	ClapTrap::energy_points_get(void) const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::attack_damage_get(void) const
{
	return (this->_attack_damage);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " attacking "
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

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " taking damage: ";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else if(this->hit_points_get() > 0)
	{
		std::cout << amount
			<< " up to points of damage!";
		if (amount < this->hit_points_get())
			this->_hit_points -= amount;
		else
			this->_hit_points = 0;
	}
	std::cout << std::endl << "[STATS] " << *this << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned long	tmp;

	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
	   	<< " trying to be repaired: ";
	if (this->hit_points_get() == 0)
	{
		std::cout << " failed (he is DEAD)";
	}
	else if (this->energy_points_get() > 0)
	{
		tmp = static_cast<unsigned long>(amount) + this->hit_points_get();
		if (tmp > std::numeric_limits<unsigned int>::max())
		{
			tmp = std::numeric_limits<unsigned int>::max()
				- this->hit_points_get();
		}
		else
			tmp = amount;
		this->_hit_points += tmp;
		std::cout << " repaired by t:" << tmp
			<< " (vs a:" << amount << ") " << "points of health!";
	}
	else
		std::cout << " repair failed (no energy)" << std::endl;
	std::cout << std::endl << "[STATS] " << *this << std::endl;
}

std::ostream&	operator<<(std::ostream &os, const ClapTrap &input)
{
	os << "Class: " << input.class_name_get()
		<< " / name: " << input.name_get()
		<< " / hitpoints (h): " << input.hit_points_get()
		<< " / energy points: " << input.energy_points_get()
		<< " / attack damage: " << input.attack_damage_get();
		return (os);
}
