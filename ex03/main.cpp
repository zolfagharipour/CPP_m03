/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:39:06 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/26 20:55:06 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap dia("dia");
    ScavTrap    scav("scav");
    FragTrap    frag("frag");
    
    std::cout << "DIA:  " <<  dia.getEnergyPoint() << std::endl;
    std::cout << "SCAV: " << scav.getEnergyPoint() << std::endl;
    std::cout << "FRAG: " << frag.getEnergyPoint() << std::endl;
}