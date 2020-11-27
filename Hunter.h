#ifndef HUNTER_H
#define HUNTER_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "rol.h"
#include "monster.h"

class Hunter: public Rol
{
	public:
		Hunter(string nam):Rol(nam,150,40,20,15){
			
		}
		void Bow(Monster &m){
			m.damage(getAttack()+30);
		}
		void Arcane_Shot(Monster &m){
			m.damage(getMagic()+30);
		}
		void Guard(Rol &c){
			c.guarding(getDefense()+30);
		}

};

#endif
