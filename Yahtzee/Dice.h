#pragma once
#ifndef DICE_H
#define DICE_H
#include "includes.h"

using namespace std;
class dice {
	public:
		vector<int> roll_dSix(int roll_amount = 5) {
			vector<int> rolls;
			int roll_count = 0;
			srand(time(0));
			while (roll_amount > roll_count) {
				rolls.push_back(dSix());
				roll_count++;
			}
			return(rolls);
		}
		int dSix() {
			int val1 = (rand() % 6) + 1;
			return(val1);
		}
};
#endif