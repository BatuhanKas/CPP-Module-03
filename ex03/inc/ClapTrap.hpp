/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:12:57 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 18:41:00 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define YELLOW "\033[1;33m"
#define LIGHT_GREEN "\033[1;32m"
#define WHITE "\033[1;37m"
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include <iostream>

using std::cout;
using std::endl;
using std::string;

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************** [v] BASE CLASS [v] ************************** */

class ClapTrap {
   private:
    string name;
    int hp, energy, damage;

   public:
    // Orthodox Form
    ClapTrap();
    ClapTrap(string _name);
    ClapTrap(const ClapTrap &oth);
    ClapTrap &operator=(const ClapTrap &oth);
    ~ClapTrap();
    // Set Functions
    void setName(const string _name);
    void setHp(const int _hp);
    void setEnergy(const int _energy);
    void setDamage(const int _damage);
    void setInformation(string _name, int _hp, int _energy, int _damage);
    // Get Functions
    string getName() const;
    int getHp() const;
    int getEnergy() const;
    int getDamage() const;
    // Functions
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void war(ClapTrap &oth);
    void display();
};

/* ************************** [^] BASE CLASS [^] ************************** */

#endif