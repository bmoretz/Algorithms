#include "stdafx.h"
#include "Hanoi.h"

disk::disk()
	: width{ 0 }
{ }

disk::disk( int n )
{
	width = n;
}

bool disk::operator < ( const disk & r )
{
	return width < r.width || r.width == 0;
}

bool disk::operator > ( const disk & r )
{
	return r.width > width;
}

disk::~disk() { }

hanoi::hanoi( int disk_count )
{
	moves = 0, max_disk_size = disk_count;

	tower initial( disk_count );
	generate_n( initial.begin(), disk_count, [] () { static int index{ 1 }; return disk( index++ ); } );

	towers[ 0 ] = initial;

	for( auto current = 1; current < TOWER_COUNT; current++ )
	{
		towers[ current ] = tower();
	}
}

hanoi::~hanoi() { }

void hanoi::solve()
{
	move( towers.at( 0 ), towers.at( 1 ), towers.at( 2 ) );
}

void hanoi::move( tower & source, tower & aux, tower & dest )
{
	print();

	if( source.empty() )
		return;

	moves++;

	auto 
		src_top = peek_top( source ),
		dest_top = peek_top( dest ),
		aux_top = peek_top( aux );

	if( src_top < dest_top )
	{	
		push_front( dest, pop_top( source ) );

		move( source, dest, aux );
	}
	else if( src_top < aux_top )
	{
 		push_front( aux, pop_top( source ) );

		move( aux, dest, source );
	}
}

void hanoi::push_front( tower & tower, disk disk )
{
	tower.insert( tower.begin(), disk );
}

disk hanoi::peek_top( tower tower )
{
	if( tower.empty() )
		return disk();

	return tower[ 0 ];
}

disk hanoi::pop_top( tower& tower )
{
	if( tower.empty() )
		return disk();

	disk result;
	
	result = tower[ 0 ];

	tower.erase( tower.begin() );

	return result;
}

void hanoi::print()
{
	vector<string> display( towers.size() );

	for( auto row : display_towers( towers ) )
	{
		cout << row.second << endl;
	}

	cout << endl;
}

map<int, string> hanoi::display_towers( map<int, tower> towers )
{
	map<int, string> out;

	for( auto tower : towers )
	{
		int paddingRows = max_disk_size - tower.second.size();

		for( auto row = 0; row < max_disk_size; row++ )
		{
			int spaces, width;
			
			if( row < paddingRows )
			{
				width = 0, spaces = max_disk_size + 1;
			}
			else
			{
				auto disk = tower.second.at( row - paddingRows );
				width = disk.width;
				spaces = max_disk_size - disk.width + 1;
			}

			out[ row ] = out[ row ] + string( width, '*' ) + string( spaces, ' ' );
		}
	}

	return out;
}