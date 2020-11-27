#ifndef SPIDER_H
#define SPIDER_H

#include <cstdlib>
#include <ctime>
#include <iostream>
#include "rol.h"
#include "monster.h"

class Spider: public Monster
{
	public:
		Spider(string nam):Monster(nam,300,25,25,25){
			
		}
		void Bite(Rol &c){
			c.damage(getAttack());
		}
		void Venom(Rol &c){
			c.damage(getMagic());
		}
		void Guard(Monster &m){
			m.guarding(getDefense());
		}

};
#endif
