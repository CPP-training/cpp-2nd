#include "stdafx.h"
#include <iostream>
#include<conio.h>

using namespace std;


int main()
{

	int age = 0;
	int totalage = 0;
	int numberofpeople=0;

	cout << "inter a new age: ";
	cin >> age;

	while (age != -1) {
		if (age <= 0) {
			cout << "wrong age, please enter positive integer: ";
			goto line1;
			
		}	totalage = totalage + age;
			numberofpeople++;
			cout << "inter next age or press -1 to quit: ";
			line1: cin >> age;

	}

	cout << "Total number of people is: " << numberofpeople<<endl;
	cout << "the average age is: " << (totalage / numberofpeople);

	getch();
}
