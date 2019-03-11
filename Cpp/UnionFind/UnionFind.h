#pragma once

#include "stdafx.h"

class UnionFind
{
public:
	UnionFind( int size );

	~UnionFind();

	void join( int l, int r ) const;
	bool connected( int l, int r ) const;
	void display() const;

private:
	bool valid( int l, int r ) const;
	int *values;
	int max;
};

