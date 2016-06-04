#include "stdafx.h"
#include "UnionFind.h"

UnionFind::UnionFind( int size )
{
	max = size;
	values = new int[ size ];

	for( int index = 0; index < size; index++ )
		values[ index ] = index;
}

UnionFind::~UnionFind()
{
	if( values != nullptr )
		delete[] values;
}

void UnionFind::join( int l, int r )
{
	if( valid( l, r ) )
	{
		int rValue = values[ r ];
		int lValue = values[ l ];
		
		for( int index = 0; index < max; index++ )
		{
			if( values[ index ] == lValue )
				values[ index ] = rValue;
		}
	}
}

bool UnionFind::connected( int l, int r )
{
	bool connected = false;

	if( valid( l, r ) )
	{
		connected = values[l] == r;
	}

	return connected;
}

bool UnionFind::valid( int l, int r )
{
	if( !( l > max || l < 0 || r > max || r < 0 ) )
	{
		return true;
	}

	return false;
}

void UnionFind::display()
{
	for( int inner = 0; inner < max; inner++ )
	{
		std::cout << values[ inner ];
	}

	std::cout << std::endl;
}