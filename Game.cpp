#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Paladin.h"
#include "Hunter.h"
#include "Wizard.h"

using namespace std;

int main()
{
	int election;
	int hp,atk,def,agi,mhp, init, matk, mdef, magi, damage, mdamage;
	Paladin pal;
	Hunter hun;
	Wizard wiz;

	matk = 10;
	mdef = 15;
	magi = 5;
	
	srand(unsigned(time(0)));
	init = rand()%2+1;
	mhp = rand()%100+100;
	cout << "...\n";
	cout << "........\n";
	cout << "................\n";
	cout << "...............................\n";
	cout << "'It's time to wake up...'\n";
	cout << "'Open your eyes... Quickly!!!'\n";
	cout << "The first thing you see... a enormous spider in front of YOU!\n\n";
	cout << "Choose a class\n 1 -> Paladin \n 2 -> Hunter \n 3 -> Wizard \n";
	do{cin >> election;} while(election > 3 || election < 1);
	switch(election)
	{
		case 1:
			hp = rand()%70+80;
			pal.set_atk(rand()%5+5);
			pal.set_def(rand()%25+25);
			pal.set_agi(15);
			break;
		case 2:
			hp = rand()%20+80;
			hun.set_atk(rand()%15+15);
			hun.set_def(rand()%15+15);
			hun.set_agi(10);
			break;
		case 3:
			hp = rand()%20+80;
			wiz.set_atk(rand()%30+30);
			wiz.set_def(rand()%10+10);
			wiz.set_agi(5);
			break;
	}	
	if (init == 1)
	{
		cout << "Your turn!\n";
	}
	while(hp > 0 || mhp > 0)
	{
		cout << "What's your decision?\n 1 -> Attack \n 2 -> Magic \n 3 -> Guard \n";
		do{cin >> election;} while(election > 3 || election < 1);
		switch(election)
		{
			case 1:
				atk = rand()%20+30;
				def = rand()%10+10;
				agi = rand()%5;
				break;
			case 2:
				atk = rand()%15+15;
				def = rand()%10+10;
				agi = rand()%10;
				break;
			case 3:
				atk = rand()%10+10;
				def = rand()%200+100;
				agi = rand()%15;
				break;
		}	
			election = rand()%3;
		
			switch(election){
		
			case 1:
				matk = rand()%20+10;
				mdef = rand()%10+10;
				magi = rand()%5;
				break;
			case 2:
				matk = rand()%5+10;
				mdef = rand()%10+10;
				magi = rand()%15;
				break;
			case 3:
				matk = rand()%1+1;
				mdef = rand()%300+300;
				magi = rand()%15;
				break;
				
			election = rand()%3;}
			
			mdamage =  (atk - magi) - (mdef/atk);
			if (mdamage < 0) {
				mdamage = 0;
			}
			mhp = mhp - mdamage;
			cout << "You did " << mdamage << " damage to the monster!\n";
			cin.get();
			
			if(mhp < 1){
				cout << "You killed the monster! Beta completed!\n";
				cin.get();
				return 0;
			}
			
			cout << "The monster now has " << mhp << " HP left.\n";
			damage = (matk- agi) - (def/matk);
			if(damage < 0)
			{
				damage = 0;
			}
			hp = hp - damage;
			cout << "The monster dealt " << damage << " damage. Your current HP is " << hp <<"!\n";
			if (hp<1){
				cout << "You died! The monster fled with " << mhp << " HP left... GAME OVER\n";
				cin.get();
				return 0;
			}
			else
	{
				cout << "Your turn!\n";
	
	while(hp > 0 || mhp > 0)
		{
		cout << "What's your decision?\n 1 -> Attack \n 2 -> Magic \n 3 -> Guard \n";
		do{cin >> election;} while(election > 3 || election < 1);
		switch(election)
		{
			case 1:
				atk = rand()%20+30;
				def = rand()%10+10;
				agi = rand()%5;
				break;
			case 2:
				atk = rand()%15+15;
				def = rand()%10+10;
				agi = rand()%10;
				break;
			case 3:
				atk = rand()%10+10;
				def = rand()%200+100;
				agi = rand()%15;
				break;
		}	
			election = rand()%3;
		
			switch(election){
		
			case 1:
				matk = rand()%20+10;
				mdef = rand()%10+10;
				magi = rand()%5;
				break;
			case 2:
				matk = rand()%5+10;
				mdef = rand()%10+10;
				magi = rand()%15;
				break;
			case 3:
				matk = rand()%1+1;
				mdef = rand()%300+300;
				magi = rand()%1;
				break;
				
			election = rand()%3;}
			mdamage =  (atk - magi) - (mdef/atk);
			if (mdamage < 0) {
				mdamage = 0;
			}
			mhp = mhp - mdamage;
			cout << "You did " << mdamage << " damage to the monster!\n";
			cin.get();
			
			if(mhp < 1){
				cout << "You killed the monster! Beta completed!\n";
				cin.get();
				return 0;
			}
			
			cout << "The monster now has " << mhp << " HP left.\n";
			damage = (matk- agi) - (def/matk);
			if(damage < 0)
			{
				damage = 0;
			}
			hp = hp - damage;
			cout << "The monster dealt " << damage << " damage. Your current HP is " << hp <<"!\n";
			if (hp<1)
			{
				cout << "You died! The monster fled with " << mhp << " HP left... GAME OVER\n";
				cin.get();
				return 0;
			}	
		}
	}
	}
}
