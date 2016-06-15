#pragma once

#include "stdafx.h"

#include <string>

using namespace std;

class Recursion
{
public:
	Recursion();
	~Recursion();

	static int factorial( int number );
	static int bunnyEars( int bunnies );
	static int bunnyEars2( int bunnies );
	static int count_down( int from );
	static int triangle( int rows );
	static int sumDigits( int n );
	static int count7( int n );
	static int count8( int n );
	static int fibonacci( int n );
	static int powerN( int base, int n );
	static int countX( string str );
};