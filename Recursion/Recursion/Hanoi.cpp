#include "pch.h"
#include "Hanoi.h"

namespace Hanoi
{
	disk::disk()
		: width{ 0 }
	{ }

	disk::disk( int n )
	{
		width = n;
	}

	bool disk::operator < ( const disk & r ) const
	{
		return width < r.width || r.width == 0;
	}

	bool disk::operator > ( const disk & r ) const
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
		move( max_disk_size, towers.at( 0 ), towers.at( 1 ), towers.at( 2 ) );
	}

	bool is_ordered( tower const & tower )
	{
		if( tower.size() <= 1 )
			return true;

		for( int index = 1; index < tower.size(); index++ )
		{
			if( tower[ index ].width < tower[ index - 1 ].width )
				return false;
		}

		return true;
	}

	void hanoi::move( int disks, tower & source, tower & aux, tower & dest )
	{
		if( disks == 0 )
			return;

		move( disks - 1, source, dest, aux );

		swap_top( source, dest );

		move( disks - 1, aux, source, dest );
	}

	void hanoi::swap_top( tower & s, tower & d )
	{
		cout << "move: " << moves << endl;
		cout << "Before Swap: " << endl << endl;

		moves++;

		print();

		if( !s.empty() )
			d.insert( d.begin(), s[ 0 ] );

		if( s.size() > 0 )
			s.erase( s.begin() );

		cout << "After Swap: " << endl << endl;
		print();
	}

	void hanoi::print() const
	{
		vector<string> display( towers.size() );

		for( auto row : display_towers( towers ) )
		{
			cout << row.second << endl;
		}

		cout << endl;
	}

	map<int, string> hanoi::display_towers( array<tower, TOWER_COUNT> towers ) const
	{
		map<int, string> out;

		for( auto index = 0; index < towers.size(); index++ )
		{
			auto tower = towers[ index ];

			int paddingRows = max_disk_size - tower.size();

			for( auto row = 0; row < max_disk_size; row++ )
			{
				int spaces, width;

				if( row < paddingRows )
				{
					width = 0, spaces = max_disk_size + 1;
				}
				else
				{
					auto disk = tower.at( row - paddingRows );
					width = disk.width;
					spaces = max_disk_size - disk.width + 1;
				}

				out[ row ] = out[ row ] + string( width, '*' ) + string( spaces, ' ' );
			}

			out[ max_disk_size ] += std::to_string( index + 1 ) + string( max_disk_size, ' ' );
		}

		return out;
	}
}