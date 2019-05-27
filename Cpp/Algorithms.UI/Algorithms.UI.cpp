// Algorithms.UI.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include "LinkedList.h"

using namespace std;

void exec_list();
void array_test();

int main()
{
	array_test();

    return 0;
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

void array_test()
{
	int i, salary[15];
	for (i = 0; i < 15; i++)
	{
		cin >> salary[i]; // Input to the array
	}
}