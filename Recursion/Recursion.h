#pragma once

#include "stdafx.h"

#include <string>
#include <array>

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
	static int countHi( string str );
	static string changeXY( string str );
	static string changePi( string str );
	static string noX( string str );
	static bool array6( array<int, 10> nums, int index );
	static int array11( array<int, 10> nums, int index );
	static bool array220( int nums[], int size, int index );
	static string allStar( string str );
	static string pairStar( string str );
	static string endX( string str );
	static int countPairs( string str );
	static int countAbc( string str );
	static int count11( string str );
	static string stringClean( string str );
	static int countHi2( string str );
};