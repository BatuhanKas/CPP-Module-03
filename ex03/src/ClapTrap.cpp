/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:18:19 by bkas              #+#    #+#             */
/*   Updated: 2024/07/22 16:50:14 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "../inc/ClapTrap.hpp"

/* *************************** [^] INCLUDES [^] *************************** */

/* *************************** [v] SETTERS [v] *************************** */

void ClapTrap::setName(const string _name) { name = _name; }
void ClapTrap::setHp(const int _hp) { hp = _hp; }
void ClapTrap::setEnergy(const int _energy) { energy = _energy; }
void ClapTrap::setDamage(const int _damage) { damage = _damage; }

/* *************************** [^] SETTERS [^] *************************** */

/* *************************** [v] GETTERS [v] *************************** */

string ClapTrap::getName() const { return name; }
int ClapTrap::getHp() const { return hp; }
int ClapTrap::getEnergy() const { return energy; }
int ClapTrap::getDamage() const { return damage; }

/* *************************** [^] GETTERS [^] *************************** */

/* ************************ [v] ORTHODOX FORM [v] ************************ */

ClapTrap::ClapTrap() {
    setName("");
    cout << "Default Constructor Called" << endl;
}

void ClapTrap::setInformation(string _name, int _hp, int _energy, int _damage) {
    name = _name;
    hp = _hp;
    energy = _energy;
    damage = _damage;
}

ClapTrap::ClapTrap(string _name) {
    name = _name;
    hp = 10;
    energy = 10;
    damage = 2;
    cout << "Constructor Called" << endl;
};

ClapTrap::ClapTrap(const ClapTrap &oth) {
    if (this != &oth) *this = oth;
    cout << "Copy Constructor Worked" << endl;
}

ClapTrap::~ClapTrap() { cout << "Destructor Called" << endl; };

ClapTrap &ClapTrap::operator=(const ClapTrap &oth) {
    if (this == &oth) return *this;
    name = oth.name;
    hp = oth.hp;
    energy = oth.energy;
    damage = oth.damage;
    cout << "Operator Assignment Called" << endl;
    return *this;
}

/* ************************ [^] ORTHODOX FORM [^] ************************ */

/* **************************** [v] ATTACK [v] **************************** */

void ClapTrap::attack(const string &target) {
    if (getEnergy() > 0 && getHp() > 0) {
        cout << BLUE << "ClapTrap " << name << " attacks " << target
             << ", causing " << damage << " points of damage!" << RESET << endl;
        energy--;
    } else {
        cout << WHITE << getName() << " don't have enough hp or energy!"
             << RESET << endl;
    }
}

/* **************************** [^] ATTACK [^] **************************** */

/* ************************* [v] TAKE-DAMAGE [v] ************************* */

void ClapTrap::takeDamage(unsigned int amount) {
    if (getHp() > 0) {
        cout << RED << name << " take " << damage << " points of damage!"
             << RESET << endl;
        hp -= amount;
        if (hp <= 0) setHp(0);
    } else {
        cout << WHITE << getName() << " don't have enough hp!" << RESET << endl;
    }
}

/* ************************* [^] TAKE-DAMAGE [^] ************************* */

/* **************************** [v] REPAIR [v] **************************** */

void ClapTrap::beRepaired(unsigned int amount) {
    if (getEnergy() > 0 && getHp() > 0) {
        hp += amount;
        energy--;
        cout << GREEN << name << " repaired itself " << amount << " hp!"
             << endl;
        cout << "New HP is: " << hp << RESET << endl;
    } else {
        if (getEnergy() <= 0)
            cout << WHITE << getName() << " don't have enough hp!" << RESET
                 << endl;
        else if (getHp() <= 0) {
            cout << WHITE << getName()
                 << " can't heal himself because he's dead! " << RESET << endl;
        }
    }
}

/* ***************************** [^] REPAIR [^] ***************************** */

/* ****************************** [v] WAR [v] ****************************** */

void ClapTrap::war(ClapTrap &oth) {
    if (getHp() > 0 && oth.getHp() > 0 && getEnergy() > 0) {
        attack(oth.getName());
        oth.takeDamage(getDamage());
    } else {
        cout << WHITE << getName() << " don't have enough hp or energy!"
             << RESET << endl;
    }
}

/* ****************************** [^] WAR [^] ****************************** */

/* ***************************** [v] STATUS [v] ***************************** */

void ClapTrap::display() {
    cout << WHITE << "-----------------" << endl;
    cout << "Name: " << getName() << endl;
    cout << "Hp: " << getHp() << endl;
    cout << "Energy: " << getEnergy() << endl;
    cout << "Attack Damage: " << getDamage() << endl;
    getHp() > 0 ? cout << "Status: Alive" << endl
                : cout << "Status: Dead" << endl;
    cout << "-----------------" << RESET << endl;
}

/* ***************************** [^] STATUS [^] ***************************** */