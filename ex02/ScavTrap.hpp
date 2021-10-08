#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap{
public :
	ScavTrap(std::string _name);
	virtual ~ScavTrap();
virtual void	attack(std::string const &target);
void			guardGate(void);
};

#endif