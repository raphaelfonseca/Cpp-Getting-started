/*
	Raphael Fonseca
	May 4th 2016
	CPP/ PRG-410
	Proffessor R. BRADLEY ANDREWS

	This program is intended to ask the users name, then ask weither the user would like to
	add another user to the program(no database support). This program will show knowledge 
	in input and output statements as well as a simple if/else statement, as well as the
	proper user of objects.

*/

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Declarations
	//fix this
	string userName;		// This holds the new users name
	string userAnswer;		// This will hold the users response

	std::cout << "What is your name? ";
	std::cin >> userName;	// This gathers user names and holds it in memory
	std::cout << "Hello " << userName << " my name is ProgramOne" << std::endl;

	// Ask if the user would like to close the application or return to the beginning
	std::cout << "Would you like to add another user? " << std::endl;
	std::cout << "Please enter Y for yes or N for No ";
	std::cin >> userAnswer;

	// Find users answer
	if (userAnswer == "Y" || userAnswer == "Y")
			{
				std::cout << "PlaceHolder";
				// place ***go to location***********
			}
		else if (userAnswer != " ")
			{
				std::cout << "Please enter a valid answer";
				// needs to loop back to if statement********
			}
	else
		std::cout << "Goodbye" << std::endl;

	//Do not touch **remove later***
    return 0;
}

