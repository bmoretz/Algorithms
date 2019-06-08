#pragma once

namespace Algorithms
{
	class Sort
	{
	public:
		Sort();
		~Sort();

		template<typename T>
		T * insertion_sort( T * values, size_t len );

		template<typename T>
		void swap( T *, size_t, size_t );
	};

	template<typename T>
	T * Sort::insertion_sort( T * values, size_t len )
	{
		if( len < 2 )
			return values;

		for( auto i = 0; i < len; i++ )
		{
			int j = i + 1, min = i;

			while( j < len )
			{
				if( values[ j ] < values[ min ] )
					min = j;
				j++;
			}

			if( min != i )
				swap( values, i, min );
		}

		return T();
	}

	template<typename T>
	void Sort::swap( T * values, size_t l, size_t r )
	{
		T tmp = values[ l ];
		values[ l ] = values[ r ];
		values[ r ] = tmp;
	}
}