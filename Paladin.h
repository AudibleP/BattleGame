#include <iostream>

class Paladin
{
	private:
		int def, atk, agi;
	public:
		Paladin(): def(0), atk(0), agi(0){};
		Paladin(int defense, int attack, int agility): def(defense), atk(attack),agi(agility){};
		
		int get_def();
		int get_atk();
		int get_agi();
		
		void set_def(int);
		void set_atk(int);
		void set_agi(int);
};

//Getters
int Paladin::get_def(){
	return def;
}
int Paladin::get_atk(){
	return atk;
}
int Paladin::get_agi(){
	return agi;
}

//SETTERS
void Paladin::set_def(int d){
	def = d;
}
void Paladin::set_atk(int at){
	atk = at;
}
void Paladin::set_agi(int ag){
	agi = ag;
}

