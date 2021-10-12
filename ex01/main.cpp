#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int	main(void){
	ScavTrap ScavTrap("Bernard");

	ScavTrap.attack("Jimmy");
	ScavTrap.takeDamage(5);
	ScavTrap.attack("Jimmy");
	ScavTrap.guardGate();
	ScavTrap.beRepaired(2);
	
	return (0);
}