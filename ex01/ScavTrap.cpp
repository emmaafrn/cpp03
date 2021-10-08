#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string _name): ClapTrap(_name) {
	
	Hitpoints = 10;
	EnergyPoints = 50;
	AttackDamage = 20;
	std::cout << "ScavTrap " << Name << " has arrived" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << Name << " died" << std::endl;
}
void		ScavTrap::attack(std::string const &target){
	if (EnergyPoints > 0)
		std::cout << "ScavTrap " << Name << " attack " << target << ", causing " << Hitpoints << " points of damage\n";
}

void	ScavTrap::guardGate(){
	std::cout << "ScavTrap has enterred in Gate keeper mode" << std::endl;
}
