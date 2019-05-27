#include "pch.h"

#include <gmock/gmock-matchers.h>

using namespace std;

using namespace testing;

namespace ArrayTests
{
	class InsertionSortTests :
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

	TEST_F(InsertionSortTests, TestInvalidFile)
	{
	}

	TEST_F(InsertionSortTests, TestBadOp)
	{
	}
}
