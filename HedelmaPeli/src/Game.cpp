/*
 * Game.cpp
 *
 *  Created on: 3.6.2013
 *      Author: opiframe
 */

#include "Game.h"

Game::Game() {
	// TODO Auto-generated constructor stub
	/**
	 * Initialize the game. Add values to the slots-table as follows:
	 * 2 x J
	 * 3 x 7
	 * 4 x H
	 * 5 x P
	 * 6 x A
	 * 10 x 1
	 */
	int j;
	for(int i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			values[i][j]="J";
		}
		for(j=2;j<5;j++)
		{
			values[i][j]="7";
		}
		for(j=5;j<9;j++)
		{
			values[i][j]="H";
		}
		for(j=9;j<14;j++)
		{
			values[i][j]="P";
		}
		for(j=14;j<20;j++)
		{
			 values[i][j]="A";
		}
		for(j=20;j<30;j++)
		{
			values[i][j]="1";
		}
	}
	srand(time(NULL)); //initialize random number generator
	bet=0.0;
	reward=0.0;
}

Game::~Game() {
	// TODO Auto-generated destructor stub
}

