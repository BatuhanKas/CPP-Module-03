/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:12:58 by bkas              #+#    #+#             */
/*   Updated: 2024/07/04 11:50:38 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/DiamondTrap.hpp"

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

    /* ****** [v] FRAGTRAPS [v] ****** */
    cout << YELLOW
         << "/* **************** [v] FRAGTRAPS [v] **************** */" << RESET
         << endl;
    FragTrap f1("Batu");
    FragTrap f2("Fiko");
    f2.display();
    f1.war(f2);
    f2.display();
    f1.war(f2);
    f2.display();
    f1.war(f2);
    f2.display();
    f1.war(f2);
    f2.display();
    f1.display();
    f1.highFivesGuy();
    cout << YELLOW
         << "/* **************** [^] FRAGTRAPS [^] **************** */" << RESET
         << endl;
    /* ****** [^] FRAGTRAPS [^] ****** */

    /* ****** [v] DIAMONDTRAPS [v] ****** */
    cout << YELLOW
         << "/* **************** [v] DIA-TRAPS [v] **************** */" << RESET
         << endl;
    DiamondTrap d1("Batu");
    DiamondTrap d2("Maksut");
    d1.display();
    d2.display();
    d1.war(d2);
    d2.display();
    d1.war(d2);
    d2.display();
    d1.war(d2);
    d2.display();
    d1.war(d2);
    d2.display();
    d1.whoAmI();
    cout << YELLOW
         << "/* **************** [^] DIA-TRAPS [^] **************** */" << RESET
         << endl;
    /* ****** [^] DIAMONDTRAPS [^] ****** */
}

/* ****************************** [^] MAIN [^] ****************************** */