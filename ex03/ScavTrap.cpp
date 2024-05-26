/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:00:15 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/26 16:46:19 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    std::cout << "ScavTrap " << name << " has been born!" << std::endl;  
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->getName() << " is dead!" << std::endl;
}

void    ScavTrap::attack( const std::string& target )
{
    if (!hp() || !mana())
        return ;
    
    std::cout << "ScavTrap " << getName() << " attacks " << target
        << ", causing " << getAttackDamage()
        << " points of damage!" << std::endl;
    
    this->useMana();
}

void    ScavTrap::guardGate( void )
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate-keeper mode!" << std::endl;
}
