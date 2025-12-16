/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 13:33:41 by qacjl             #+#    #+#             */
/*   Updated: 2025/12/15 17:34:00 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*brainPTR = &brain;
	std::string	&brainREF =  brain;

	std::cout << "(" << &brain << ") brain value : " << brain << std::endl;
	std::cout << "(" << brainPTR << ") Value pointed by brainPTR" << *brainPTR << std::endl;
	std::cout << "(" << &brainREF << ") Value pointed by brainREF" << brainREF << std::endl;

	return (0);
}
