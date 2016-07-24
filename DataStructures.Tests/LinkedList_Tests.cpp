#include "stdafx.h"
#include "CppUnitTest.h"
#include "LinkedList.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace DataStructuresTests
{		
	TEST_CLASS(LinkedListTests)
	{
	public:
		
		TEST_METHOD( Test_InsertFront )
		{
		}

		TEST_METHOD( Test_InsertBeg )
		{
			LinkedList list;

			const int items = 10;

			Assert::AreEqual( size_t( 0 ), list.length(), L"factorial 1 -> 1", LINE_INFO() );
	
			for( int index = 0; index < items; index++ )
			{
				list.insertBeg( index );
			}

			Assert::AreEqual( size_t( items ), list.length(), L"Ensure Length", LINE_INFO() );
			Assert::AreEqual( items - 1, list.first()->data, L"First = (N-1)", LINE_INFO() );
		}
	};
}