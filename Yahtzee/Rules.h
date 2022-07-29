#pragma once
#ifndef RULES_H
#define RULES_H
#include "includes.h"

class rules {
	private:
		std::map<std::string, int> count_aces(std::vector<int> roll) {
			std::map<std::string, int> aces_map;
			aces_map["Aces"] = std::accumulate(roll.begin(), roll.end(), 0);
			return(aces_map);
		}
		/*
		std::map<std::string, int> count_twos(std::vector<int>) {
			
		
		
		}
		std::map<std::string, int> count_threes(std::vector<int>) {



		}
		std::map<std::string, int> count_fours(std::vector<int>) {



		}
		std::map<std::string, int> count_fives(std::vector<int>) {



		}
		std::map<std::string, int> count_sixs(std::vector<int>) {



		}
		int total_upper(std::vector<int>) {



		}
		*/

	public:
		std::map<std::string, int> rules_main(std::vector<int> roll)
		{
			std::map<std::string, int> aces_map;
			aces_map = count_aces(roll);
			return(aces_map);
		}
};
#endif