/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:12:14 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/01 15:56:05 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:

    DiamondTrap( std::string name );
    ~DiamondTrap();

    void    attack( const std::string& target );
};

DiamondTrap::DiamondTrap( std::string name )
    : ClapTrap (name + "_clap_name")
    , ScavTrap (name + "_clap_name")
    , FragTrap(name + "_clap_name")
    , _name(name)
{
    setEnergyPoint(getScavMana());
}

DiamondTrap::~DiamondTrap()
{
}

void    DiamondTrap::attack( const std::string& target )
{
    ScavTrap::attack(target);
}


#endif
