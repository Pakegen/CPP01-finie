/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:08:51 by qacjl             #+#    #+#             */
/*   Updated: 2025/12/15 17:06:10 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name);

int main()
{
	int	N = 10;
	Zombie *horde = ZombieHorde(N, "Disney");

	for(int cur = 0; cur < N; cur++)
		horde[cur].annonce();
	delete [] horde;
	return (0);
}
