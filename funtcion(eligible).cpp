// funtcion(eligible).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void eligible(int x)
{
	if (x >= 18)
	{
		cout << "you are elgible to vote" << endl;
	}
	else
	{
		cout << "you are not eligible to vote" << endl;
	}
}
int main()
{
	int a;
	cout << "enter age" << endl;
	cin >> a;
	eligible(a);
}

