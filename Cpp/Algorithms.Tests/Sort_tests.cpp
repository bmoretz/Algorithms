#include "pch.h"

#include "pch.h"
#include "Sort.h"

using namespace std;
using namespace testing;

using namespace Algorithms;

namespace SortTests
{
	class SortTests :
		public Test
	{
	protected:

		void SetUp() override
		{}

		void TearDown() override
		{}
	};

	TEST_F( SortTests, swap )
	{
		int values[] = { 0, 29, 24, 16, 3, 3, 3, 29, 27, 16 };

		Sort s;

		s.swap( &values[0], &values[5] );

		EXPECT_TRUE( values[ 0 ] == 3 );
		EXPECT_TRUE( values[ 5 ] == 0 );
	}

	TEST_F( SortTests, insertion_sort )
	{
		int values[] = { 0, 29, 24, 16, 3, 3, 3, 29, 27, 16 };

		Sort s;

		auto len = sizeof( values ) / sizeof( *values );
		s.insertion_sort( values, len );

		int expected[] = { 0, 3, 3, 3, 16, 16, 24, 27, 29, 29 };

		bool equal = true;

		for( size_t index = 0; index < len; index++ )
			equal = values[ index ] == expected[ index ];

		EXPECT_TRUE( equal );
	}

	TEST_F( SortTests, insertion_sort_1 )
	{
		int values[] = { 0, 29, 24, 16, 3, 3, 3, 29, 27, 16 };

		Sort s;

		auto len = sizeof( values ) / sizeof( *values );
		s.insertion_sort_1( values, len );

		int expected[] = { 0, 3, 3, 3, 16, 16, 24, 27, 29, 29 };

		bool equal = true;

		for( size_t index = 0; index < len; index++ )
			equal = values[ index ] == expected[ index ];

		EXPECT_TRUE( equal );
	}

	TEST_F( SortTests, quick_sort )
	{
		int values[] = { 0, 29, 24, 16, 3, 3, 3, 29, 27, 16 };

		Sort s;

		auto len = sizeof( values ) / sizeof( *values );
		s.quick_sort( values, 0, len - 1 );

		int expected[] = { 0, 3, 3, 3, 16, 16, 24, 27, 29, 29 };

		bool equal = true;

		for( size_t index = 0; index < len; index++ )
			equal = values[ index ] == expected[ index ];

		EXPECT_TRUE( equal );
	}
}