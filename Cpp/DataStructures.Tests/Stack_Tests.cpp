#include "pch.h"

#include <gmock/gmock-matchers.h>
#include <Stack.h>
#include <Search.h>

using namespace std;
using namespace testing;

using namespace DataStructures;

namespace StackTests
{
	class StackTests :
		public Test
	{
	protected:

		void SetUp() override
		{}

		void TearDown() override
		{}
	};

	TEST_F( StackTests, initialize )
	{
		Stack<int> s();

	}
}