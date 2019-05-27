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
		{
		}

		void TearDown() override
		{
		}
	};

	// Also covers get_value_at().
	TEST_F(LinkedListTests, push_front)
	{
		LinkedList<int> int_list;

		EXPECT_EQ(int_list.length(), 0);

		int_list.push_front(1);
		EXPECT_EQ(int_list.length(), 1);
		EXPECT_EQ(int_list.get_value_at(0), 1);

		int_list.push_front(2);
		EXPECT_EQ(int_list.length(), 2);
		EXPECT_EQ(int_list.get_value_at(0), 2);
		EXPECT_EQ(int_list.get_value_at(1), 1);

		int_list.push_front(3);
		EXPECT_EQ(int_list.length(), 3);
		EXPECT_EQ(int_list.get_value_at(0), 3);
		EXPECT_EQ(int_list.get_value_at(1), 2);
		EXPECT_EQ(int_list.get_value_at(2), 1);
	}

	TEST_F(LinkedListTests, push_back_head_equals_tail)
	{
		LinkedList<int> int_list;

		EXPECT_EQ(int_list.length(), 0);

		int_list.push_back(1);

		EXPECT_EQ(int_list.length(), 1);

		EXPECT_EQ(int_list.first()->data, 1);
		EXPECT_EQ(int_list.last()->data, 1);

		EXPECT_TRUE(int_list.first() == int_list.last());
	}

	TEST_F(LinkedListTests, insert_at_head)
	{
		LinkedList<int> int_list;
		int_list.push_back(1);
		int_list.push_back(2);
		int_list.push_back(3);

		// Insert at the head of the list (list before is "1 2 3", after is "0 1 2 3").
		int_list.insert_at(0, 0);

		EXPECT_EQ(int_list.length(), 4);
		EXPECT_EQ(int_list.get_value_at(0), 0);
		EXPECT_EQ(int_list.get_value_at(1), 1);
	}

	TEST_F(LinkedListTests, push_back)
	{
		LinkedList<int> int_list;

		int_list.push_back(1);
		EXPECT_EQ(int_list.length(), 1);
		EXPECT_EQ(int_list.get_value_at(0), 1);

		int_list.push_back(2);
		EXPECT_EQ(int_list.length(), 2);
		EXPECT_EQ(int_list.get_value_at(0), 1);
		EXPECT_EQ(int_list.get_value_at(1), 2);

		int_list.push_back(3);
		EXPECT_EQ(int_list.length(), 3);
		EXPECT_EQ(int_list.get_value_at(0), 1);
		EXPECT_EQ(int_list.get_value_at(1), 2);
		EXPECT_EQ(int_list.get_value_at(2), 3);
	}

	TEST_F(LinkedListTests, )
	{
	}
}
