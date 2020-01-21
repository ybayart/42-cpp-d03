/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 15:51:12 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 17:32:37 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>

class	FragTrap
{
	private:

	unsigned int	m_hit_points;
	unsigned int	m_max_hit_points;
	unsigned int	m_energy_points;
	unsigned int	m_max_energy_points;
	unsigned int	m_level;
	std::string		m_name;
	unsigned int	m_melee_attack;
	unsigned int	m_ranged_attack;
	unsigned int	m_armor_reduction;

	public:

	FragTrap(std::string name);
	~FragTrap(void);
	unsigned int		meleeAttack(std::string const & target);
	unsigned int		rangedAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);
	unsigned int		vaulthunter_dot_exe(std::string const & target);
};

#endif
