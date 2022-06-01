#include <iostream>
#include <string>
#include "myFuncs.h"
using namespace std;

int main()
{
	
	setlocale(LC_ALL, "Russian");
	
	string line;
	bool consoleInput{}, consoleOutput{};
	do
	{

		consoleInput = inputMenu();
		consoleOutput = outputMenu();



		if (consoleInput)
		{
			cout << "введите строку" << endl;
			cin.ignore();
			getline(cin, line);
		}

		else
		{
			line = fileInput();
		}
		if (consoleOutput)
		{
			cout << answer2(line) << endl;
		}
		else
		{
			fileOutput(answer2(line));

		}
		if (consoleInput)
		{
			if (repeat() == false)
			{
				consoleInput = false;
				break;
			}
			else
			{
				consoleInput = false;
			}

		}
		else
		{
			break;
		}

	} while (true);

}


