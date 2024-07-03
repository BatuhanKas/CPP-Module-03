/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 19:03:32 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 20:47:26 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************* [v] DERIVED CLASS [v] ************************* */

class DiamondTrap : public FragTrap, public ScavTrap {
   private:
    string name;

   public:
    // Orthodox Form
    DiamondTrap();
    DiamondTrap(string _name);
    DiamondTrap(const DiamondTrap &oth);
    DiamondTrap &operator=(const DiamondTrap &oth);
    ~DiamondTrap();

    // Set & Get
    void setDiaName(const string name);
    string getDiaName() const;

    // Functions
    void war(DiamondTrap &oth);
    void attack(const string &target);
    void whoAmI();
    void display();
};

/* ************************* [^] DERIVED CLASS [^] ************************* */

#endif