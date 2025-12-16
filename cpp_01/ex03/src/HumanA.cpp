/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:12:08 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/08 15:19:55 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name1(name), weapon1(weapon)
{}

HumanA::~HumanA(void)
{
	std::cout << "HumanA " << this->name1 << " destroyed" << std::endl;
	return;
}

void	HumanA::attack(void)
{
	std::cout << this->name1 << " attack with their " << this->weapon1.getType() << std::endl;
	return;
}
