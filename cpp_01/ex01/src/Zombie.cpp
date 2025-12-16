/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:15:56 by qacjl             #+#    #+#             */
/*   Updated: 2025/12/15 17:06:35 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) : name1(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->name1 << " destroyed" << std::endl;
	return ;
}

void	Zombie::annonce(void)
{
	std::cout << this->name1 << " : BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

void	Zombie::set_name(std::string name)
{
	this->name1 = name;
	return;
}


