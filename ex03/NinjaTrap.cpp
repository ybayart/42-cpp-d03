/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 18:01:29 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 18:28:21 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	m_hit_points = 60;
	m_max_hit_points = 60;
	m_energy_points = 120;
	m_max_energy_points = 120;
	m_level = 1;
	m_name = name;
	m_melee_attack = 60;
	m_ranged_attack = 5;
	m_armor_reduction = 0;
	std::cout << m_name << " just born to be invisible" << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << m_name << " became a ronin" << std::endl;
}

unsigned int		NinjaTrap::ninjaShoebox(std::string const & target)
{
	if (this->m_hit_points == 0)
		std::cout << "Oops, " << this->m_name << " are out of service" << std::endl;
	else if (this->m_energy_points < 25)
		std::cout << "Oops, " << this->m_name << " needs new shoeboxes" << std::endl;
	else
	{
		this->m_energy_points -= 25;
		std::cout << this->m_name << " packs " << target << " in a shoebox ! -10" << std::endl;
		return (10);
	}
	return (0);
}
