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
	int  growth, num_days, count;
	int population = 0, startPop;
	/*
		Write down code validate user input
	*/
	cout << "Enter starting population: ";
	cin >> startPop;


	cout << "Enter daily growth % (.1 must be entered as 10. No decimals!): ";
	cin >> growth;

	cout << "Enter number of days to calculate: ";
	cin >> num_days;

	cout << "-----------------------------------------------------------\n\n";


	cout << "Start Population: " << startPop << endl
		<< "Daily Percent Growth: " << growth << "%" << endl
		<< "Number of Days: " << num_days << endl << endl;


	cout << "Day" << '\t' << "Population" << '\t' << "Population" << endl
		<< '\t' << "at day start" << '\t' << "at day end" << endl
		<< "------------------------------------------------------" << endl;

	cout << setprecision(0) << fixed;
	for (count ........)
	{
		/*
				Write down code to print out start population and end population
				for the day
	*/
	}

	return 0;
}

