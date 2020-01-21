/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 17:58:28 by ybayart           #+#    #+#             */
/*   Updated: 2020/01/15 18:58:28 by ybayart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class	NinjaTrap : public virtual ClapTrap
{
	public:

	NinjaTrap(std::string name);
	~NinjaTrap(void);
	unsigned int		ninjaShoebox(std::string const & target);
};

#endif
