#include <iostream>

class Wizard
{
	private:
		int def, atk, agi;
	public:
		Wizard():def(0), atk(0), agi(0){};
		Wizard(int defense, int attack, int agility): def(defense), atk(attack),agi(agility){};
		
		int get_def();
		int get_atk();
		int get_agi();
		;
		void set_def(int);
		void set_atk(int);
		void set_agi(int);
};

//Getters
int Wizard::get_def(){
	return def;
}
int Wizard::get_atk(){
	return atk;
}
int Wizard::get_agi(){
	return agi;
}

//SETTERS
void Wizard::set_def(int d){
	def = d;
}
void Wizard::set_atk(int at){
	atk = at;
}
void Wizard::set_agi(int ag){
	agi = ag;
}
