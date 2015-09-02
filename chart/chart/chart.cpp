// chart.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
using namespace std;

int printChart(int valuesChart[], int largeChart);
int largestNumber(int valuesCharge[]);


int main()
{
	const int MAX = 5;
	int values[MAX] = {51, 2, 3, 40, 5};
	int large;
	int i = -1;

	/*do {
		i++;
		cin >> values[i];
	} while (values[i] != 0);*/

	large = largestNumber(values);
	printChart(values, large);

    return 0;
}

int printChart(int valuesChart[], int largeNum) {
	/*int printI = -1;
	do {
		cout << printI << "\n" << valuesChart[printI] << "\n" ;
	} while (printI < sizeof(valuesChart)/sizeof(int));*/



	for (int y = 0; y <largeNum; y++) {
		for (int x = 0;  x < 4; x++) {
			if (valuesChart[x] >= 4 - y) {
				//system("pause");
				cout << "x" << endl;
			}
			else
				cout << " ";
		}
	}
	cout << endl;


	system("pause");
	///nice xD

	return 0;
}

int largestNumber(int valuesLarge[])
{
	cout << "LARGE \n";
	int largeValue = 0;
	int x = 0;
	int y = -1;

	do {
		x++;
		y++;

		if (valuesLarge[y] < valuesLarge[x] && valuesLarge[x] > largeValue) {
			largeValue = valuesLarge[x];
		}
		if (valuesLarge[y] > valuesLarge[x] && valuesLarge[y] > largeValue) {
			largeValue = valuesLarge[y];
		}
	} while (y < 10);

	cout << "Largest number is " << largeValue << endl;
	return largeValue;
}

