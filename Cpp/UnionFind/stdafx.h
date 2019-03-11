// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <iostream>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "UnionFind.h"

using std::cout;	using std::cin;
using std::string;

std::vector<string> &split( const string input, char delim, std::vector<string> &output );