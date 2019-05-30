#pragma once

namespace DataStructures
{
	template<typename ForwardIt, typename Value>
	bool linear_search( ForwardIt first, ForwardIt last, Value value )
	{
		for( auto it = first; it != last; it++ )
		{
			if( *it == value )
				return true;
		}

		return false;
	}
}