// Yahtzee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "includes.h"

using namespace std;
int main()
{
    rules rule_set;
    dice dice_set;
    player_base new_player;
    map<string, int> count_aces;
    map<string, player_base> players;
    vector<int> roll;
    char player_count_c = ';';
    int player_count_i{};
    char y_n;
    bool game = TRUE;
    bool main_menu = TRUE;
    string tmp_player_name;

    while (game) {
        while (main_menu) {
            while (player_count_c != '1' && player_count_c != '2' && player_count_c != '3' && player_count_c != '4') {
                cin.clear();
                player_count_c = ';';
                cin >> player_count_c;
                if (player_count_c == '1' || player_count_c == '2' || player_count_c == '3' || player_count_c == '4') {
                    player_count_i = (int)player_count_c - 48;
                    cout << typeid(player_count_i).name() << endl;
                    break;
                }
                cout << "Not a valid input" << endl;
            }
            system("cls");
            main_menu = FALSE;
        }
        cout << player_count_i << endl;
        cout << "[*] Initializing players." << endl;
        for (int player = 1; player <= player_count_i; player++) {
            cin.clear();
            cout << "Player Name: ";
            cin >> tmp_player_name;
            new_player.player_name = tmp_player_name;
            new_player.player_number = player;
            players[tmp_player_name] = new_player;
        }
        for (auto it = players.begin(); it != players.end(); ++it) {
            cout << it->first << " = " << it->second.player_number << '\n';

        }
        game = FALSE;
    }
    return(0);
}