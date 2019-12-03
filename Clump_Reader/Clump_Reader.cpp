// Clump_Reader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "Clump.h"
using namespace std;

string getFileName()
{
	string fileName;
	cout << "Enter File name\n";
	cin >> fileName;
	return fileName;

}

bool isFileOpen()
{
	streampos size;
	char* memblock;
	string fileName;
	fileName = getFileName();
	std::ifstream clump;
	clump.open(fileName, ios::in | ios::binary | ios::ate);
	if (clump.is_open())
	{
		cout << "Clump loaded";

		size = clump.tellg();
		memblock = new char[size];
		clump.seekg(0, ios::beg);
		clump.read(memblock, size);


		for (int i = 0; i < size; i++) {
			unsigned int hexDec = (unsigned char)memblock[i];

			cout << hex << hexDec;

		}


		clump.close();
		return true;


	}
	else cout << "No clump to load";
	return false;
}

void headerCount()
{
	// Count each RW header
	// return the types of data each header uses

}

int main()
{
	cout << "HelloWorld\n";
	isFileOpen();
}


