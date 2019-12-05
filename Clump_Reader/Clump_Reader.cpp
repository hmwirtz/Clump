// Clump_Reader.cpp : This file contains the 'main' function. Program execution begins and ends there.
//	
//	
//	
//	
//	
//	
//	
//	
//	
//		
//	
//	


#include <iostream>
#include <fstream>
#include <cstdio>
#include "Clump.h"
using namespace std;

string getFileName()
{
	string fileName;
	cout << "Enter File name\n";
	cin >> fileName;
	return fileName;

}

sectionHeader setCurrentHeader(unsigned int parentHeader[12])
{
	sectionHeader childHeader;
	parentHeader[0] = childHeader.sectionDataType[0];
	parentHeader[1] = childHeader.sectionDataType[1];
	parentHeader[2] = childHeader.sectionDataType[2];
	parentHeader[3] = childHeader.sectionDataType[3];

	parentHeader[4] = childHeader.sectionDataSize[0];
	parentHeader[5] = childHeader.sectionDataSize[1];
	parentHeader[6] = childHeader.sectionDataSize[2];
	parentHeader[7] = childHeader.sectionDataSize[3];

	parentHeader[8] = childHeader.sectionDataVersion[0];
	parentHeader[9] = childHeader.sectionDataVersion[1];
	parentHeader[10] = childHeader.sectionDataVersion[2];
	parentHeader[11] = childHeader.sectionDataVersion[3];

	return childHeader;


}

bool isFileOpen()
{
	streampos size;
	char* memblock;
	string fileName;
	sectionHeader header;
	sectionTypeDefine types;
	fileName = getFileName();
	std::ifstream clump;
	clump.open(fileName, ios::in | ios::binary | ios::ate);
	if (clump.is_open())
	{
		cout << "Clump loaded\n";

		size = clump.tellg();
		memblock = new char[size];
		clump.seekg(0, ios::beg);
		clump.read(memblock, size);


		
		for (int i = 0; i < 12; i++) {


			unsigned int hexDec[12];
			hexDec[i] = (unsigned char)memblock[i];



			header = setCurrentHeader(hexDec);
			cout << header.sectionDataType[i]		<< "\n";
			cout << hex << header.sectionDataSize[i]		<< "\n";
			cout << hex << header.sectionDataVersion[i]	<< "\n";

			cout << hex << hexDec << "\n";
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
	// return the section data types of each header

}



int main()
{
	cout << "HelloWorld\n";
	isFileOpen();
	system("pause");
}


