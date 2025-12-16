/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qacjl <qacjl@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 12:32:19 by qacjl             #+#    #+#             */
/*   Updated: 2025/12/15 17:15:48 by qacjl            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie*	horde = new	Zombie[N];

	for (int cur = 0; cur < N; cur++)
		horde[cur].set_name(name);
	return horde;
}
