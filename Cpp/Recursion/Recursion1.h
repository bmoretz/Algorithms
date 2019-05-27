#pragma once

#include "pch.h"

using namespace std;

namespace Recursion1
{
	int count_down( int from );

	int factorial( int number );
	int fibonacci( int n );
	int bunnyEars( int bunnies );
	int bunnyEars2( int bunnies );
	int triangle( int rows );
	int sumDigits( int n );
	int count7( int n );
	int count8( int n );
	int powerN( int base, int n );
	int countX( string str );
	int countHi( string str );
	string changeXY( string str );
	string changePi( string str );
	string noX( string str );
	bool array6( array<int, 10> nums, int index );
	int array11( array<int, 10> nums, int index );
	bool array220( int nums[], int size, int index );
	string allStar( string str );
	string pairStar( string str );
	string endX( string str );
	int countPairs( string str );
	int countAbc( string str );
	int count11( string str );
	string stringClean( string str );
	int countHi2( string str );
	string parenBit( string str );
	bool nestParen( string str );
	int strCount( string str, string sub );
	bool strCopies( string str, string sub, int n );
	int strDist( string str, string sub );
};