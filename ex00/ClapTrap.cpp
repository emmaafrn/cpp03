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
	if (EnergyPoints > 0)
		std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << Hitpoints << " points of damage\n";
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (EnergyPoints >= amount){
		EnergyPoints -= amount;
		AttackDamage += amount;
		std::cout << "ClapTrap " << Name << " take " << amount << " damage points" << std::endl;
	}
	else if (EnergyPoints > 0){
		std::cout << "ClapTrap " << Name << " take " << EnergyPoints << " damage points" << std::endl;
		EnergyPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (EnergyPoints > 0){
		EnergyPoints += amount;
		std::cout << "ClapTrap " << Name << " recovers " << amount << " Energy points" << std::endl;
	}
}