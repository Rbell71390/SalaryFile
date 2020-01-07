/*Rachel Bell
This program opens the inputFile called salary.txt, as well as checking to make sure
it is found. It reads out the months and the salaries for those months, accumulates a total in a while loop.
After the loop ends, it averages the salaries and displays them. */
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	ifstream inputFile;
	double salary,
		   total = 0,
		   average = 0;
	int counter = 0;
	string month;


	inputFile.open("salary.txt");
	if (!inputFile)
	{
		cout << "I can't find the input file" << endl;
		system("pause");
		exit(-1);
	}


	cout << "--------Salary Listing--------\n\n";
	while (!inputFile.eof())
	{
		inputFile >> month >> salary;
		cout << fixed << setprecision(2);
		cout << left << setw(19) << month << "$" << right << setw(10) << salary << endl;
		total = total + salary;
		counter++;
	}
	average = total / counter;
	cout << fixed << setprecision(2) << endl;
	cout << left << setw(19) << "Average Salary" << "$" << right << setw(10) << average << endl;

	inputFile.close();
	system("pause");
	return 0;
}