#include "stdafx.h"
#include "LinkedList.h"

using namespace DataStructures;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace LinkedList_Tests
{
	TEST_CLASS( LinkedListTests )
	{
	public:

		// Also covers get_value_at().
		TEST_METHOD( LinkedList_push_front )
		{
			LinkedList<int> int_list;

			Assert::AreEqual<size_t>( int_list.length(), 0 );

			int_list.push_front( 1 );
			Assert::AreEqual<size_t>( int_list.length(), 1 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 1 );
			
			int_list.push_front( 2 );
			Assert::AreEqual<size_t>( int_list.length(), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 1 );

			int_list.push_front( 3 );
			Assert::AreEqual<size_t>( int_list.length(), 3 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 3 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 2 ), 1 );
		}

		TEST_METHOD( LinkedList_push_back_head_equals_tail )
		{
			LinkedList<int> int_list;

			Assert::AreEqual<size_t>( int_list.length(), 0 );

			int_list.push_back( 1 );
			
			Assert::AreEqual<size_t>( int_list.length(), 1 );
			
			Assert::AreEqual<int>( int_list.first()->data, 1 );
			Assert::AreEqual<int>( int_list.last()->data, 1 );

			Assert::IsTrue( int_list.first() == int_list.last() );
		}

		TEST_METHOD( LinkedList_push_front_head_equals_tail )
		{
			LinkedList<int> int_list;

			Assert::AreEqual<size_t>( int_list.length(), 0 );

			int_list.push_front( 1 );
			
			Assert::AreEqual<size_t>( int_list.length(), 1 );
			
			Assert::AreEqual<int>( int_list.first()->data, 1 );
			Assert::AreEqual<int>( int_list.last()->data, 1 );

			Assert::IsTrue( int_list.first() == int_list.last() );
		}

		TEST_METHOD( LinkedList_push_back )
		{
			LinkedList<int> int_list;

			int_list.push_back( 1 );
			Assert::AreEqual<size_t>( int_list.length(), 1 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 1 );

			int_list.push_back( 2 );
			Assert::AreEqual<size_t>( int_list.length(), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 1 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 2 );

			int_list.push_back( 3 );
			Assert::AreEqual<size_t>( int_list.length(), 3 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 1 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 2 ), 3 );
		}

		TEST_METHOD( LinkedList_insert_at_head )
		{
			LinkedList<int> int_list;
			int_list.push_back( 1 );
			int_list.push_back( 2 );
			int_list.push_back( 3 );

			// Insert at the head of the list (list before is "1 2 3", after is "0 1 2 3").
			int_list.insert_at( 0, 0 );

			Assert::AreEqual<size_t>( int_list.length(), 4 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 0 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 1 );
		}

		TEST_METHOD( LinkedList_insert_at_middle )
		{
			LinkedList<int> int_list;
			int_list.push_back( 1 );
			int_list.push_back( 2 );
			int_list.push_back( 3 );

			// Insert at the head of the list (list before is "1 2 3", after is "1 0 2 3").
			int_list.insert_at( 1, 0 );
			Assert::AreEqual<size_t>( int_list.length(), 4 );
			Assert::AreEqual<int>( int_list.get_value_at( 0 ), 1 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 0 );
			Assert::AreEqual<int>( int_list.get_value_at( 2 ), 2 );
		}

		TEST_METHOD( LinkedList_insert_at_one_before_tail )
		{
			LinkedList<int> int_list;
			int_list.push_back( 1 );
			int_list.push_back( 2 );
			int_list.push_back( 3 );

			// Insert at the head of the list (list before is "1 2 3", after is "1 2 0 3").
			int_list.insert_at( 2, 0 );
			Assert::AreEqual<size_t>( int_list.length(), 4 );
			Assert::AreEqual<int>( int_list.get_value_at( 1 ), 2 );
			Assert::AreEqual<int>( int_list.get_value_at( 2 ), 0 );
			Assert::AreEqual<int>( int_list.get_value_at( 3 ), 3 );
		}

		TEST_METHOD( LinkedList_insert_at_tail )
		{
			LinkedList<int> int_list;
			int_list.push_back( 1 );
			int_list.push_back( 2 );
			int_list.push_back( 3 );

			// Insert at the head of the list (list before is "1 2 3", after is "1 2 3 0").
			int_list.insert_at( 3, 0 );
			Assert::AreEqual<size_t>( int_list.length(), 4 );
			Assert::AreEqual<int>( int_list.get_value_at( 2 ), 3 );
			Assert::AreEqual<int>( int_list.get_value_at( 3 ), 0 );
		}

		TEST_METHOD( LinkedList_push_front_another_list )
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

			Assert::AreEqual<size_t>( dest.length(), 6 );

			Assert::AreEqual<int>( dest.get_value_at( 0 ), 7 );
			Assert::AreEqual<int>( dest.get_value_at( 1 ), 8 );
			Assert::AreEqual<int>( dest.get_value_at( 2 ), 9 );
			Assert::AreEqual<int>( dest.get_value_at( 3 ), 1 );
		}

		TEST_METHOD( LinkedList_push_back_another_list )
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

			Assert::AreEqual<size_t>( dest.length(), 6 );

			Assert::AreEqual<int>( dest.get_value_at( 2 ), 3 );
			Assert::AreEqual<int>( dest.get_value_at( 3 ), 7 );
			Assert::AreEqual<int>( dest.get_value_at( 4 ), 8 );
			Assert::AreEqual<int>( dest.get_value_at( 5 ), 9 );

			Assert::AreEqual<int>( dest.last()->data, 9 );
		}

		TEST_METHOD( LinkedList_insert_another_list_at_head )
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

			Assert::AreEqual<size_t>( dest.length(), 6 );
			Assert::AreEqual<int>( dest.get_value_at( 0 ), 7 );
			Assert::AreEqual<int>( dest.get_value_at( 1 ), 8 );
			Assert::AreEqual<int>( dest.get_value_at( 2 ), 9 );
			Assert::AreEqual<int>( dest.get_value_at( 3 ), 1 );
		}

		TEST_METHOD( LinkedList_insert_another_list_at_position )
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

			Assert::AreEqual<size_t>( dest.length(), 6 );

			Assert::AreEqual<int>( dest.get_value_at( 0 ) ,1 );
			Assert::AreEqual<int>( dest.get_value_at( 1 ), 7 );
			Assert::AreEqual<int>( dest.get_value_at( 2 ), 8 );
			Assert::AreEqual<int>( dest.get_value_at( 3 ), 9 );
			Assert::AreEqual<int>( dest.get_value_at( 4 ), 2 );
		}

		TEST_METHOD( LinkedList_insert_another_list_at_tail )
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

			Assert::AreEqual<size_t>( dest.length(), 6 );
			Assert::AreEqual<int>( dest.get_value_at( 2 ), 3 );
			Assert::AreEqual<int>( dest.get_value_at( 3 ), 7 );
			Assert::AreEqual<int>( dest.get_value_at( 4 ), 8 );
			Assert::AreEqual<int>( dest.get_value_at( 5 ), 9 );
		}
	};
}