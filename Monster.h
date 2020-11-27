#ifndef MONSTER_H
#define MONSTER_H

#include <iostream>
using namespace std;
class Monster{
	
	private:	
		int health;
		int attack;
		int defense;
		int magic;
		
		
		string name;
	
	public:
		Monster(string nam, int hp, int atk, int def, int mag){
			name = nam;
			health = hp;
			attack = atk;
			defense = def;
			magic = mag;
		}
		
		int getHealth (){
			return health;
		}
		int getAttack (){
			return attack;
		}
		int getDefense (){
			return defense;
		}
		int getMagic (){
			return magic;
		}
		string getName (){
			return name;
		}
		
		void damage(int damage){
			health = health - damage;
		}
		void guarding (int guarding){
			int damage;
			guarding = guarding - damage;
			health = health - guarding;
		}
		void setHealth(int h){
			health = h;
		}
		void setAttack(int a){
			attack = a;
		}
		void setDefense(int d){
			defense = d;
		}
		void setMagic(int m){
			magic = m;
		}
};
#endif
