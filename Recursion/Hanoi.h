#pragma once

#include "stdafx.h"

#include <array>
#include <vector>
#include <map>

using namespace std;

namespace Hanoi
{

#define TOWER_COUNT 3

	struct disk
	{
		disk();
		explicit disk( int width );

		bool operator < ( const disk & r ) const;
		bool operator > ( const disk & r ) const;

		~disk();

		int width;
	};

	typedef vector<disk> tower;

	class hanoi
	{
	public:
		explicit hanoi( int disks );
		~hanoi();

		void print() const;
		void solve();

		void move( int disks, tower & source, tower & aux, tower & dest );

	private:
		array<tower, TOWER_COUNT> towers;

		void swap_top( tower & source, tower & dest );

		int max_disk_size;
		int moves;

		map<int, string> display_towers( array<tower, TOWER_COUNT> tower ) const;
	};
}