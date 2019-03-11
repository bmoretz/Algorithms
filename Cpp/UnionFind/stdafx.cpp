// stdafx.cpp : source file that includes just the standard includes
// UnionFind.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file

std::vector<string>& split( const string input, char delim, std::vector<string> &output )
{
    std::istringstream ss( input );
    string line;

    while( getline( ss, line, delim ) )
    {
        output.push_back( line );
    }

    return output;
}
