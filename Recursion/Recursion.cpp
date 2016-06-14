#include "stdafx.h"
#include "Recursion.h"


Recursion::Recursion()
{
}


Recursion::~Recursion()
{
}

int Recursion::factoral( int number )
{
	return number == 0 ? 
		1 : number * factoral( number - 1 );
}

int Recursion::count_down( int from )
{

	cout << from << " ";

	return from == 1 ?
		0 : count_down( from - 1 );
}

int Recursion::count7( int n )
{
	if( n == 0 )
		return 0;

	n % 10 == 7 ?
		1 + count7( n / 10 ) :
		0 + count7( n / 10 )
	;
}

int Recursion::count8( int n )
{
	return 0;
}