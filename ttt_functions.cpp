	#include <iostream>
	#include <vector>

	using std::cout;

	

	void board(){

		char character[9] = {'1', '2', '3', '4', '5', '6', '7', '8','9'};
		
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
