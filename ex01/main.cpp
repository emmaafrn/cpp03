#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void){
	ClapTrap	ClapTrap("Joe");

	ClapTrap.attack("Bobbie");
	ClapTrap.takeDamage(5);
	ClapTrap.beRepaired(2);
	ClapTrap.takeDamage(3);
	ClapTrap.attack("Bobbie");
	ClapTrap.takeDamage(5);
	ClapTrap.attack("Bobbie");

	ScavTrap ScavTrap("Bernard");

	ScavTrap.attack("Jimmy");
	ScavTrap.takeDamage(5);
	ScavTrap.attack("Jimmy");
	ScavTrap.guardGate();
	ScavTrap.beRepaired(2);
	
	return (0);
}