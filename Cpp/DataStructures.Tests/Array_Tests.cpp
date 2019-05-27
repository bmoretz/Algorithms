#include "pch.h"

#include <gmock/gmock-matchers.h>
#include <Array.h>

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
		{
		}

		void TearDown() override
		{
		}
	};

	TEST_F(ArrayTests, initialize)
	{
		Array<int> arr(10);

		EXPECT_EQ(arr.size(), 10);
	}

	TEST_F(ArrayTests, initialize_inline)
	{
		Array<int> arr = { 0, 1, 2, 3, 4, 5 };

		EXPECT_EQ(arr.get_value_at(0), 10);
	}
}