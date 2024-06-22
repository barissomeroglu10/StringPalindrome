/*
We get a number from user which has odd size. Then we check the number is palindrome or not.
Purpose of the code is using string library to solve a problem.

Developer = Barış Someroğlu
Date = 22.06.2024 - 01:00 pm
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Change console colour
	system("color E9");

	string UserString, OppositeString;

	cout << "Please Enter a Number = ";
	cin >> UserString;

	while (UserString.size() % 2 == 0)
	{
		cout << "Please Enter a String Which Has Odd Size = ";
		cin >> UserString;
	}

	if (UserString.length() % 2 != 0)
	{
		// Write opposite string  
		for (int i = UserString.size() - 1; i >= 0; i--)
		{
			OppositeString += UserString[i];
		}

		if (UserString == OppositeString)
		{
			cout << "\nYour Number is Palindrome" << endl;
		}

		else
		{
			cout << "\nYour Number isn't Palindrome" << endl;
		}


	}

	return 0;
}