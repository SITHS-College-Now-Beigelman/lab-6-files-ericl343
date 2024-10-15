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

inFile >> v1 >> v2;
outFile << "Value of combined:" << v1+v2 <<endl;

inFile >> x;
outFile <<"char:"<<char(x+1) << endl;

inFile>>hi;
outFile<<hi;

outFile.close();
inFile.close();

return 0;
}
