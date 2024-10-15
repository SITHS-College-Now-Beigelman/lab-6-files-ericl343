//Eric Lin
//Lab 6
//October 15th, 2024

#include <iostream> 
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
 
int main () 
{
cout<<"Program to review streams.....\n";

ifstream inFile; // Step 2: Declare an ifstream variable
ofstream outFile; // Step 2: Declare an ofstream variable

// Step 3: Open the files
inFile.open("inData.txt");
outFile.open("outData.txt");

char ah;
string firstN;
string lastN;

inFile >> firstN >> lastN; //Step 5
outFile << "Student name: " << firstN << " " << lastN << endl;

// Last step to close the file
 inFile.close();
 outFile.close();
 
return 0; 
}
