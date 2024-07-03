/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:12:58 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 18:44:54 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/ScavTrap.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    /* ****** [v] CLAPTRAPS [v] ****** */
    cout << YELLOW
         << "/* **************** [v] CLAPTRAPS [v] **************** */" << RESET
         << endl;
    ClapTrap c1("Batu");
    ClapTrap c2("Melih");
    c1.war(c2);
    c1.display();
    c2.display();
    c1.beRepaired(5);
    c1.display();
    cout << YELLOW
         << "/* **************** [^] CLAPTRAPS [^] **************** */" << RESET
         << endl;
    /* ****** [^] CLAPTRAPS [^] ****** */

    /* ****** [v] SCAVTRAPS [v] ****** */
    cout << YELLOW
         << "/* **************** [v] SCAVTRAPS [v] **************** */" << RESET
         << endl;
    ScavTrap s1("Batu");
    ScavTrap s2("Ati");
    s1.war(s2);
    s1.display();
    s2.display();
    s1.war(s2);
    s1.display();
    s2.display();
    s1.war(s2);
    s1.display();
    s2.display();
    s2.beRepaired(20);
    s2.display();
    s1.guardGate();
    s2.guardGate();
    s1.display();
    s2.display();
    cout << YELLOW
         << "/* **************** [^] SCAVTRAPS [^] **************** */" << RESET
         << endl;
    /* ****** [^] SCAVTRAPS [^] ****** */
}

/* ****************************** [^] MAIN [^] ****************************** */