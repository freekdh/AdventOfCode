// basic file operations
#include <iostream>
#include <string>
#include <vector>
#include "../utils.h"


int dayOnePart1() {
	std::ifstream myfile = open_file("C:/dev/AdventOfCode/AdventOfCode/src/day_1/input.txt");
	std::vector<int> values = convert_input_file_to_vector(myfile);
	myfile.close();

	std::vector<int>::iterator vector_iterator, vector_iterator_2;

	for (auto vector_iterator = values.begin(); vector_iterator < values.end(); vector_iterator++)
	{
		for (auto vector_iterator_2 = vector_iterator; vector_iterator_2 < values.end(); vector_iterator_2++) {
			if (*vector_iterator + *vector_iterator_2 == 2020) {
				int result = *vector_iterator * *vector_iterator_2;
				std::cout << "answer is: " << result << std::endl;
				return 0;
			}
		}
	}

	return 1;
}

int dayOnePart2() {
	std::ifstream myfile = open_file("C:/dev/AdventOfCode/AdventOfCode/src/day_1/input.txt");
	std::vector<int> values = convert_input_file_to_vector(myfile);
	myfile.close();

	std::vector<int>::iterator vector_iterator, vector_iterator_2, vector_iterator_3;

	for (auto vector_iterator = values.begin(); vector_iterator < values.end(); vector_iterator++)
		for (auto vector_iterator_2 = vector_iterator; vector_iterator_2 < values.end(); vector_iterator_2++)
			for (auto vector_iterator_3 = vector_iterator_2; vector_iterator_3 < values.end(); vector_iterator_3++)
				if (*vector_iterator + *vector_iterator_2 + *vector_iterator_3 == 2020) {
					int result = *vector_iterator * *vector_iterator_2 * *vector_iterator_3;
					std::cout << "answer is: " << result << std::endl;
					return 0;
				}

	return 1;
}
