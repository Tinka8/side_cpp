#include <iostream>

int main() {
	// initiate variables to store total score
	std::string colleges[4] = { "Gryffindor ", "Slytherin ", "Ravenclaw ", "Hufflepuff " };

	// initiate variable to hold round number
	int i = 1, j, k, m, n;
	
	// initiate variables to store round results
	int scores[4] = {0, 0, 0, 0};;
	int tempScores[4] = {0, 0, 0, 0};

	// repeat asking for round results until one of the teams achieved atleast 10 score
	while(scores[0] < 10 && scores[1] < 10 && scores[2] < 10 && scores[3] < 10) {
		
		std::cout << "\nHow much score did teams get in round " + std::to_string(i) + "\n";

		for (k = 0; k < 4; k++) {
			std::cout << colleges[k];
			std::cin >> tempScores[k];
			scores[k] = scores[k] + tempScores[k];
		}

        // increment round number
        i++;
	}

    // print out the total results
    std::cout << "\nSeason ended with following results:" << std::endl;

	for (n = 0; n < 4; n++) {
		std::cout << colleges[n] << std::to_string(scores[n]);
		std::cout << "\n";
	}

	std::cout << "\nThere was " << i << " rounds this season" << std::endl;

	for (j = 100; j >= 0; j--) {
		for (m = 0; m < 4; m++)
		if (j == scores[m]) {
			std::cout <<  colleges[m] << j;
			std::cout << "\n";
		}
	}

    return 1;
}