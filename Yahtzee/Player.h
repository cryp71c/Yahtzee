#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include "includes.h"
using namespace std;
class player { // Player Class and rules
private:
	int allowed_rolls_per_turn = 3;
	int allowed_turns = 13;
	map<string, int> upper_card; // Upper half of the score card
	map<string, int> lower_card; // Lower Half of the score card
	
public:




};
#endif