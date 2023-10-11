#include <iostream>
#include <string>
#include "BackEnd.h"
using namespace std;

int main()
{
	cout << "Welcome!" << endl;

Start:
	cout << "Please select an option: " << endl << "1. Morse to Alphabet" << endl << "2. Alphabet to Morse" << endl << "3. Exit" << endl << endl;;

	int input;
	string str_input;
	cin >> input;
	cin.ignore(1, '\n');

	switch (input)
	{
	case 1:
		cout << "Morse to Alphabet selected." << endl << "Please enter the code to be translated: ";
		getline(cin, str_input);
		MtoA(str_input);
		cout << endl;
		goto Start;

	case 2:
		cout << "Alphabet to Morse selected." << endl << "Please enter the word or sentence to be translated: ";
		getline(cin, str_input);
		AtoM(str_input);
		cout << endl;
		goto Start;

	case 3:
		cout << "Thank you and Goodbye!" << endl << endl;
		cout << "hello";
	}

	system("pause");
}