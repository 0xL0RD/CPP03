/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 17:57:21 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/18 11:17:50 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

# define FT_HIT_POINTS 100
# define FT_ENERGY_POINTS 100
# define FT_ATTACK_DAMAGE 30

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

	private:
		static const std::string	_class_name;
};

#endif
