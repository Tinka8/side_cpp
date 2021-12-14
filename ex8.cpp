#include <iostream>

int main() {
	// initiate variables to store total score
	std::string colleges[4] = { "Gryffindor ", "Slytherin ", "Ravenclaw ", "Hufflepuff " };

	// initiate variable to hold round number
	int i = 1, j, k;
	
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
    std::cout << "\nSeason ended with following results:";
    std::cout << "\nGryffindor: "  + std::to_string(scores[0]);
    std::cout << "\nSlytherin: "  + std::to_string(scores[1]);
    std::cout << "\nRavenclaw: "  + std::to_string(scores[2]);
    std::cout << "\nHufflepuff: "  + std::to_string(scores[3]) << std::endl;

	std::cout << "\nThere was " << i << " rounds this season" << std::endl;

	for (j = 100; j >= 0; j--) {
		if (j == scores[0]) {
			std::cout << "\nGryffindor " << j;
		} 
		if (j == scores[1]) {
			std::cout << "\nSlytherin " << j;
		} 
		if (j == scores[2]) {
			std::cout << "\nRavenclaw " << j;
		} 
		if (j == scores[3]) {
			std::cout << "\nHufflepuff " << j;
		}
	}

    return 1;
}