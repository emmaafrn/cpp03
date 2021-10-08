#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
protected:
std::string	Name;
int			Hitpoints;
int			EnergyPoints;
int			AttackDamage;
public :
		ClapTrap(std::string name);
virtual	~ClapTrap();
virtual void	attack(std::string const &target);
void			takeDamage(unsigned int amount);
void			beRepaired(unsigned int amount);
};


#endif