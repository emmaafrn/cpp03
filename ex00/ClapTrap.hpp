#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
private :
std::string	Name;
int			Hitpoints;
int			EnergyPoints;
int			AttackDamage;
public :
		ClapTrap(std::string name);
		~ClapTrap();
void		attack(std::string const &target);
void		takeDamage(unsigned int amount);
void		beRepaired(unsigned int amount);
};


#endif