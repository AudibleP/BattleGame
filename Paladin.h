#ifndef PALADIN_H
#define PALADIN_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "rol.h"
#include "monster.h"

class Paladin: public Rol
{
	public:
		Paladin(string nam):Rol(nam,200,10,50,25){
			
		}
		void Sword(Monster &m){
			m.damage(getAttack()+30);
		}
		void Smite(Monster &m){
			m.damage(getMagic()+30);
		}
		void Guard(Rol &c){
			c.guarding(getDefense()+30);
		}

};
#endif
