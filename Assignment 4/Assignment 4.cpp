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

	if (days <= 1) {

		cout << "Must be greater than one." << endl;
		return 1;
	}

	else {
		return 0;
	}

}

int main()
{
	int  growth, num_days, startPop, testnum, endpop;
	int population = 0;
	int count1 = 1;
	int percent;

	

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

	population = startPop;
	percent = growth / 100;

	cout << setprecision(0) << fixed;
	for (int count = num_days; count != 0; count1++)
	{
		count -= 1;
		endpop = (population + (population * percent));
		cout << count1 << "		" << population << "		" << endpop << endl;
	}

	return 0;
}

