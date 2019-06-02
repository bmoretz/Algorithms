#include "pch.h"

#include <gmock/gmock-matchers.h>
#include <LinkedList.h>

using namespace std;
using namespace testing;

using namespace DataStructures;

namespace LinkedListTests
{
	class LinkedListTests :
		public Test
	{
	protected:

		void SetUp() override
		{}

		void TearDown() override
		{}
	};

	// Also covers get_value_at().
	TEST_F( LinkedListTests, push_front )
	{
		LinkedList<int> int_list;

		EXPECT_EQ( int_list.length(), 0 );

		int_list.push_front( 1 );
		EXPECT_EQ( int_list.length(), 1 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 1 );

		int_list.push_front( 2 );
		EXPECT_EQ( int_list.length(), 2 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 2 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 1 );

		int_list.push_front( 3 );
		EXPECT_EQ( int_list.length(), 3 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 3 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 2 );
		EXPECT_EQ( int_list.get_value_at( 2 ), 1 );
	}

	TEST_F( LinkedListTests, push_back_head_equals_tail )
	{
		LinkedList<int> int_list;

		EXPECT_EQ( int_list.length(), 0 );

		int_list.push_back( 1 );

		EXPECT_EQ( int_list.length(), 1 );

		EXPECT_EQ( int_list.first()->data, 1 );
		EXPECT_EQ( int_list.last()->data, 1 );

		EXPECT_TRUE( int_list.first() == int_list.last() );
	}

	TEST_F( LinkedListTests, insert_at_head )
	{
		LinkedList<int> int_list;
		int_list.push_back( 1 );
		int_list.push_back( 2 );
		int_list.push_back( 3 );

		// Insert at the head of the list (list before is "1 2 3", after is "0 1 2 3").
		int_list.insert_at( 0, 0 );

		EXPECT_EQ( int_list.length(), 4 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 0 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 1 );
	}

	TEST_F( LinkedListTests, push_back )
	{
		LinkedList<int> int_list;

		int_list.push_back( 1 );
		EXPECT_EQ( int_list.length(), 1 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 1 );

		int_list.push_back( 2 );
		EXPECT_EQ( int_list.length(), 2 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 1 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 2 );

		int_list.push_back( 3 );
		EXPECT_EQ( int_list.length(), 3 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 1 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 2 );
		EXPECT_EQ( int_list.get_value_at( 2 ), 3 );
	}

	TEST_F( LinkedListTests, insert_at_middle )
	{
		LinkedList<int> int_list;
		int_list.push_back( 1 );
		int_list.push_back( 2 );
		int_list.push_back( 3 );

		// Insert at the head of the list (list before is "1 2 3", after is "1 0 2 3").
		int_list.insert_at( 1, 0 );
		EXPECT_EQ( int_list.length(), 4 );
		EXPECT_EQ( int_list.get_value_at( 0 ), 1 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 0 );
		EXPECT_EQ( int_list.get_value_at( 2 ), 2 );
	}

	TEST_F( LinkedListTests, insert_at_one_before_tail )
	{
		LinkedList<int> int_list;
		int_list.push_back( 1 );
		int_list.push_back( 2 );
		int_list.push_back( 3 );

		// Insert at the head of the list (list before is "1 2 3", after is "1 2 0 3").
		int_list.insert_at( 2, 0 );
		EXPECT_EQ( int_list.length(), 4 );
		EXPECT_EQ( int_list.get_value_at( 1 ), 2 );
		EXPECT_EQ( int_list.get_value_at( 2 ), 0 );
		EXPECT_EQ( int_list.get_value_at( 3 ), 3 );
	}

	TEST_F( LinkedListTests, insert_at_tail )
	{
		LinkedList<int> int_list;
		int_list.push_back( 1 );
		int_list.push_back( 2 );
		int_list.push_back( 3 );

		// Insert at the head of the list (list before is "1 2 3", after is "1 2 3 0").
		int_list.insert_at( 3, 0 );
		EXPECT_EQ( int_list.length(), 4 );
		EXPECT_EQ( int_list.get_value_at( 2 ), 3 );
		EXPECT_EQ( int_list.get_value_at( 3 ), 0 );
	}

	TEST_F( LinkedListTests, push_front_another_list )
	{
		LinkedList<int> dest;
		dest.push_back( 1 );
		dest.push_back( 2 );
		dest.push_back( 3 );

		LinkedList<int> source;
		source.push_back( 7 );
		source.push_back( 8 );
		source.push_back( 9 );

		dest.push_front( source );

		EXPECT_EQ( dest.length(), 6 );

		EXPECT_EQ( dest.get_value_at( 0 ), 7 );
		EXPECT_EQ( dest.get_value_at( 1 ), 8 );
		EXPECT_EQ( dest.get_value_at( 2 ), 9 );
		EXPECT_EQ( dest.get_value_at( 3 ), 1 );
	}

	TEST_F( LinkedListTests, push_back_another_list )
	{
		LinkedList<int> dest;
		dest.push_back( 1 );
		dest.push_back( 2 );
		dest.push_back( 3 );

		LinkedList<int> source;
		source.push_back( 7 );
		source.push_back( 8 );
		source.push_back( 9 );

		dest.push_back( source );

		EXPECT_EQ( dest.length(), 6 );

		EXPECT_EQ( dest.get_value_at( 2 ), 3 );
		EXPECT_EQ( dest.get_value_at( 3 ), 7 );
		EXPECT_EQ( dest.get_value_at( 4 ), 8 );
		EXPECT_EQ( dest.get_value_at( 5 ), 9 );

		EXPECT_EQ( dest.last()->data, 9 );
	}

	TEST_F( LinkedListTests, insert_another_list_at_head )
	{
		LinkedList<int> dest;
		dest.push_back( 1 );
		dest.push_back( 2 );
		dest.push_back( 3 );

		LinkedList<int> source;
		source.push_back( 7 );
		source.push_back( 8 );
		source.push_back( 9 );

		dest.insert_at( 0, source );

		EXPECT_EQ( dest.length(), 6 );
		EXPECT_EQ( dest.get_value_at( 0 ), 7 );
		EXPECT_EQ( dest.get_value_at( 1 ), 8 );
		EXPECT_EQ( dest.get_value_at( 2 ), 9 );
		EXPECT_EQ( dest.get_value_at( 3 ), 1 );
	}

	TEST_F( LinkedListTests, insert_another_list_at_position )
	{
		LinkedList<int> dest;
		dest.push_back( 1 );
		dest.push_back( 2 );
		dest.push_back( 3 );

		LinkedList<int> source;
		source.push_back( 7 );
		source.push_back( 8 );
		source.push_back( 9 );

		dest.insert_at( 1, source );

		EXPECT_EQ( dest.length(), 6 );

		EXPECT_EQ( dest.get_value_at( 0 ), 1 );
		EXPECT_EQ( dest.get_value_at( 1 ), 7 );
		EXPECT_EQ( dest.get_value_at( 2 ), 8 );
		EXPECT_EQ( dest.get_value_at( 3 ), 9 );
		EXPECT_EQ( dest.get_value_at( 4 ), 2 );
	}

	TEST_F( LinkedListTests, insert_another_list_at_tail )
	{
		LinkedList<int> dest;
		dest.push_back( 1 );
		dest.push_back( 2 );
		dest.push_back( 3 );

		LinkedList<int> source;

		source.push_back( 7 );
		source.push_back( 8 );
		source.push_back( 9 );

		dest.insert_at( 3, source );

		EXPECT_EQ( dest.length(), 6 );
		EXPECT_EQ( dest.get_value_at( 2 ), 3 );
		EXPECT_EQ( dest.get_value_at( 3 ), 7 );
		EXPECT_EQ( dest.get_value_at( 4 ), 8 );
		EXPECT_EQ( dest.get_value_at( 5 ), 9 );
	}

	TEST_F( LinkedListTests, empty_push_back )
	{
		LinkedList<int> dest;
		LinkedList<int> source;

		dest.push_back( source );

		EXPECT_EQ( dest.length(), 0 );
	}

	TEST_F( LinkedListTests, empty_push_front )
	{
		LinkedList<int> dest;
		LinkedList<int> source;

		dest.push_front( source );

		EXPECT_EQ( dest.length(), 0 );
	}

	TEST_F( LinkedListTests, equals )
	{
		LinkedList<int> left;

		left.push_back( 1 );
		left.push_back( 2 );
		left.push_back( 3 );

		LinkedList<int> right;

		right.push_back( 1 );
		right.push_back( 2 );
		right.push_back( 3 );

		EXPECT_TRUE( left == right );
	}

	TEST_F( LinkedListTests, init_list )
	{
		LinkedList<int> list = { 0, 1, 2, 3, 4 };
		
		const int expected_len = 5;

		EXPECT_EQ( list.length(), expected_len );

		for( int index = 0; index < expected_len; index++ )
		{
			EXPECT_EQ( list.get_value_at( index ), index );
		}
	}

	TEST_F( LinkedListTests, concat )
	{
		LinkedList<int> front = { 0, 1, 2, 3, 4 };
		LinkedList<int> back = { 5, 6, 7, 8, 9 };

		LinkedList<int> expected = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		EXPECT_TRUE( front + back == expected );
	}
}