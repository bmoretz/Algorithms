// Algorithms.UI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LinkedList.h"
#include "Hanoi.h"

using namespace std;

void exec_list();
void hanoi();

int main()
{
	hanoi();

    return 0;
}

void hanoi()
{
	auto disks = 4;

	cout << "Enter number of disks: ";
	cin >> disks;

	Hanoi::hanoi h( disks );

	h.solve();

	cout << endl;

}

void exec_list()
{
	DataStructures::LinkedList<int> list;

	cout << list.to_string();
	cout << "length: " << list.length() << endl;

	for( auto index = 0; index < 10; index++ )
	{
		list.push_back( index );
	}

	cout << list.to_string();
	cout << "length: " << list.length() << endl;

	//list.insertAt( -1, 5 );
	cout << list.to_string();
}