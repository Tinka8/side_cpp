#include <iostream>

int main() {
	// initiate variables to store total score
	int gryffindor = 0, slytherin = 0, ravenclaw = 0, hufflepuff = 0;
	
	// initiate variable to hold round number
	int i = 1, j;
	
	// initiate variables to store round results
	int tempGryffindor, tempSlytherin, tempRavenclaw, tempHufflepuff;

	// repeat asking for round results until one of the teams achieved atleast 10 score
	while(gryffindor < 10 && slytherin < 10 && ravenclaw < 10 && hufflepuff < 10) {
		
		std::cout << "\nHow much score did teams get in round " + std::to_string(i) + "\n";
		
		// ask gryffindor
		std::cout << "Gryffindor: ";
		std::cin >> tempGryffindor;
			
		gryffindor = gryffindor + tempGryffindor;
		
		// ask slytherin
		std::cout << "Slytherin: ";
		std::cin >> tempSlytherin;
			
		slytherin = slytherin + tempSlytherin;

        // ask ravenclaw
		std::cout << "Ravenclaw: ";
		std::cin >> tempRavenclaw;
			
		ravenclaw = ravenclaw + tempRavenclaw;

        // ask hufflepuff
		std::cout << "Hufflepuff: ";
		std::cin >> tempHufflepuff;
			
		hufflepuff = hufflepuff + tempHufflepuff;

        // increment round number
        i++;
	}

    // print out the total results
    std::cout << "\nSeason ended with following results:";
    std::cout << "\nGryffindor: "  + std::to_string(gryffindor);
    std::cout << "\nSlytherin: "  + std::to_string(slytherin);
    std::cout << "\nRavenclaw: "  + std::to_string(ravenclaw);
    std::cout << "\nHufflepuff: "  + std::to_string(hufflepuff) << std::endl;

	std::cout << "\nThere was " << i << " rounds this season" << std::endl;

	for (j = 100; j >= 0; j--) {
		if (j == gryffindor) {
			std::cout << "\nGryffindor " << j;
		} 
		if (j == slytherin) {
			std::cout << "\nSlytherin " << j;
		} 
		if (j == ravenclaw) {
			std::cout << "\nRavenclaw " << j;
		} 
		if (j == hufflepuff) {
			std::cout << "\nHufflepuff " << j;
		}
	}

    return 1;
}