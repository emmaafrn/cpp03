#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public :
	FragTrap(std::string _name);
	virtual ~FragTrap();
void	highFivesGuys(void);
};






#endif