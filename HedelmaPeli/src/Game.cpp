/*
 * Game.cpp
 *
 *  Created on: 3.6.2013
 *      Author: opiframe
 */

#include "Game.h"
#include <iostream>
using namespace std;
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
int Game::run()
{
	int value=rand()%30;
	return value;
}

string Game::show()
{
	int i;
	string result="";
	for(i=0;i<3;i++)
	{
		result+=values[i][this->run()];
	}
	return result;
}

float Game::getBet() const {
	return bet;
}

void Game::setBet(float bet) {
	this->bet = bet;
}

float Game::getReward() const {
	return reward;
}

void Game::setReward(float reward) {
	this->reward = reward;
}

float Game::pay(string aResult)
{
	if(aResult=="JJJ")
	{
		return bet*200;
	}
	else if(aResult=="777")
	{
		return bet*150;
	}
	else if(aResult == "HHH")
	{
		return bet*80;
	}
	else if(aResult=="PPP")
	{
		return bet*50;
	}
	else if(aResult=="AAA")
	{
		return bet*25;
	}
	else if(aResult=="111")
	{
		return bet;
	}
	else
	{
		return 0.0;
	}
}
