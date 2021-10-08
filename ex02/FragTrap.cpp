#include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){
	Hitpoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
	std::cout << "FragTrap " << Name << " has arrived" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << Name << " died" << std::endl;
}
