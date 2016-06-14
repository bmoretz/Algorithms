#pragma once

#include "stdafx.h"

#include <map>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

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

	void move( tower & source, tower & aux, tower & dest );

private:
	map<int, tower> towers;
	
	disk pop_top( tower & tower );
	disk peek_top( tower tower );

	void push_front( tower & tower, disk disk );

	int max_disk_size;
	int moves;

	map<int,string> display_towers( map<int,tower> tower );
};