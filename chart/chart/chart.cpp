// chart.cpp
//Cervantes, John 
//jcervantes

//This is needed to work on house computer 
//#include "stdafx.h"


#include <iostream>
using namespace std;

//Notes
// MAKE SURE YOUR VALUES ARE DEFINED 
//IF LEFT UNDIFINED LINUX MIGHT 
//JUST GIVE IT WEIRD VALUES AND 
//IT MIGHT NOT COMPILE WHEN TURNED IN 

int printChart(int valuesChart[], int largeChart);
int largestNumber(int valuesCharge[]);


int main() 
{
	const int MAX = 100;
	int values[MAX] = { 1, 2, 5, 4, 9, 0 };
	int large;
	
	// cin for arrays was not surfe how to get user input the wau th eassignment asked
	// <1><space><4><space><2><space><3><space><0><enter>
	// this gave me a hard time and was not able ot get user input properly

	// To test my code i hard coded the array and worked with that 
	// I was ble to succesfully print oput the chart 

	// Cool I was thinking right the first time -_- trust myself
	// Keeps geting input until user enters a 0 

	int num = 0; 
	for(;num<MAX;num++){
    cin >>values[num];
    if(values[num]==0){
      break;
    }
  }
	//cin >> values[];
	large = largestNumber(values);
	printChart(values, large);

    return 0;
}


// This function prints out th chart 
// it takes an array argument and a regular int
int printChart(int valuesChart[], int largeNum) {

	int MAX = 100;

	// controls the row the printer is on 
	for (int row = 0; row < largeNum; row++)
	{
		//controls the column the printer is on and
		//prints the appropiate chraracter 
		for (int col = 0; col < MAX; col++)
		{
			if (valuesChart[col] >= largeNum - row)
				cout << "*";
			else cout << " ";
		}
		cout << "\n";
	}
	

	
	/*while (valuesChart[index] != 0)
	{
		cout << "The current number is " << valuesChart[index] << endl;
		system("pause");

		for (int row = 0; row < 5; row++)
		{

			for (int star = 0; star < 5; star++)
			{
				cout << "*";
			}
			cout << endl;
		}
		index++;
	} */


	//system("pause");
	return 0;
}


// This function compare the indexes of the array and returns the largest value
// it takes an array as an argument
int largestNumber(int valuesLarge[])
{
	
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
	} while (valuesLarge[y] != 0);

	//cout << "LARGE " << largeValue << endl;
	return largeValue;
}

