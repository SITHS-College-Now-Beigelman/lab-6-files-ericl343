//Eric Lin
//Lab 6
//October 15th, 2024

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;
 
int main () 
{
//Declaring variables
ifstream inFile;
ofstream outFile; 

//Selecting destinations
inFile.open("inData.txt");
outFile.open("outData.txt");

//Declaring more variables
int v1;
int v2;
char x;
string hi;

//Adding value 1 and 2 together
inFile >> v1 >> v2;
outFile << "Value of combined:" << v1+v2 <<endl;

//The next letter from my char
inFile >> x;
outFile <<"char:"<<char(x+1) << endl;

//String
inFile>>hi;
outFile<<hi;

//The files are used and should be closed
outFile.close();
inFile.close();

return 0;
}

/*
Value of combined:79
char:F
Sup!
*/