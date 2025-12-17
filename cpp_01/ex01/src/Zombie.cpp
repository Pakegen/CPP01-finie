/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:15:56 by qacjl             #+#    #+#             */
/*   Updated: 2025/12/17 11:59:23 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " destroyed" << std::endl;
	return ;
}

void	Zombie::annonce(void)
{
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::set_name(std::string name)
{
	this->name = name;
	return;
}


