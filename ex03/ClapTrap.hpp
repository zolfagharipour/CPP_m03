/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:37:13 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/06/13 11:19:43 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    int         _hitPoint;
    int         _energyPoint;
    int         _attackDamage;
    
    
public:
    ClapTrap( std::string name );
    ClapTrap ( const ClapTrap& other );
    ClapTrap& operator=( const ClapTrap& other );
    ~ClapTrap();

    bool            mana( void );
    bool            hp( void );
    void            useMana( void );
    
    void            setName( std::string name );
    void            setHitPoint( int hp );
    void            setEnergyPoint( int mana );
    void            setAttackDamage( int dmg );
    std::string     getName( void ) const;
    int             getHitPoint( void ) const;
    int             getEnergyPoint( void ) const;
    int             getAttackDamage( void ) const;
    void            attack( const std::string& target );
    void            takeDamage( unsigned int amount );
    void            beRepaired( unsigned int amount );
};

#endif