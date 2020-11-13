#include <iostream>

class Hunter
{
	private:
		int def, atk, agi;
	public:
		Hunter(): def(0), atk(0), agi(0){};
		Hunter(int defense, int attack, int agility):def(defense), atk(attack),agi(agility){};
		
		int get_def();
		int get_atk();
		int get_agi();
		
		void set_def(int);
		void set_atk(int);
		void set_agi(int);
};

//Getters
int Hunter::get_def(){
	return def;
}
int Hunter::get_atk(){
	return atk;
}
int Hunter::get_agi(){
	return agi;
}

//SETTERS
void Hunter::set_def(int d){
	def = d;
}
void Hunter::set_atk(int at){
	atk = at;
}
void Hunter::set_agi(int ag){
	agi = ag;
}
