/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 14:46:53 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 20:22:17 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] DEFINES [v] **************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

/* **************************** [^] DEFINES [^] **************************** */

/* *************************** [v] INCLUDES [v]  *************************** */

#include "ClapTrap.hpp"

/* *************************** [^] INCLUDES [^]  *************************** */

/* ************************* [v] DERIVED CLASS [v] ************************* */

class FragTrap : virtual public ClapTrap {
   public:
    // Orthodox Form
    FragTrap();
    FragTrap(string _name);
    FragTrap(const FragTrap &oth);
    FragTrap &operator=(const FragTrap &oth);
    ~FragTrap();
    // Functions
    void attack(const string &target);
    void war(FragTrap &oth);
    void highFivesGuy(void);
};

/* ************************* [^] DERIVED CLASS [^] ************************* */

#endif