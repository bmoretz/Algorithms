#include "stdafx.h"
#include "UnionFind.h"

UnionFind::UnionFind( int size )
{
    max = size;
    values = new int[ size ];

    for( auto index = 0; index < size; index++ )
        values[ index ] = index;
}

UnionFind::~UnionFind()
{
    if( values != nullptr )
        delete[] values;
}

void UnionFind::join( int l, int r ) const
{
    if( valid( l, r ) )
    {
        auto rValue = values[ r ];
        auto lValue = values[ l ];

        for( auto index = 0; index < max; index++ )
        {
            if( values[ index ] == lValue )
                values[ index ] = rValue;
        }
    }
}

bool UnionFind::connected( int l, int r ) const
{
    auto connected = false;

    if( valid( l, r ) )
    {
        connected = values[ l ] == r;
    }

    return connected;
}

bool UnionFind::valid( int l, int r ) const
{
    if( !( l > max || l < 0 || r > max || r < 0 ) )
    {
        return true;
    }

    return false;
}

void UnionFind::display() const
{
    for( auto inner = 0; inner < max; inner++ )
    {
        std::cout << values[ inner ];
    }

    cout << std::endl;
}
