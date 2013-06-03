/*
 * Game.h
 *
 *  Created on: 3.6.2013
 *      Author: opiframe
 */

#ifndef GAME_H_
#define GAME_H_
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
class Game
{
private:
	float bet;
	float reward;
	string values[3][30];

public:
	Game();
	virtual ~Game();
	int run();
	string show();
	float pay(string aResult);
	float getBet() const;
	void setBet(float bet);
	float getReward() const;
	void setReward(float reward);
};

#endif /* GAME_H_ */
