#include "pch.h"
#include "Primes.h"

namespace Algorithms
{
	Primes::Primes()
	{
		int i;

		for( i = 2; i < N; i++ )
			A[ i ] = 1;

		for( i = 2; i < N; i++ )
		{
			if( A[ i ] )
				for( int j = i; j * i < N; j++ )
					A[ i * j ] = 0;

			for( i = 2; i < N; i++ )
				if( A[ i ] )
					std::cout << " " << i;

			std::cout << std::endl;
		}
	}

	bool Primes::is_prime( int n )
	{
		return A[ n ];
	}

	Primes::~Primes()
	{
	}
}