/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:12:58 by bkas              #+#    #+#             */
/*   Updated: 2024/07/03 18:34:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* **************************** [v] INCLUDES [v] **************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

/* **************************** [^] INCLUDES [^] **************************** */

/* ****************************** [v] MAIN [v] ****************************** */

int main() {
    /* ****** [v] CLAPTRAPS [v] ****** */
    cout << YELLOW
         << "/* **************** [v] CLAPTRAPS [v] **************** */" << RESET
         << endl;
    ClapTrap c1("batu");
    ClapTrap c2("melih");
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
    ScavTrap s1("batu");
    ScavTrap s2("ati");
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
    FragTrap f1("batu");
    FragTrap f2("fiko");
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
    cout << YELLOW
         << "/* **************** [^] FRAGTRAPS [^] **************** */" << RESET
         << endl;
    /* ****** [^] FRAGTRAPS [^] ****** */
}

/* ****************************** [^] MAIN [^] ****************************** */