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

int testpop(int startPop) {

	if (startPop < 2) {
		cout << "Your input cannont be negitive or less than two." << endl;
		return 1;
	}

	else {
		return 0;
	}
}

int testgrowth(int growth) {

	if (growth < 0) {

		cout << "Percent must be greater than 0." << endl;
		return 1;
	}

	else {
		return 0;
	}
}

int testdays(int days) {

	if (days >= 1) {

		cout << "Must be greater than one." << endl;
		return 1;
	}

	else {
		return 0;
	}

}

int main()
{
	int  growth, num_days, count, startPop, testnum;
	int population = 0;

	

	do
	{
		cout << "Enter starting population: ";
		cin >> startPop;
		testnum = testpop(startPop);
	} while (testnum == 1);

	do
	{
		cout << "Enter daily growth % (.1 must be entered as 10. No decimals!): ";
		cin >> growth;
		testnum = testgrowth(growth);
	} while (testnum == 1);

	

	do
	{
		cout << "Enter number of days to calculate: ";
		cin >> num_days;
		testnum = testdays(num_days);
	} while (testnum == 1);

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

