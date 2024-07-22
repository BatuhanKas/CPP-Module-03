/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:46:51 by bkas              #+#    #+#             */
/*   Updated: 2024/07/22 16:49:01 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/ScavTrap.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

ScavTrap::ScavTrap() : ClapTrap::ClapTrap("") {
    cout << "Default ScavTrap Constructor Called" << endl;
}

ScavTrap::ScavTrap(string _name) : ClapTrap::ClapTrap(_name) {
    setInformation(_name, 100, 50, 20);
    cout << "ScavTrap Constructor Called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &oth) : ClapTrap::ClapTrap(oth) {
    cout << "ScavTrap Copy Construcotor Worked" << endl;
};

ScavTrap &ScavTrap::operator=(const ScavTrap &oth) {
    ClapTrap::operator=(oth);
    cout << "ScavTrap Copy Assignment Operator Called" << endl;
    return *this;
}

ScavTrap::~ScavTrap() { cout << "ScavTrap Destructor Called" << endl; }

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ***************************** [v] ATTACK [v] ***************************** */

void ScavTrap::attack(const string &target) {
    if (getEnergy() > 0 && getHp() > 0) {
        cout << BLUE << "ScavTrap " << getName() << " attacks " << target
             << ", causing " << getDamage() << " points of damage!" << RESET
             << endl;
        setEnergy(getEnergy() - 1);
    } else {
        cout << WHITE << getName() << " don't have enough hp or energy!"
             << RESET << endl;
    }
}

/* ***************************** [^] ATTACK [^] ***************************** */

/* ****************************** [v] WAR [v] ****************************** */

void ScavTrap::war(ScavTrap &oth) {
    if (getHp() > 0 && oth.getHp() > 0 && getEnergy() > 0) {
        attack(oth.getName());
        oth.takeDamage(getDamage());
    } else {
        if (getHp() <= 0 || getEnergy() <= 0)
            cout << WHITE << getName() << " don't have enough hp or energy!"
                 << RESET << endl;
        else if (oth.getHp() <= 0)
            cout << WHITE << oth.getName() << " is dead! " << RESET << endl;
    }
}

/* ****************************** [^] WAR [^] ****************************** */

/* ************************** [v] GUARD GATE [v] ************************** */

void ScavTrap::guardGate() {
    if (getEnergy() > 0 && getHp() > 0) {
        cout << GREEN << "ScavTrap is now in Gate keeper mode." << RESET
             << endl;
    } else if (getEnergy() < 0 && getHp() > 0) {
        cout << BLUE << "Gatekeeper mode can't be activated because "
             << getName() << " don't have enough hp!" << RESET << endl;
    } else if (getHp() < 0) {
        cout << RED << "Gatekeeper mode can't be activated because "
             << getName() << " is died!" << RESET << endl;
    }
}

/* ************************** [^] GUARD GATE [^] ************************** */