#include <fstream>
#include <iostream>


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