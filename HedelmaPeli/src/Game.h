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

	void run();
	void show();
};

#endif /* GAME_H_ */
