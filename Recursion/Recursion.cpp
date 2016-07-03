#include "stdafx.h"
#include "Recursion.h"

Recursion::Recursion() { }

Recursion::~Recursion() { }

// Given n of 1 or more, return the factorial of n, which is n * ( n - 1 ) * ( n - 2 ) ... 1.
// Compute the result recursively( without loops ).
int Recursion::factorial( int number )
{
	return number == 0 ? 
		1 : number * factorial( number - 1 );
}

// The fibonacci sequence is a famous bit of mathematics, and it happens to have a recursive definition.
// The first two values in the sequence are 0 and 1 ( essentially 2 base cases ).
// Each subsequent value is the sum of the previous two values, so the whole sequence is : 0, 1, 1, 2, 3, 5, 8, 13, 21 and so on.
int Recursion::fibonacci( int n )
{
	if( n == 0 )
		return 0;

	if( n == 1 )
		return 1;

	return fibonacci( n - 1 ) + fibonacci( n - 2 );
}

// We have a number of bunnies and each bunny has two big floppy ears. 
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
int Recursion::bunnyEars( int bunnies ) 
{
	if( bunnies == 0 )
		return 0;

	return 2 + bunnyEars( bunnies - 1 );
}

// We have bunnies standing in a line, numbered 1, 2, ... 
// The odd bunnies( 1, 3, .. ) have the normal 2 ears. The even bunnies( 2, 4, .. ) 
// we'll say have 3 ears, because they each have a raised foot. Recursively return the number of "ears" 
// in the bunny line 1, 2, ... n ( without loops or multiplication ).
int Recursion::bunnyEars2( int bunnies )
{
	if( bunnies == 0 )
		return 0;

	if( bunnies % 2 == 1 )
		return 2 + bunnyEars2( bunnies - 1 );
	
	return 3 + bunnyEars2( bunnies - 1 );
}

// print the counting numbers to 0 from n.
int Recursion::count_down( int from )
{
	cout << from << " ";

	return from == 1 ?
		0 : count_down( from - 1 );
}

// We have triangle made of blocks. The topmost row has 1 block, the next row down has 2 blocks, the next row has 3 blocks, and so on.
// Compute recursively (no loops or multiplication) the total number of blocks in such a triangle with the given number of rows.
int Recursion::triangle( int rows )
{
	if( rows == 0 )
		return 0;

	return rows + triangle( rows - 1 );
}

// Given a non-negative int n, return the sum of its digits recursively (no loops).
int Recursion::sumDigits( int n )
{
	if( n <= 0 )
		return 0;

	return ( n % 10 ) + sumDigits( n / 10 );
}

// Given a non - negative int n, return the count of the occurrences of 7 as a digit, so for example 717 yields 2. ( no loops ).
int Recursion::count7( int n )
{
	if( n == 0 )
		return 0;

	return n % 10 == 7 ?
		1 + count7( n / 10 ) : 
		count7( n / 10 )
	;
}

// Given a non - negative int n, compute recursively( no loops ) the count of the occurrences of 8 as a digit, 
// except that an 8 with another 8 immediately to its left counts double, so 8818 yields 4. ( no loops )
int Recursion::count8( int n )
{
	if( n <= 0 )
		return 0;

	if( n % 100 == 88 )
		return 2 + count8( n / 10 );

	if( n % 10 == 8 )
		return 1 + count8( n / 10 );

	return count8( n / 10 );
}


//  Given base and n that are both 1 or more, compute recursively( no loops )
// the value of base to the n power, so powerN( 3, 2 ) is 9 ( 3 squared ).
int Recursion::powerN( int base, int n )
{
	if( n == 1 )
		return base;

	return base * powerN( base, n - 1 );
}

// Given a string, compute recursively( no loops ) the number of lowercase 'x' chars in the string
int Recursion::countX( string str )
{
	if( str.length() == 0 )
		return 0;
	
	string next = str.substr( 1, str.length() );

	return str.at( 0 ) == L'x' ?
		1 + countX( next ) : countX(  next );
}

// Given a string, compute recursively( no loops ) a new string where all the lowercase 'x' chars have been changed to 'y' chars.
string Recursion::changeXY( string str )
{
	if( str.empty() )
		return str;

	string c = string( 1, str.at( str.length() - 1 ) );

	return changeXY( str.substr( 0, str.length() - 1 ) ) + ( c == "x" ? "y" : c );
}

// Given a string, compute recursively( no loops ) the number of times lowercase "hi" appears in the string.
int Recursion::countHi( string str )
{
	if( str.empty() )
		return 0;

	string iter = str.substr( 1 );

	return countHi( iter ) + ( str.compare( 0, 2, "hi" ) == 0 ? 1 : 0 );
}

// Given a string, compute recursively( no loops ) a new string where all appearances of "pi" have been replaced by "3.14".
string Recursion::changePi( string str )
{
	if( str.empty() )
		return str;

	string next = str.substr( 1 );

	return ( str.compare( 0, 2, "pi" ) == 0 ?
		( "3.14" + changePi( next.substr( 1 ) ) ) :
		( str.substr( 0, 1 ) + changePi( next ) )
	);
}

// Given a string, compute recursively a new string where all the 'x' chars have been removed.
string Recursion::noX( string str )
{
	if( str.empty() )
		return str;

	return ( str.compare( 0, 1, "x" ) == 0 ) ?
		( noX( str.substr( 1 ) ) ) : ( str.substr( 0, 1 ) + noX( str.substr( 1 ) ) );
}

// Given an array of ints, compute recursively if the array contains a 6.
bool Recursion::array6( array<int, 10> nums, int index )
{
	if( nums.size() == index )
		return false;

	if( nums.at( index ) == 6 )
		return true;

	return array6( nums, ++index );
}

// Given an array of ints, compute recursively the number of times that the value 11 appears in the array. 
int Recursion::array11( array<int, 10> nums, int index )
{
	if( nums.size() == index )
		return false;

	return ( nums.at( index ) == 11 ? 1 : 0 ) + array11( nums, ++index );
}

// Given an array of ints, compute recursively if the array contains somewhere a value followed in the array by that value times 10.
bool Recursion::array220( int nums[], int size, int index )
{
	if( index >= ( size - 1 ) )
		return false;

	if( ( nums[ index ] * 10 ) == nums[ index + 1 ] )
		return true;

	return array220( nums, size, ++index );
}

// Given a string, compute recursively a new string where all the adjacent chars are now separated by a "*"
string Recursion::allStar( string str )
{
	if( str.empty() )
		return str;

	string iter = str.substr( 1 );

	return str.substr( 0, 1 ) + ( iter.length() == 0 ? "" : "*" ) + allStar( iter );
}

// Given a string, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".
string Recursion::pairStar( string str )
{
	if( str.empty() )
		return str;

	string iter = str.substr( 1 );
	string token = str.substr( 0, 1 );

	return token + ( iter.length() > 0 ? iter.compare( 0, 1, token ) == 0 ? "*" : "" : "" ) + pairStar( iter );
}

string Recursion::endX( string str )
{
	if( str.empty() )
		return str;

	string iter = str.substr( 1 );
	string token = str.substr( 0, 1 );

	return ( token.compare( 0, 1, "x" ) == 0  ) ? 
		( endX( iter ) + token ) : ( token + endX( iter ) );
}

// We'll say that a "pair" in a string is two instances of a char separated by a char. So "AxA" the A's make a pair. Pair's can overlap, so "AxAxA" contains 3 pairs -- 2 for A and 1 for x. 
int Recursion::countPairs( string str )
{
	if( str.empty() )
		return 0;

	string iter = str.substr( 1 );
	string token = str.substr( 0, 1 );

	return ( str.length() > 2 ) ?
		( iter.compare( 1, 1, token ) == 0 ) ?
			( 1 + countPairs( iter ) ) : countPairs( iter ) :
				countPairs( iter );
}

// Count recursively the total number of "abc" and "aba" substrings that appear in the given string.
int Recursion::countAbc( string str )
{
	if( str.empty() || str.length() <= 2 )
		return 0;

	if( str.compare( 0, 3, "abc" ) == 0 || str.compare( 0, 3, "aba" ) == 0 )
		return 1 + countAbc( str.substr( 1 ) );

	return countAbc( str.substr( 1 ) );
}

// Given a string, compute recursively (no loops) the number of "11" substrings in the string. The "11" substrings should not overlap.
int Recursion::count11( string str )
{
	if( str.empty() || str.length() <= 1 )
		return 0;

	string token = str.substr( 0, 1 );
	string iter = str.substr( 1 );
	
	return ( token.at( 0 ) == L'1' && iter.at( 0 ) == L'1' ) ?
		1 + count11( iter.substr( 1 ) ) : count11( iter );
}

// Given a string, return recursively a "cleaned" string where adjacent chars that are the same have been reduced to a single char. So "yyzzza" yields "yza".
string Recursion::stringClean( string str )
{
	if( str.empty() || str.length() <= 1 )
		return str;
	
	string iter = str.substr( 1 );
	string token = str.substr( 0, 1 );

	return ( token.at( 0 ) == iter.at( 0 ) ) ?
		stringClean( iter ) : token + stringClean( iter );
}

// Given a string, compute recursively the number of times lowercase "hi" appears in the string, however do not count "hi" that have an 'x' immedately before them.
int Recursion::countHi2( string str )
{
	if( str.length() == 0 )
		return 0;

	int pos = str.find( "hi", 0 );

	if( pos == 0 || ( pos > 0 && str.at( pos - 1 ) != 'x' ) )
		return 1 + countHi2( str.substr( pos + 1 ) );

	return countHi2( str.substr( pos == -1 ? str.length() : pos + 1 ) );
}

// Given a string that contains a single pair of parenthesis, compute recursively a new string made of only of the parenthesis and their contents, so "xyz(abc)123" yields "(abc)".
string Recursion::parenBit( string str )
{
	if( str.empty() || ( str.length() >= 1 && str.at( 0 ) == '(' && str.at( str.length() - 1 ) == ')' ) )
		return str;

	return parenBit( str.substr( str.at( 0 ) == '(' ? 0 : 1, str.at( str.length() - 1 ) == ')' ? str.length() : str.length() - 1 ) );
}

// Given a string, return true if it is a nesting of zero or more pairs of parenthesis, like "(())" or "((()))". Suggestion: check the first and last chars, and then recur on what's inside them.
bool Recursion::nestParen( string str )
{
	if( str.empty() )
		return true;

	if( str.length() >= 2 )
		return ( str.at( 0 ) == '(' && str.at( str.length() - 1 ) == ')' ) && 
			nestParen( str.substr( 1, str.length() - 2 ) );

	return false;
}