#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type1;
public:
	Weapon(std::string type);

	~Weapon(void);

	const std::string	&getType() const;

	void	setType(std::string type);

};

#endif
