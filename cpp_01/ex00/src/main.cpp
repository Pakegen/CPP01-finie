/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 11:23:23 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/08 14:10:56 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include"Zombie.hpp"

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "Create the Zombie Donald." << std::endl;
	Zombie Donald = Zombie("Donald");
	Donald.annonce();

	std::cout << "Create the Zombie Mickey with the NewZombie()." << std::endl;
	Zombie *Mickey = newZombie("Mickey");
	Mickey->annonce();
	delete Mickey;

	std::cout << "Create the Zombie Dingo with randomChump()." << std::endl;
	randomChump("Dingo");
};
