#include "stdafx.h"
#include <boost/test/unit_test.hpp>
#include "LinkedList.h"

BOOST_AUTO_TEST_SUITE( Unit_Test_Suite )

// Also covers get_value_at().
BOOST_AUTO_TEST_CASE( Test_push_front )
{
	LinkedList<int> int_list;
	BOOST_CHECK( int_list.length() == 0 );

	int_list.push_front( 1 );
	BOOST_CHECK( int_list.length() == 1 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 1 );

	int_list.push_front( 2 );
	BOOST_CHECK( int_list.length() == 2 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 2 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 1 );

	int_list.push_front( 3 );
	BOOST_CHECK( int_list.length() == 3 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 3 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 2 );
	BOOST_CHECK( int_list.get_value_at( 2 ) == 1 );
}

BOOST_AUTO_TEST_CASE( Test_push_back )
{
	LinkedList<int> int_list;

	int_list.push_back( 1 );
	BOOST_CHECK( int_list.length() == 1 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 1 );

	int_list.push_back( 2 );
	BOOST_CHECK( int_list.length() == 2 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 1 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 2 );

	int_list.push_back( 3 );
	BOOST_CHECK( int_list.length() == 3 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 1 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 2 );
	BOOST_CHECK( int_list.get_value_at( 2 ) == 3 );
}

BOOST_AUTO_TEST_CASE( Test_insert_at_head )
{
	LinkedList<int> int_list;
	int_list.push_back( 1 );
	int_list.push_back( 2 );
	int_list.push_back( 3 );

	// Insert at the head of the list (list before is "1 2 3", after is "0 1 2 3").
	int_list.insert_at( 0, 0 );
	BOOST_CHECK( int_list.length() == 4 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 0 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 1 );
}

BOOST_AUTO_TEST_CASE( Test_insert_at_middle )
{
	LinkedList<int> int_list;
	int_list.push_back( 1 );
	int_list.push_back( 2 );
	int_list.push_back( 3 );

	// Insert at the head of the list (list before is "1 2 3", after is "1 0 2 3").
	int_list.insert_at( 1, 0 );
	BOOST_CHECK( int_list.length() == 4 );
	BOOST_CHECK( int_list.get_value_at( 0 ) == 1 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 0 );
	BOOST_CHECK( int_list.get_value_at( 2 ) == 2 );
}

BOOST_AUTO_TEST_CASE( Test_insert_at_one_before_tail )
{
	LinkedList<int> int_list;
	int_list.push_back( 1 );
	int_list.push_back( 2 );
	int_list.push_back( 3 );

	// Insert at the head of the list (list before is "1 2 3", after is "1 2 0 3").
	int_list.insert_at( 2, 0 );
	BOOST_CHECK( int_list.length() == 4 );
	BOOST_CHECK( int_list.get_value_at( 1 ) == 2 );
	BOOST_CHECK( int_list.get_value_at( 2 ) == 0 );
	BOOST_CHECK( int_list.get_value_at( 3 ) == 3 );
}

BOOST_AUTO_TEST_CASE( Test_insert_at_tail )
{
	LinkedList<int> int_list;
	int_list.push_back( 1 );
	int_list.push_back( 2 );
	int_list.push_back( 3 );

	// Insert at the head of the list (list before is "1 2 3", after is "1 2 3 0").
	int_list.insert_at( 3, 0 );
	BOOST_CHECK( int_list.length() == 4 );
	BOOST_CHECK( int_list.get_value_at( 2 ) == 3 );
	BOOST_CHECK( int_list.get_value_at( 3 ) == 0 );
}

BOOST_AUTO_TEST_CASE( Testp_push_front_another_list )
{
	LinkedList<int> dest;
	dest.push_back( 1 );
	dest.push_back( 2 );
	dest.push_back( 3 );
	LinkedList<int> source;
	source.push_back( 7 );
	source.push_back( 8 );
	source.push_back( 9 );
	//dest.push_front( source );

	BOOST_CHECK( dest.length() == 6 );
	BOOST_CHECK( dest.get_value_at( 0 ) == 7 );
	BOOST_CHECK( dest.get_value_at( 1 ) == 8 );
	BOOST_CHECK( dest.get_value_at( 2 ) == 9 );
	BOOST_CHECK( dest.get_value_at( 3 ) == 1 );
}

BOOST_AUTO_TEST_CASE( Testp_push_back_another_list )
{
	LinkedList<int> dest;
	dest.push_back( 1 );
	dest.push_back( 2 );
	dest.push_back( 3 );
	LinkedList<int> source;
	source.push_back( 7 );
	source.push_back( 8 );
	source.push_back( 9 );
	//dest.push_back( source );

	BOOST_CHECK( dest.length() == 6 );
	BOOST_CHECK( dest.get_value_at( 2 ) == 3 );
	BOOST_CHECK( dest.get_value_at( 3 ) == 7 );
	BOOST_CHECK( dest.get_value_at( 4 ) == 8 );
	BOOST_CHECK( dest.get_value_at( 5 ) == 9 );
}

BOOST_AUTO_TEST_CASE( Test_insert_another_list_at_head )
{
	LinkedList<int> dest;
	dest.push_back( 1 );
	dest.push_back( 2 );
	dest.push_back( 3 );
	LinkedList<int> source;
	source.push_back( 7 );
	source.push_back( 8 );
	source.push_back( 9 );
	//dest.insert_at( 0, source );

	BOOST_CHECK( dest.length() == 6 );
	BOOST_CHECK( dest.get_value_at( 0 ) == 7 );
	BOOST_CHECK( dest.get_value_at( 1 ) == 8 );
	BOOST_CHECK( dest.get_value_at( 2 ) == 9 );
	BOOST_CHECK( dest.get_value_at( 3 ) == 1 );
}

BOOST_AUTO_TEST_CASE( Test_insert_another_list_at_position )
{
	LinkedList<int> dest;
	dest.push_back( 1 );
	dest.push_back( 2 );
	dest.push_back( 3 );
	LinkedList<int> source;
	source.push_back( 7 );
	source.push_back( 8 );
	source.push_back( 9 );
	//dest.insert_at( 1, source );

	BOOST_CHECK( dest.length() == 6 );
	BOOST_CHECK( dest.get_value_at( 0 ) == 1 );
	BOOST_CHECK( dest.get_value_at( 1 ) == 7 );
	BOOST_CHECK( dest.get_value_at( 2 ) == 8 );
	BOOST_CHECK( dest.get_value_at( 3 ) == 9 );
	BOOST_CHECK( dest.get_value_at( 4 ) == 2 );
}

BOOST_AUTO_TEST_CASE( Test_insert_another_list_at_tail )
{
	LinkedList<int> dest;
	dest.push_back( 1 );
	dest.push_back( 2 );
	dest.push_back( 3 );

	LinkedList<int> source;

	source.push_back( 7 );
	source.push_back( 8 );
	source.push_back( 9 );
	//dest.insert_at( 3, source );

	BOOST_CHECK( dest.length() == 6 );
	BOOST_CHECK( dest.get_value_at( 2 ) == 3 );
	BOOST_CHECK( dest.get_value_at( 3 ) == 7 );
	BOOST_CHECK( dest.get_value_at( 4 ) == 8 );
	BOOST_CHECK( dest.get_value_at( 5 ) == 9 );
}

BOOST_AUTO_TEST_SUITE_END()
