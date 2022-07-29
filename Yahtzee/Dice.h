#pragma once
#ifndef DICE_H
#define DICE_H
#include "includes.h"
class dice {
	public:
		std::vector<int> roll_dSix(int roll_amount = 5) {
			std::vector<int> rolls;
			int roll_count = 0;
			while (roll_amount > roll_count) {
				rolls.push_back(dSix());
				roll_count++;
			}

			return(rolls);
		}
	private:
		int dSix() {
			time_t t;
			srand((unsigned) time(&t));
			int val1 = (rand() % 6) + 1;
			return(val1);
		}
};
#endif