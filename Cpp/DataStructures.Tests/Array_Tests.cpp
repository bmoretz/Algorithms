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

	TEST_F( ArrayTests, equal )
	{
		Array<int> arr1 = { 0, 1, 2, 3, 4}, arr2 = { 0, 1, 2, 3, 4 };

		EXPECT_TRUE( arr1 == arr2 );
	}

	TEST_F( ArrayTests, merge_into )
	{
		Array<int> arr1 = { 0, 1, 2, 3, 4 }, arr2 = { 5, 6, 7, 8, 9 };

		arr1.merge( arr2 );

		Array<int> expected = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		EXPECT_TRUE( arr1 == expected );
	}

	TEST_F( ArrayTests, merge_into_2 )
	{
		Array<int> arr1 = { 0, 2, 4, 6, 8 }, arr2 = { 1, 3, 5, 7, 9 };

		arr1.merge( arr2 );

		Array<int> expected = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		EXPECT_TRUE( arr1 == expected );
	}

	TEST_F( ArrayTests, swap )
	{
		Array<int> arr = { 78, 12, 47, 55, 61, 6, 99, 84, 32, 10 };

		arr.swap(0, 9);

		Array<int> expected = { 10, 12, 47, 55, 61, 6, 99, 84, 32, 78 };

		EXPECT_TRUE( arr == expected );
	}

	TEST_F( ArrayTests, selection_sort )
	{
		Array<int> arr = { 78, 12, 47, 55, 61, 6, 99, 84, 32, 10 };

		arr.sort();

		Array<int> expected = { 6, 10, 12, 32, 47, 55, 61, 78, 84, 99 };

		EXPECT_TRUE( arr == expected );
	}

	TEST_F( ArrayTests, insert_at )
	{
		Array<int> arr( 10 );

		arr.insert_at( 5, 10 );

		Array<int> expected = { 0, 0, 0, 0, 0, 10, 0, 0, 0, 0 };

		EXPECT_TRUE( arr == expected );
	}

	TEST_F( ArrayTests, element_at )
	{
		Array<int> arr( 10 );
		int expected = 10, pos = 5;

		arr.insert_at( pos, expected );

		EXPECT_EQ( arr.element_at( pos ), expected );
	}

	TEST_F( ArrayTests, reverse )
	{
		Array<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		arr.reverse();

		auto test = arr.to_string();

		Array<int> expected = { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

		EXPECT_TRUE( arr == expected );
	}
}