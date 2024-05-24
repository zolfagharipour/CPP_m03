/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:58:14 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/24 21:12:35 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:
    ScavTrap( std::string name );
    ~ScavTrap();
};

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " has been born!" << std::endl;  
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
}



#endif