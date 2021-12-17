#include <iostream>

int main() {
	// initiate variables to store total score
	const int arrayLength = 4;
	std::string colleges[arrayLength] = { "Gryffindor ", "Slytherin ", "Ravenclaw ", "Hufflepuff " };

	// initiate variable to hold round number
	int j, k, m, n, i = 1;
	
	// initiate variables to store round results
	int scores[4] = {0, 0, 0, 0};
	int tempScores[4] = {0, 0, 0, 0};

	// repeat asking for round results until one of the teams achieved atleast 10 score
	while(scores[0] < 10 && scores[1] < 10 && scores[2] < 10 && scores[3] < 10) {
		
		std::cout << "\nHow much score did teams get in round " + std::to_string(i) + "\n";

		for (k = 0; k < arrayLength; k++) {
			std::cout << colleges[k];
			std::cin >> tempScores[k];
			scores[k] = scores[k] + tempScores[k];
		}

        // increment round number
        i++;
	}

    // print out the total results
    std::cout << "\nSeason ended with following results:" << std::endl;

	for (m = 0; m < arrayLength; m++) {
		std::cout << colleges[m] << std::to_string(scores[m]);
		std::cout << "\n";
	}

	std::cout << "\nThere was " << i << " rounds this season" << std::endl;

	for (j = 100; j >= 0; j--) {
		for (n = 0; n < arrayLength; n++)
		if (j == scores[n]) {
			std::cout <<  colleges[n] << j;
			std::cout << "\n";
		}
	}

    return 1;
}