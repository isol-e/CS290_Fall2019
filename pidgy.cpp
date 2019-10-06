/*************************************************************************
** Project Name:	pidgy.cpp
** Author:			Elizabeth Kim,
** Date:			Jun 6, 2019
** Description:		File contains the source file of the
                    Pidgy class.
**************************************************************************/
#include "pidgy.hpp"
#include "pokemon.hpp"
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

/**************************************************************************
* Pidgy
Constructor class
**************************************************************************/
Pidgy::Pidgy()
{
	HP = 10;
	origHP = 10;
	name = "Pidgy";
}

/**************************************************************************
* Attack
Attack function. Returns pokemon's attack
**************************************************************************/
int Pidgy::attack()
{
	attackRoll = rand() % 3 + 1;
	return attackRoll;
}

/**************************************************************************
* defense(int)
Rolls defense die.
Damage = enemy attack - defense roll
Takes enemy's attack, calculates damage and subtracts that from strength points
**************************************************************************/
void Pidgy::defense(int enemyAttack)
{
	defenseRoll = rand() % 2 + 1;

	damage = enemyAttack - defenseRoll;
	if (damage < 0)
	{
		damage = 0;
	}
	HP = HP - damage;
}

