#include <fstream>
#include <iostream>
#include <vector>
#include <string>

std::ifstream open_file(const std::string& path) {
	std::ifstream myfile;
	myfile.open(path, std::ios::in);
	if (myfile.is_open()) {
		std::cout << "successfully opened the file" << std::endl;
		return myfile;
	}
	else {
		std::cout << "not successful in openingfile" << std::endl;
		abort();
	}
}

std::vector<int> convert_input_file_to_vector(std::ifstream& myfile) {
	std::string line;
	std::vector<int> values;
	while (std::getline(myfile, line))
	{
		values.push_back(std::stoi(line));
	}
	return values;
}