#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void){
	FragTrap	FragTrap("Billie");

	FragTrap.attack("Sam");
	FragTrap.takeDamage(50);
	FragTrap.takeDamage(10);
	FragTrap.highFivesGuys();
	return (0);
}