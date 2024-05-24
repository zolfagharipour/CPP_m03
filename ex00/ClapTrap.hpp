/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:37:13 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/24 20:27:53 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int         _hitPoint;
    int         _energyPoint;
    int         _attackDamage;
    
    bool        _mana( void );
    bool        _hp( void );
    
public:
    ClapTrap( std::string name );
    ~ClapTrap();

    void    attack( const std::string& target );
    void    takeDamage( unsigned int amount );
    void    beRepaired( unsigned int amount );
};

#endif