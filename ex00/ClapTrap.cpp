/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 06:42:09 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/17 08:36:59 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static const std::string	_class_name = __FUNCTION__;

void	ClapTrap(const std::string &name) : _name(name)
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

void	attack(const std::string& target)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " attacks " << target.name_get()
		<< ", causing " << this->_attack_damage()
		<< " points of damage!"
		<< std::endl;
}

void	takeDamage(unsigned int amount)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " takes " << amount
		<< " points of damage!"
		<< std::endl;

}

void	beRepaired(unsigned int amount)
{
	std::cout << this->class_name_get()
	   	<< " " << this->name_get()
		<< " is repaired " << amount
		<< " by points of damage!"
		<< std::endl;
}

