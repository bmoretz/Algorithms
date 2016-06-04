#pragma once

#include "stdafx.h"

class UnionFind
{
public:
	UnionFind( int size );

	~UnionFind();

	void join( int l, int r );
	bool connected( int l, int r );
	void display();

private:
	bool valid( int l, int r );
	int *values;
	int max;
};

