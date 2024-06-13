/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:00:15 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/01 16:14:58 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int ScavTrap::_scavMana = 0;

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    setHitPoint(100);
    setEnergyPoint(50);
    setAttackDamage(20);
    _scavMana = getEnergyPoint();
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

int     ScavTrap::getScavMana( void )
{
    return (this->_scavMana);
}