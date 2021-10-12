#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string _name) : FragTrap(_name), ScavTrap(_name), ClapTrap(_name+"_clap_name"){
	Hitpoints = 100;
	EnergyPoints = 50;
	AttackDamage = 30;
	Name = _name;
	std::cout << "DiamondTrap " << Name << " has arrived" << std::endl;
}

DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap " << Name << " died" << std::endl;
}

void	DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap name is " << Name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::Name << std::endl;
}