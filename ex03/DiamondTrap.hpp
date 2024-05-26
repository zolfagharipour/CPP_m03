/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 20:12:14 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/26 21:22:05 by mzolfagh         ###   ########.fr       */
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
};

DiamondTrap::DiamondTrap( std::string name )
    : ClapTrap (name + "_clap_name"), ScavTrap (name), FragTrap(name), _name(name)
{
    ClapTrap::setEnergyPoint(ScavTrap::getEnergyPoint());
    std::cout << "ENERGYSCAV: " << ClapTrap::getEnergyPoint() << std::endl;
    ClapTrap::setHitPoint(FragTrap::getHitPoint());
    ClapTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
}


#endif
