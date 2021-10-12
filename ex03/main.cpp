#include "DiamondTrap.hpp"

int	main(void){
	DiamondTrap DiamondTrap("Jack");

	DiamondTrap.attack("Sam");
	DiamondTrap.takeDamage(50);
	DiamondTrap.whoAmI();
	DiamondTrap.highFivesGuys();

	return (0);
}