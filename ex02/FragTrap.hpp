/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:57:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/19 16:38:48 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		~FragTrap(void);
		FragTrap&	operator=(const FragTrap &other);
		static const std::string&	class_name_get(void);
		void						highFivesGuys(void);
	
	protected:
		static const int	ft_default_hit_points;
		static const int	ft_default_energy_points;
		static const int	ft_default_attack_damage;
		static const std::string	_class_name;
};

#endif
