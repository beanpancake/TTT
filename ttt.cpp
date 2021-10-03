#include <iostream>
#include <cmath>
#include <vector>
#include <string>

//#include "ttt_functions.hpp"
void board();

using std::cout;
using std::cin;

bool player1_turn = true;

const char player1 = 'X';
const char player2 = 'O';
int turn_count = 1;
int chosen_spot = 0;

std::vector<char> character;
std::vector<int> taken_spots;


int main(){
	while(turn_count < 10){

		if(player1_turn == true){
			cout << "Pick a grid space: \n";
			cin >> chosen_spot;
			for(int i = 0; i < 9; i++){
				cout << "test\n"; 
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


		}


		turn_count++;
	}
}

