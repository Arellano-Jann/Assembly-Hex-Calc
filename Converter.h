#pragma once
#include <iostream>
#include <iomanip>
#include <cstdint>
#include <fstream>
#include <string>
#include <sstream>
// #include <algorithm>

class Converter{
	uint32_t hex1;
	uint32_t hex2;
	uint32_t finalHex;
	std::string func;
	char functionList[9][4] = {"add" , "and" , "asr" , "lsr" , "lsl" , "not" , "orr" , "sub" , "xor"};
	int find(std::string func);
	void printOut(); // Prints out in hex
	void addFunction(); // Add the operands
	void andFunction(); // Do a bitwise AND of the operands
	void asrFunction(); // Do a 1-bit arithmetic shift right for signed numbers
	void lsrFunction(); // Do a 1-bit logical shift right for unsigned numbers
	void lslFunction(); // Do a 1-bit logical shift left for unsigned numbers
	void notFunction(); // Do a bitwise NOT on the first operand
	void orrFunction(); // Do a bitwise OR of the operands
	void subFunction(); // Subtract the second operand from the first operand
	void xorFunction(); // Do a bitwise exclusive OR of the operands
public:
	Converter(std::string func, uint32_t hex1, uint32_t hex2);
};
