/**
 * @file main.cpp
 * @author Jann Arellano
 * @brief This program takes in a file and adds the 2 hexadecimal numbers on each line of the file.
 * @version 0.1
 * @date 2022-01-27
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <string>
#include <sstream>
#include "Converter.h"

/**
 * @brief The main driver function that takes in a file and processes it.
 * 
 * @return int 
 */
int main(){
	std::string filename = "file.txt";
	// std::cout << "What's the filename? ";
	// std::cin >> filename;

	std::ifstream file(filename);

	if (file.is_open()){
		std::string func;
		uint32_t hex1, hex2;
		while (file >> func >> std::hex >> hex1 >> hex2){
			std::cout << "0x" << hex1 << " " << func << " ";
			std::cout << "0x" << hex2 << " : ";
			Converter converter(func, hex1, hex2); // check if this gets destroyed. so no dupe values
    	}
 	}
  	file.close();
  
  return 0;
}
    
