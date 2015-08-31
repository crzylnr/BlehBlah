// chart.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int printChart(int valuesChart[], int largeChart);
int largestNumber(int valuesCharge[]);


int main()
{
	const int MAX = 100;
	int values[MAX];
	int large;
	int i = -1;

	do {
		i++;
		cin >> values[i];
	} while (values[i] != 0);

	large = largestNumber(values);
	printChart(values, large);

    return 0;
}

int printChart(int valuesChart[], int largeChart) {
	int printI = -1;
	do {
		cout << printI << "\n" << valuesChart[printI] << "\n" ;
	} while (printI < sizeof(valuesChart)/sizeof(int));

	system("pause");
	///nice xD

	return 0;
}

int largestNumber(int valuesLarge[])
{
	cout << "LARGE \n";
	int largeValue = 0;
	return largeValue;
}

