/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:57:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 12:20:27 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int			FragTrap::ft_default_attack_damage = 30;
const std::string	FragTrap::_class_name = __FILE__;

FragTrap::FragTrap(void)
	: ClapTrap("defaultFRAGTRAP")
{
	std::cout << this->class_name_get()
	   	<< " default constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	this->_hit_points = FT_HIT_POINTS;
	this->_energy_points = FT_ENERGY_POINTS;
	//this->_attack_damage = FT_ATTACK_DAMAGE;
	this->_attack_damage = FragTrap::ft_default_attack_damage;
	return ;
}

FragTrap::FragTrap(const std::string &name)
	: ClapTrap(name)
{
	std::cout << this->class_name_get()
	   	<< " 'name' constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	this->_hit_points = FT_HIT_POINTS;
	this->_energy_points = FT_ENERGY_POINTS;
	this->_attack_damage = FT_ATTACK_DAMAGE;
	return ;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy constructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	*this = other;	
}

FragTrap::~FragTrap(void)
{
	std::cout << this->class_name_get()
	   	<< " default destructor for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	return ;
}

const std::string&	FragTrap::class_name_get(void)
{
	return ((const std::string&) FragTrap::_class_name);
}

FragTrap&	FragTrap::operator=(const FragTrap &other)
{
	std::cout << this->class_name_get()
	   	<< " copy operator for '" << this->name_get() << "'"
		<< " called"
		<< std::endl;
	(ClapTrap&) *this = (ClapTrap&) other;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " highing five:";
	if (this->hit_points_get() == 0)
		std::cout << " failed (he is DEAD)";
	else if (this->energy_points_get() == 0)
		std::cout << " failed (NO ENERGY)";
	else
	{
		this->_energy_points--;
		std::cout << " highs five to you!!!!";
	}
	std::cout << std::endl << "[STATS] " << *this << std::endl;
	return ;
}
