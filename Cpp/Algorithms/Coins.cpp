#include "pch.h"
#include "Coins.h"

namespace Algorithms
{
	Coins::Coins()
	{
	}

	int Coins::heads()
	{
		return rand() < RAND_MAX / 2;
	}

	void Coins::flip( int coins, int trials )
	{
		int i, j, cnt;
		int *f = new int[ trials + 1 ];
		
		for( j = 0; j <= trials; j++ )
			f[ j ] = 0;

		for( i = 0; i < trials; i++, f[ cnt ]++ )
		{
			for( cnt = 0, j = 0; j <= coins; j++ )
			{
				if( heads() ) cnt++;
			}
		}

		for( j = 0; j <= coins; j++ )
		{
			if( f[ j ] == 0 )
				std::cout << ".";
			for( i = 0; i < f[ j ]; i += 10 )
				std::cout << "*";

			std::cout << std::endl;
		}
	}

	Coins::~Coins()
	{
	}
}