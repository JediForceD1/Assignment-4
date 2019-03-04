/*
Assignment 4.cpp
Aaron McCormick
Calculating taxes for a given number
*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;



int main()
{
	double endpop;
	double population = 0;
	double percent;
	double testnum, num_days, growth, startPop;
	
	cout << "Enter starting population: ";

	do
	{
		
		cin.clear();
		cin.ignore(1000, '\n');

		
		cin >> startPop;
		

		if (cin.fail() == true) {

			
			cout << "Your input cannot be a letter." << endl;

			
			/*cin >> startPop;
			testnum = 1;*/
		}

		else if(startPop < 2) {
			cout << "Your input cannont be negitive or less than two." << endl;
			
			/*cin >> startPop;
			testnum = 1;*/
		}
		
		cout << "End of loop" << endl;
		
	} while (cin.fail() == true || startPop < 2);

	do
	{
		cout << "Enter daily growth % (.1 must be entered as 10. No decimals!): ";
		cin >> growth;
		if (growth < 0) {

			cout << "Percent must be greater than 0." << endl;
			cin >> growth;
			testnum = 1;
		}

		else {
			testnum = 0;
		}


	} while (testnum == 1);

	

	do
	{
		cout << "Enter number of days to calculate: ";
		cin >> num_days;
		if (num_days <= 1) {

			cout << "Must be greater than one." << endl;
			cin >> num_days;
			testnum = 1;

		}

		else {
			testnum = 0;
		}
	} while (testnum == 1);

	cout << "-----------------------------------------------------------\n\n";

	
	cout << "Start Population: " << startPop << endl
		<< "Daily Percent Growth: " << growth << "%" << endl
		<< "Number of Days: " << num_days << endl << endl;


	cout << "Day" << '\t' << "Population" << '\t' << "Population" << endl
		<< '\t' << "at day start" << '\t' << "at day end" << endl
		<< "------------------------------------------------------" << endl;

	population = startPop;
	percent = growth / 100;

	cout << setprecision(2) << fixed;
	for (int count = 1; count <= num_days; count++)
	{
		endpop = (population + (population * percent));
		cout << count << "		" << population << "		" << endpop << endl;
		population = endpop;
	}

	return 0;
}

