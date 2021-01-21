#pragma once
#include <fstream>

std::ifstream open_file(const std::string& path);
std::vector<int> convert_input_file_to_vector(std::ifstream& myfile);