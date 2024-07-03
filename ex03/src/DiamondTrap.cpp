/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:03:41 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 20:48:47 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "../inc/DiamondTrap.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************ [v] SET && GET NAME [v] ************************ */

void DiamondTrap::setDiaName(const string _name) { name = _name; };

string DiamondTrap::getDiaName() const { return name; };

/* ************************ [^] SET && GET NAME [^] ************************ */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

DiamondTrap::DiamondTrap() {
    cout << "Default Diamond Constructor Worked" << endl;
}

DiamondTrap::DiamondTrap(string _name)
    : ClapTrap::ClapTrap(_name + "_clap_name") {
    setDiaName(_name);
    setHp(FragTrap::getHp());
    setEnergy(ScavTrap::getEnergy());
    setDamage(FragTrap::getDamage());
    cout << "Diamond Constructor Worked" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &oth) : ClapTrap::ClapTrap(oth) {
    cout << "Diamond Copy Constructor Worked" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &oth) {
    if (this == &oth) return *this;
    setDiaName(getDiaName());
    ClapTrap::operator=(oth);
    cout << "Diamond Operator Assignment Worked" << endl;
    return *this;
}

DiamondTrap::~DiamondTrap() { cout << "Diamond Destructor Worked" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ***************************** [v] ATTACK [v] ***************************** */

void DiamondTrap::attack(const string &target) { ScavTrap::attack(target); };

/* ***************************** [^] ATTACK [^] ***************************** */

/* ****************************** [v] WAR [v] ****************************** */

void DiamondTrap::war(DiamondTrap &oth) {
    if (getHp() > 0 && oth.getHp() > 0 && getEnergy() > 0) {
        attack(oth.getName());
        oth.takeDamage(getDamage());
    } else {
        if (getHp() >= 0 && getEnergy() <= 0)
            cout << WHITE << getName() << " don't have enough hp or energy!"
                 << RESET << endl;
        else if (oth.getHp() <= 0)
            cout << WHITE << oth.getName() << " is dead! " << RESET << endl;
    }
}

/* ****************************** [^] WAR [^] ****************************** */

/* **************************** [v] WHOAMI [v] **************************** */

void DiamondTrap::whoAmI() {
    cout << "Diamond Name is:" << getDiaName() << endl;
    cout << "ClapTrap name is: " << ClapTrap::getName() << endl;
}

/* **************************** [^] WHOAMI [^] **************************** */

/* **************************** [v] DISPLAY [v] **************************** */

void DiamondTrap::display() {
    cout << WHITE << "Diamond Name:" << getDiaName() << RESET << endl;
    ClapTrap::display();
}

/* **************************** [^] DISPLAY [^] **************************** */