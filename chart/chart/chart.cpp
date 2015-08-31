// chart.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int printChart(int,int);
int largestNumber(int);


int main()
{
	const int MAX = 100;
	int values[MAX];
	int large;

	large = largestNumber(values[100]);
	printChart(values[100], large);

    return 0;
}

int printChart(int valuesChart, int largeChart) {
	cout << "PRINT \n";
	return 0;
}

int largestNumber(int valuesLarge)
{
	cout << "LARGE \n";
	valuesLarge = 0;
	return valuesLarge;
}

