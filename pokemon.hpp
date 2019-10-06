/*************************************************************************
** Project Name:	Pokemon.hpp
** Author:		Elizabeth Kim,
** Date:		June 6, 2019
** Description:	File contains the specification file of the Parent 
**					class Pokemon. 
**************************************************************************/
#ifndef POKEMON_HPP
#define POKEMON_HPP
#include <iostream>
#include <string>
using std::string;

class Pokemon
{
    protected:
      int attackRoll; 
      int defenseRoll;
      int HP;
      int origHP;
      int damage;
      string name;

    public:
      Pokemon();
      virtual int attack() = 0;
      virtual void defense(int) = 0;
      int getHP();
      void restore();
      int getDamage();
      string getName();
      virtual ~Pokemon();
};



#endif 
