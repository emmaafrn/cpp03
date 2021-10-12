#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	Name = name;
	Hitpoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	std::cout << "ClapTrap " << Name << " has arrived" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " << Name << " died" << std::endl;
}

void	ClapTrap::attack(std::string const &target){
	if (Hitpoints > 0)
		std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << AttackDamage << " points of damage\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (Hitpoints > 0){
		Hitpoints -= amount;
		std::cout << "ClapTrap " << Name << " take " << amount << " damage points" << std::endl;
	}
	if (Hitpoints < 0)
		Hitpoints = 0;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (Hitpoints > 0){
		Hitpoints += amount;
		std::cout << "ClapTrap " << Name << " recovers " << amount << " Energy points" << std::endl;
	}
}
