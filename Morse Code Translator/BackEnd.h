#include "Data.h"
#include <string>
#include <iostream>
using namespace std;

void AtoM(string inp)
{
	for (int i = 0; i < inp.size(); i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (tolower(inp[i]) == letters[j])
			{
				cout << morseLetters[j] << " ";
			}
		}
	}

	cout << endl << endl;
}

void MtoA(string inp)
{
	string temp = "";
	int i = 0;
	
	while (inp[i] == '.' || inp[i] == '-' || inp[i] == '/')
	{
		if (inp[i] != '.' || inp[i] != '/' || inp[i] != ' ' || inp[i] != '-')
		{
			cout << "There has been an error in your input, please re-enter. Thank you." << endl;
			return;
		}

		if (inp[i] == '/')
		{
			cout << " ";
			i++;
			goto Conversion;
		}

		while (inp[i] == '.' || inp[i] == '-')
		{
			temp += inp[i];
			i++;

			if (inp[i] == ' ')
			{
				i++;
				break;
			}
		}

		Conversion:
		for (int j = 0; j < 40; j++)
		{
			if (temp == morseLetters[j])
			{
				cout << letters[j];
				break;
			}
		}

		cout << endl << endl;

		temp = "";
	}
	
}