#pragma once

#include "stdafx.h"

#include <array>
#include <algorithm>
#include <vector>
#include <string>
#include <map>

using namespace std;

namespace Hanoi
{

#define TOWER_COUNT 3

	struct disk
	{
	public:
		disk();
		disk( int width );

		bool operator < ( const disk & r );
		bool operator > ( const disk & r );

		~disk();

		int width;
	};

	typedef vector<disk> tower;

	class hanoi
	{
	public:
		hanoi( int disks );
		~hanoi();

		void print();
		void solve();

		void move( int disks, tower & source, tower & aux, tower & dest );

	private:
		array<tower, TOWER_COUNT> towers;

		void swap_top( tower & source, tower & dest );

		int max_disk_size;
		int moves;

		map<int, string> display_towers( array<tower, TOWER_COUNT> tower );
	};
}