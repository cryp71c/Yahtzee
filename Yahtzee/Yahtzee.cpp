// Yahtzee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "includes.h"

int main()
{
    rules rule_set;
    std::vector<int> test_vector;
    std::map<std::string, int> count_aces;
    //[1, 4, 3, 5, 2]
    test_vector.push_back(1);
    test_vector.push_back(4);
    test_vector.push_back(3);
    test_vector.push_back(5);
    test_vector.push_back(2);

    count_aces = rule_set.rules_main(test_vector);
    std::cout << "Aces Total: " << count_aces["Aces"] << std::endl;
    

}