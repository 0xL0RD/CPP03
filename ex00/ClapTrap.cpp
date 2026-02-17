/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 09:55:20 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static const std::string	_class_name = __FUNCTION__;

void	ClapTrap(const std::string &name)
	: _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << this->class_name_get()
	   	<< " default constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}

void	ClapTrap(const ClapTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	*this = other;	
}

ClapTrap&	operator=(const ClapTrap &other)
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

void	~ClapTrap(void)
{
	std::cout << this->class_name_get()
	   	<< " default destructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}

std::string&	class_name_get(void) const
{
	return (this->_class_name);
}

std::string&	name_get(void) const;
{
	return (this->_name);
}

unsigned int	hit_points_get(void) const
{
	return (this->_hit_points);
}

unsigned int	energy_points_get(void) const;
{
	return (this->_energy_points);
}

unsigned int	attack_damage_get(void) const;
{
	return (this->_attack_damage);
}

void	attack(const std::string& target)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " attacking ";
		<< target.name_get() << ": ";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else if (this->energy_points_get() == 0)
		std::cout << " failed (NO ENERGY)";
	else if (this->energy_points_get() > 0)
	{
		std::cout << ", causing " << this->_attack_damage()
			<< " points of damage!"
		this->_energy_points--;
	}
	std::cout << " (" << this->hit_points_get() << ") h. points";
	std::cout << std::endl;
}

void	takeDamage(unsigned int amount)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " taking damage: ";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else (this->hit_points_get() > 0)
	{
		std::cout << amount
			<< " up to points of damage!"
		if (amount < this->hit_points_get())
			this->_hit_points -= amount;
		else
			this->_hit_points = 0;
	}
	std::cout << " (" << this->hit_points_get() << ") h. points";
	std::cout << std::endl;
}

void	beRepaired(unsigned int amount)
{
	unsigned long	tmp;

	std::cout << this->class_name_get()
	   	<< " trying to be repaired: " << this->name_get();
	if (this->hit_points_get() == 0)
	{
		std::cout << " failed (he is DEAD)";
	}
	if (this->energy_points_get() > 0)
	{
		tmp = <unsigned long> amount + this->energy_points_get();
		if (tmp > std::numeric_limits<unsigned int>)
			tmp = std::numeric_limits<unsigned int>
		std::cout << " repaired by " << tmp 
			<< " (vs " << amount << ") " << "points of health!";
		this->_energy_points += tmp;
	}
	else
		std::cout << " repair failed (no energy)" << std::endl;
	std::cout << " (" << this->energy_points_get() << ") e. points";
	std::cout << std::endl;
}

