#pragma once

namespace Algorithms
{
	class Sort
	{
	public:
		Sort();
		~Sort();

		template<typename T>
		void insertion_sort( T * values, size_t len );

		template<typename T>
		void insertion_sort_1( T * values, size_t len );

		template<typename T>
		void quick_sort( T *, size_t, size_t );

		template<typename T>
		void swap( T *, T * );

		template<typename T>
		size_t partition( T[], size_t, size_t );
	};

	template<typename T>
	void Sort::insertion_sort( T * values, size_t len )
	{
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
				swap( &values[ i ], &values[ min ] );
		}
	}

	template<typename T>
	inline void Sort::insertion_sort_1( T * values, size_t len )
	{
		for( size_t i = 1; i < len; ++i )
		{
			int j = i;

			int curr_item = values[ j ];
			while( j >= 0 && values[ j - 1 ] > curr_item )
			{
				values[ j ] = values[ j - 1 ];
				--j;
			}

			values[ j ] = curr_item;
		}
	}

	template<typename T>
	inline void Sort::quick_sort( T * values, size_t start, size_t end )
	{
		if( start < end )
		{
			size_t pivot = partition( values, start, end );
			quick_sort( values, start, pivot - 1 );
			quick_sort( values, pivot + 1, end );
		}
	}

	template<typename T>
	void Sort::swap( T * l, T * r )
	{
		T tmp = *l;
		*l = *r;
		*r = tmp;
	}

	template<typename T>
	inline size_t Sort::partition( T values[], size_t start, size_t end )
	{
		size_t pivot = start;

		while( start < end )
		{
			while( values[ start ] <= values[ pivot ] )
				start++;
			while( values[ end ] > values[ pivot ] )
				end--;

			if( start < end )
				swap( &values[ start ], &values[ end ] );
		}

		swap( &values[ end ], &values[ pivot ] );
		pivot = end;

		return pivot;
	}
}