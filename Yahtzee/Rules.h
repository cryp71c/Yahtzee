#pragma once
#ifndef RULES_H
#define RULES_H
#include "includes.h"

using namespace std;
class rules {
	private:
		map<string, int> count_aces(vector<int> roll) {
			map<string, int> aces_map;
			aces_map["Aces"] = accumulate(roll.begin(), roll.end(), 0);
			return(aces_map);
		}
		/*
		map<string, int> count_twos(vector<int>) {
			
		
		
		}
		map<string, int> count_threes(vector<int>) {



		}
		map<string, int> count_fours(vector<int>) {



		}
		map<string, int> count_fives(vector<int>) {



		}
		map<string, int> count_sixs(vector<int>) {



		}
		int total_upper(vector<int>) {



		}
		*/

	public:
		map<string, int> rules_main(vector<int> roll)
		{
			map<string, int> aces_map;
			aces_map = count_aces(roll);
			return(aces_map);
		}
};
#endif