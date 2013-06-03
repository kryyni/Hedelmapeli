//============================================================================
// Name        : HedelmaPeli.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Game.h"
using namespace std;

int main() {
	//cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Game *game=new Game();
	float initialcash=100000.0;
	float cash=initialcash;
	long k=0;
	cout << "Alunperin rahaa " << cash<<endl;
	game->setBet(1.0);
	while((cash>0.0)&&(k<100000))
	{
		cash-=game->getBet();
		cash+=game->pay(game->show());
		k++;
	}
	cout << "Rahaa jäljellä "<<cash<< endl;
	if((cash<initialcash))
	{
		cout << "Tappiota " << initialcash-cash<<endl;
	}
	else
	{
		cout << "Voittoa " << cash-initialcash<<endl;
	}
	delete game;
	return 0;
}
