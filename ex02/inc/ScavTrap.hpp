/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:46:53 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 17:07:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "ClapTrap.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************* [v] DERIVED CLASS [v] ************************* */

class ScavTrap : public ClapTrap {
   public:
    // Orthodox Form
    ScavTrap();
    ScavTrap(string _name);
    ScavTrap(const ScavTrap &oth);
    ScavTrap &operator=(const ScavTrap &oth);
    ~ScavTrap();
    // Functions
    void attack(const string &target);
    void war(ScavTrap &oth);
    void guardGate();
};

/* ************************* [^] DERIVED CLASS [^] ************************* */

#endif