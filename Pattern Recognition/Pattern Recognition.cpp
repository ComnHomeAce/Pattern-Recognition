//This program prompts the user to enter a series of integers and 
//displays if the series contains four consecutive numbers with the same value.

#include <iostream>
using namespace std;

bool isConsecutiveFour(const int values[], int size)
{
	int count = 1;
	int max = 0;

	for (int i = 0; i < size; i++)
	{
		//Checks to see if sequential numbers match
		if (values[i] == values[i+1])
		{
			count += 1; //Increments count by 1
			max = count; //Sets max to new count
		}
		else
		{
			count = 1; //Resets count if sequential numbers do not match
		}
	}
	if (max >= 4)
	{
		cout << "\nThis list has 4 or more numbers of the same value listed consecutively.\n\n";
	}
	else
	{
		cout << "\nThis list does not have 4 numbers of the same value listed consecutively.\n\n";
	}

	return 0;
}


int main()
{
	int values[80];
	int size;

	cout << "This program prompts the user to enter a series of integers and\n";
	cout << "displays if the series contains four consecutive numbers with the same value.\n\n";

	cout << "Enter the number of values in the list: ";
	cin >> size;
	
	cout << "\n\nEnter " << size << " values. Press enter after each value.\n";

	//Loop to get values
	for (int i = 0; i < size; i++)
	{
		cin >> values[i];
	}

	cout << isConsecutiveFour(values, size);
}