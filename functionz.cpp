/************************************************************

Program name: functionz.cpp

input: none
output:none

Summary:

Pseudocode:

Begin
    Declare function prototypes
    Declare struct that contains char variable, total letter
        count variable, and float percentage variable
    Declare file streams
    declare struct array

    call openFile function
    call count function
    call printResult function
End
    

*************************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>



struct charInfo
{
    char currentChar;
    int totalChars;
    float percentOfChar;
}

void openFile(std::ifstream& inputFile, std::ofstream& outputFile);
void count(charInfo letterArray[], ifstream& inputFile);
void printResult(charInfo letterArray[], std::ofstream& outputFile);


void openFile(ifstream& inputFile, ofstream& outputFile)
{
    std::string iFile;
    std::string oFile;


    std::cout << "Enter input file name" << std::endl;
    std::cin >> iFile;
    std::cout << std::endl;

    inputFile.open(iFile);

    if(!inputFile.good())
    {
        std::cout << "Could not open file" << std::endl;
        inputFile.close();
        exit (EXIT_FAILURE);
    }



    inputFile.close();
    
    std::cout << "Enter output file name" << std::endl;
    std::cin >> oFile;
    std::cout << std::endl;

    outputFile.open(oFile);

    
}

void count(struct charInfo letterArray[], ifstream& inputFile)
{

    while(!inputFile.eof())
    {
        inputStr = std::cin >> inputFile;
    }
    
    

}



void printResult(struct charInfo letterArray[], std::ofstream& outputFile)
{

}

int main()
{
    std::ifstream inputFile;
    std::ofstream outputFile;
    struct charInfo letterArray[52];
    std::string inputStr;

}