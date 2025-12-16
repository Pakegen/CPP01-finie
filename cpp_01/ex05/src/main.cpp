/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 10:10:45 by qacjl             #+#    #+#             */
/*   Updated: 2025/09/11 12:12:00 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main(void)
{
	Harl harl = Harl();
	std::cout << "DEBUG : ";
	harl.complain("debug");
	std::cout << std::endl << "INFO : ";
	harl.complain("info");
	std::cout << std::endl << "WARNING : ";
	harl.complain("warning");
	std::cout << std::endl << "ERROR : ";
	harl.complain("error");
	return (0);
}
