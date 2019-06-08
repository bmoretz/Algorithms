// Algorithms.UI.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include "LinkedList.h"
#include <time.h>
#include <stdlib.h>

#include "Primes.h"
#include "Coins.h"

using namespace std;
using namespace Algorithms;

void exec_list();
void flip_coins();
void init_matrix();
void qsort();
void array_test();

int cmp_function( const void * a, const void * b )
{
	return ( *( int * )a - *( int * )b );
}

int main()
{
	

	string empty;
	cin >> empty;

    return 0;
}

void qsort()
{
	int a[] = { 1, 5, 9, 30, 20, 12, 20 };
	int n = sizeof( a ) / sizeof( a[ 0 ] );
	qsort( ( int * )a, n, sizeof( int ), cmp_function );
	for( int i = 0; i < n; i++ )
		printf( "%d ", a[ i ] );
}

void init_matrix()
{
	const int dim = 9;
	int matrix[ dim ][ dim ];
	const int n = dim * dim;
	int a[ n ];
	srand( time( 0 ) );

	for( int i = 0; i < n; i++ )
	{
		a[ i ] = rand() % ( 2 * n );
		int row_num = i / dim;
		int col_num = i % dim;
		matrix[ row_num ][ col_num ] = a[ i ];
		printf( "i = %d, row = %d, col = %d, element = %d\n", i,
			row_num, col_num, a[ i ] );
	}
}

void flip_coins()
{
	int coins, trials;

	cout << "Enter the number of coins:";
	cin >> coins;
	cout << "Enter the number of trials:";
	cin >> trials;

	cout << "Distribution:" << endl;

	Coins c;
	c.flip( coins, trials );
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