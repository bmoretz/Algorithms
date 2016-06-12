// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Recursion.h"
#include "Hanoi.h"

using namespace std;

typedef int ( *eval )( int );

void execute( eval, string );
void execute_hanoi();

int main()
{
	//execute( Recursion::factoral, "factoral (n!)" );
	//execute( Recursion::count_down, "count down" );

	execute_hanoi();

	_getch();
}

void execute( eval f, string desc )
{
	int n;

	cout << "Please enter a number: ";
	cin >> n;
	cout << endl;

	try
	{
		cout << n << endl << desc.c_str() << endl;
		cout << f( n );
	}
	catch( const std::exception & e )
	{
		cout << e.what();
	}
}

void execute_hanoi()
{
	int towers = 3, disks = 3;

	// cout << "Enter number of towners and disks: ";

	// cin >> towers >> disks;

	hanoi h( towers, disks );

	h.solve();

	cout << endl;
}