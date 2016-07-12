// Hanoi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Hanoi.h"

int main()
{
	int disks = 4;

	cout << "Enter number of disks: ";
	cin >> disks;

	hanoi h( disks );

	h.solve();

	cout << endl;

	_getch();
}

