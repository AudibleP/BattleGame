#ifndef WIZARD_H_H
#define WIZARD_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "rol.h"
#include "monster.h"

class Wizard: public Rol
{
	public:
		Wizard(string nam):Rol(nam,150,10,10,50){
			
		}
		void Staff(Monster &m){
			m.damage(getAttack()+30);
		}
		void Fireball(Monster &m){
			m.damage(getMagic()+30);
		}
		void Guard(Rol &c){
			c.guarding(getDefense()+30);
		}

};
#endif
