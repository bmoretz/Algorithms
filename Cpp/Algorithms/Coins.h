#pragma once

#include <iostream>
#include <stdlib.h>

namespace Algorithms
{
	class Coins
	{
	public:
		Coins();

		int heads();
		void flip( int coins, int trials );

		~Coins();
	};
}