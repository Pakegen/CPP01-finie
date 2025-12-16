/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 14:09:10 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/08 15:50:27 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>
#include <iostream>


Weapon::Weapon(const std::string type) : type1(type)
{}
Weapon::~Weapon(void)
{
	std::cout << "Weapon " << this->type1 << " destroyed" << std::endl;
}
const std::string	&Weapon::getType(void) const
{
	return (this->type1);
}

void	Weapon::setType(std::string type)
{
	this->type1 = type;
	return;
}
