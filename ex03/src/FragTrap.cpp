/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:23:00 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 18:41:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "../inc/FragTrap.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************* [v] ORTHODOX FORM [v] ************************* */

FragTrap::FragTrap() { cout << "Default FragTrap Constructor Worked." << endl; }

FragTrap::FragTrap(string _name) : ClapTrap::ClapTrap(_name) {
    setInformation(_name, 100, 100, 30);
    cout << "FragTrap Constructor Worked" << endl;
};

FragTrap::FragTrap(const FragTrap &oth) : ClapTrap::ClapTrap(oth) {
    cout << "FragTrap Copy Constructor Worked" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &oth) {
    ClapTrap::operator=(oth);
    cout << "FragTrap Operator Assignment Worked" << endl;
    return *this;
}

FragTrap::~FragTrap() { cout << "FragTrap Destructor Worked" << endl; };

/* ************************* [^] ORTHODOX FORM [^] ************************* */

/* ***************************** [v] ATTACK [v] ***************************** */

void FragTrap::attack(const string &target) {
    if (getEnergy() > 0 && getHp() > 0) {
        cout << BLUE << "FragTrap " << getName() << " attacks " << target
             << ", causing " << getDamage() << " points of damage!" << RESET
             << endl;
        setEnergy(getEnergy() - 1);
    } else if (getHp() > 0 && getEnergy() <= 0) {
        cout << WHITE << getName() << " don't have enough hp or energy!"
             << RESET << endl;
    } else if (getHp() <= 0) {
        cout << WHITE << getName() << " is dead! " << RESET << endl;
    }
}

/* ***************************** [^] ATTACK [^] ***************************** */

/* ****************************** [v] WAR [v] ****************************** */

void FragTrap::war(FragTrap &oth) {
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

/* ************************* [v] HIGH FIVES GUY [v] ************************* */

void FragTrap::highFivesGuy(void) {
    cout << LIGHT_GREEN << getName() << " FragTrap gives a massive high five!"
         << RESET << endl;
}

/* ************************* [^] HIGH FIVES GUY [^] ************************* */