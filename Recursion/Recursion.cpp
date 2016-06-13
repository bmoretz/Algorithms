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