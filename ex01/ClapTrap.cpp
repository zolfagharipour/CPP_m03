/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:38:32 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/24 20:54:01 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << _name << " has been born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << _name << " is dead!" << std::endl;
}

bool    ClapTrap::_mana(void)
{
    if (_energyPoint)
        return (1);
    std::cout << "No Mana(energy point)!" << std::endl;
    return (0);
}

bool    ClapTrap::_hp(void)
{
    if (_hitPoint)
        return (1);
    std::cout << "No HP!" << std::endl;
    return (0);
}


void    ClapTrap::attack(const std::string& target)
{
    if (!_hp() || !_mana())
        return ;
    
    std::cout << _name << " attacks " << target
        << ", causing " << _attackDamage
        << " points of damage!" << std::endl;
    
    _energyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    int     damage;
    
    if (_hitPoint >= (int)amount)
        damage = amount;
    else
        damage = _hitPoint;
    _hitPoint -= damage;
    
    std::cout << _name << " recieved " << damage
        << " points of damage!\tHP: " << _hitPoint << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (!_hp() || !_mana())
        return ;
    _hitPoint += amount;
    
    std::cout << _name << " heals +" << amount
        << "\tHP: " << _hitPoint << std::endl;
    _energyPoint--;
}
