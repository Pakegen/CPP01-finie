/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 15:20:40 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/08 15:32:28 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name1(name)
{
}
HumanB::~HumanB(void)
{
	std::cout << "HumanB " << this->name1 << " destroyed" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon1 = &weapon;
	return;
}

void	HumanB::attack(void)
{
	if (this->weapon1)
		std::cout << this->name1 << " attack with their" << this->weapon1->getType() << std::endl;
	return;
}
