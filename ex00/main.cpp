/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:39:06 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/24 20:51:07 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clap("Clap");
    ClapTrap    trap("Trap");

    clap.attack("Trap");
    trap.takeDamage(9);
    trap.beRepaired(5);
    trap.attack("Clap");
    clap.takeDamage(3000);
    clap.beRepaired(9000);
    clap.attack("Trap");    
    
}