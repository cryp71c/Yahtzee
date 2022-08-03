// Yahtzee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "includes.h"

using namespace std;
int main()
{
    rules rule_set;
    dice dice_set;
    map<string, int> count_aces;
    vector<int> roll;
    char player_count = ';';
    char y_n;
    bool game = TRUE;
    bool main_menu = TRUE;


    while (game) {
        while (main_menu) {
            while (player_count != '1' && player_count != '2' && player_count != '3' && player_count != '4') {
                cin.clear();
                player_count = ';';
                cin >> player_count;
                if (player_count == '1' || player_count == '2' || player_count == '3' || player_count == '4') {
                    break;
                }
                cout << "Not a valid input" << endl;
            }
            main_menu = FALSE;
        }
        roll = dice_set.roll_dSix();
        for (int i = 0; i < roll.size(); i++) {
            cout << roll[i] << endl;
        }
        cout << "Out of menu." << endl;
        game = FALSE;
    }

    //
    
    /*switch (player_count)
    {

    default:
        break;
    }
    */


    //count_aces = rule_set.rules_main();
    //cout << "Aces Total: " << count_aces["Aces"] << endl;
    
    return(0);
}