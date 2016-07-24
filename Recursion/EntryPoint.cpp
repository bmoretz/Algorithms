// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "Hanoi.h"

using namespace std;

int main()
{
	_getch();
}

void hanoi()
{
	int disks = 4;

	cout << "Enter number of disks: ";
	cin >> disks;

	Hanoi::hanoi h( disks );

	h.solve();

	cout << endl;

	_getch();
}