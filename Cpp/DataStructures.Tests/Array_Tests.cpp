#include "pch.h"

#include <gmock/gmock-matchers.h>
#include <Array.h>
#include <Search.h>

using namespace std;
using namespace testing;

using namespace DataStructures;

namespace ArrayTests
{
	class ArrayTests :
		public Test
	{
	protected:

		void SetUp() override
		{}

		void TearDown() override
		{}
	};

	TEST_F( ArrayTests, initialize )
	{
		Array<int> arr( 10 );

		EXPECT_EQ( arr.size(), 10 );

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 0 );
		EXPECT_EQ( arr[ 2 ], 0 );
		EXPECT_EQ( arr[ 3 ], 0 );
		EXPECT_EQ( arr[ 4 ], 0 );
		EXPECT_EQ( arr[ 5 ], 0 );
		EXPECT_EQ( arr[ 6 ], 0 );
		EXPECT_EQ( arr[ 7 ], 0 );
		EXPECT_EQ( arr[ 8 ], 0 );
		EXPECT_EQ( arr[ 9 ], 0 );
	}

	TEST_F( ArrayTests, initialize_init_list )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );
	}

	TEST_F( ArrayTests, initialize_size_values )
	{
		int values[ 5 ] = { 0, 1, 2, 3, 4 };
		Array<int> arr( 5, values );

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );
	}

	TEST_F( ArrayTests, copy_constructor )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );

		Array<int> arr2(arr);

		EXPECT_EQ( arr2[ 0 ], 0 );
		EXPECT_EQ( arr2[ 1 ], 1 );
		EXPECT_EQ( arr2[ 2 ], 2 );
		EXPECT_EQ( arr2[ 3 ], 3 );
		EXPECT_EQ( arr2[ 4 ], 4 );
	}

	TEST_F( ArrayTests, copy_constructor_two )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );

		Array<int> arr2 = arr;

		EXPECT_EQ( arr2[ 0 ], 0 );
		EXPECT_EQ( arr2[ 1 ], 1 );
		EXPECT_EQ( arr2[ 2 ], 2 );
		EXPECT_EQ( arr2[ 3 ], 3 );
		EXPECT_EQ( arr2[ 4 ], 4 );
	}

	TEST_F( ArrayTests, copy_assignment )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );

		Array<int> arr2 = { 5, 6, 7, 8, 9 };

		EXPECT_EQ( arr2[ 0 ], 5 );
		EXPECT_EQ( arr2[ 1 ], 6 );
		EXPECT_EQ( arr2[ 2 ], 7 );
		EXPECT_EQ( arr2[ 3 ], 8 );
		EXPECT_EQ( arr2[ 4 ], 9 );

		arr = arr2;

		EXPECT_EQ( arr[ 0 ], 5 );
		EXPECT_EQ( arr[ 1 ], 6 );
		EXPECT_EQ( arr[ 2 ], 7 );
		EXPECT_EQ( arr[ 3 ], 8 );
		EXPECT_EQ( arr[ 4 ], 9 );
	}

	TEST_F( ArrayTests, assignment_init_list )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		EXPECT_EQ( arr[ 0 ], 0 );
		EXPECT_EQ( arr[ 1 ], 1 );
		EXPECT_EQ( arr[ 2 ], 2 );
		EXPECT_EQ( arr[ 3 ], 3 );
		EXPECT_EQ( arr[ 4 ], 4 );

		arr = { 5, 6, 7, 8, 9 };

		EXPECT_EQ( arr[ 0 ], 5 );
		EXPECT_EQ( arr[ 1 ], 6 );
		EXPECT_EQ( arr[ 2 ], 7 );
		EXPECT_EQ( arr[ 3 ], 8 );
		EXPECT_EQ( arr[ 4 ], 9 );
	}

	TEST_F( ArrayTests, iterate )
	{
		Array<int> arr = { 0, 1, 2, 3, 4 };

		int index = 0;
		for( auto val : arr )
		{
			EXPECT_EQ( val, index++ );
		}
	}

	TEST_F( ArrayTests, to_string )
	{
		Array<int> arr = { 0, 1, 2 };

		const string expected = "{i:0,v:0}{i:1,v:1}{i:2,v:2}\n";

		EXPECT_EQ( expected, arr.to_string() );
	}

	TEST_F( ArrayTests, linear_search_found )
	{
		Array<int> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		auto found = linear_search( arr.begin(), arr.end(), 9 );

		EXPECT_EQ( found, true );
	}

	TEST_F( ArrayTests, linear_search_empty )
	{
		Array<int> arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		auto found = linear_search( arr.begin(), arr.end(), 10 );

		EXPECT_EQ( found, false );
	}
}