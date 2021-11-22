/*
* Author:	Vinh Duong
* Course:	CS202
* Assignment: 	Program3
* Filename: 	UI.cpp
* 
*
* Description: 	Implementation for functions that validate user input
*
*
*/
#include "util.h"
using namespace std;



//Prompts and reads in a char then returns the char 
//Validates user input
char read_char(const char prompt[])
{
	char to_read;
	cout << '\n' << prompt;
	cin >> to_read;
	cin.ignore(100, '\n');
	return to_read;
}


//prompts to choose a letter and returns the char
//Validates user input
char read_cmd(void)
{
	char cmd;
	cmd = read_char("Selection: ");
	return toupper(cmd);
}



//Reads a char arrays and copies it over to the argument inputstr
//Validates user input
void read_string(const char prompt[], char inputstr[], int maxchar)
{
	cout << '\n' << prompt;
	cin.get(inputstr, maxchar, '\n');
	while(!cin)
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << '\n' << prompt;
		cin.get(inputstr, maxchar, '\n');
	}
	cin.ignore(100, '\n');
}





//Prompts the user a message and reads in a int and returns the int
//Validates user input
int read_int(const char prompt[])
{
	int num = 0;
	cout << '\n' << prompt;
	cin >> num;
	while(!cin || num < 0) 
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << '\n' << "Invalid input!" << '\n';
		cout << '\n' << prompt;
		cin >> num;
		cin.ignore();
	}
	cin.ignore(100, '\n');
	return num;	
}



//Prompts user to message to enter a float and returns the float
//Validates user input
float read_float(const char prompt[])
{
	float num = 0.0;
	cout << '\n' << prompt;
	cin >> num;
	while(!cin || num < 0.0) 
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << '\n' << "Invaslid input!" << '\n';
		cout << '\n' << prompt;
		cin >> num;
		cin.ignore();
	}
	cin.ignore(100, '\n');
	return num;	

}

double read_double(const char prompt[])
{
	double num = 0.0;
	cout << '\n' << prompt;
	cin >> num;
	while(!cin || num < 0.0) 
	{
		cin.clear();
		cin.ignore(100, '\n');
		cout << '\n' << "Invaslid input!" << '\n';
		cout << '\n' << prompt;
		cin >> num;
		cin.ignore();
	}
	cin.ignore(100, '\n');
	return num;	
}



//prompts user a message and ask for a 'y' for true 
//anything else is false
//Validates user input
bool read_bool(const char prompt[])
{
	char answer;
	do
	{
		answer = read_char(prompt);
		tolower(answer);
	}while(!answer);

	if(answer == 'y')
		return 1;
	else 
		return 0;

}
