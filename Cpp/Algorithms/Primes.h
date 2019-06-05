#pragma once

#include <iostream>

namespace Algorithms {

	class Primes
	{
	public:

		static const int N = 1000;
		int A[ N ] = { 0 };

		explicit Primes();

		bool is_prime( int n );

		~Primes();
	};

}