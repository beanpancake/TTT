#include <iostream>
#include <vector>
#include <string>
	
using std::cout;

char character[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char taken_spots[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
bool game_over = false;
int grid_choice;
std::string winning_player;
bool tie_game = false;
bool playerX_turn;
char current_player[2] = {'X', 'O'};
int turn = 1;


void board(){

	cout << "       |       |       \n";
	cout << "   " << character[0] << "   |   " <<character[1] <<"   |   " << character[2] << "   \n";
	cout << "_______|_______|_______\n";
	cout << "       |       |       \n";
	cout << "   " << character[3] << "   |   " <<character[4] <<"   |   " << character[5] << "   \n";
	cout << "_______|_______|_______\n";
	cout << "       |       |       \n";
	cout << "   " << character[6] << "   |   " <<character[7] <<"   |   " << character[8] << "   \n";
	cout << "       |       |       \n\n";

}


void winning_combos(){

	if(character[0] == 'X' && character[1] == 'X' && character[2] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[0] == 'O' && character[1] == 'O' && character[2] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[3] == 'X' && character[4] == 'X' && character[5] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[3] == 'O' && character[4] == 'O' && character[5] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[6] == 'X' && character[7] == 'X' && character[8] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[6] == 'O' && character[7] == 'O' && character[8] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[0] == 'X' && character[3] == 'X' && character[6] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[0] == 'O' && character[3] == 'O' && character[6] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[1] == 'X' && character[4] == 'X' && character[7] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[1] == 'O' && character[4] == 'O' && character[7] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[2] == 'X' && character[5] == 'X' && character[8] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[2] == 'O' && character[5] == 'O' && character[8] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[0] == 'X' && character[4] == 'X' && character[8] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[0] == 'O' && character[4] == 'O' && character[8] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else if(character[2] == 'X' && character[4] == 'X' && character[6] == 'X'){

		game_over = true;
		winning_player = " Player X";

	}

	else if(character[2] == 'O' && character[4] == 'O' && character[6] == 'O'){

		game_over = true;
		winning_player = " Player O";

	}

	else{

		game_over = false;

	}


}


void game_cycle(){

	while(turn <= 9){
		board();
		winning_combos();
		if(game_over == true){
			cout << "Game Over. " << winning_player << " Wins!" << std::endl;
			break;
		}

		else{
			cout << "Select a grid for " << current_player[playerX_turn] << std::endl;
			std::cin >> grid_choice;
			grid_choice = grid_choice - 1;

			if(grid_choice <= 9){

				if(character[grid_choice] == current_player[0] || character[grid_choice] == current_player[1]){

					cout << "That spot is already taken." << std::endl;

				}

				else{
					character[grid_choice] = current_player[playerX_turn];
					playerX_turn = !playerX_turn;
					turn++;
				}
			}

			else{

				cout << "Invalid number. Try again." << std::endl;
		}
	}	
	}
}
	