// Recursion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Recursion.h"

using namespace std;

typedef int ( *eval )( int );

void execute( eval, string );

int main()
{
	execute( Recursion::factoral, "factoral (n!)" );
	execute( Recursion::count_down, "count down" );
	
	cout << "Count 7: " <<  Recursion::count7( 707 );

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
		cout << f( n ) << endl;
	}
	catch( const std::exception & e )
	{
		cout << e.what();
	}
}