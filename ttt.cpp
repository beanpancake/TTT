#include <iostream>
#include <vector>

#include "ttt_functions.h"

using std::cout;
using std::cin;

bool player1_turn = true;

int turn_count = 1;
int chosen_spot = 0;

char taken_space[9] = {'1', '2', '3', '4', '5', '6', '7', '8','9'};

int main(){


	board();

	while(turn_count < 10){

		//board();

		/*if(player1_turn == true){
			cout << "Pick a grid space: \n";
			cin >> chosen_spot;
			for(int i = 0; i < 9; i++){
				if(chosen_spot == taken_spots[i]){
					cout << "Spot taken. Try again.";
					chosen_spot = 0;
					break;
				}
				else{
					taken_spots[i] = player1;
					chosen_spot = 0;
				}
			}


		}*/


		turn_count++;
	}
}

