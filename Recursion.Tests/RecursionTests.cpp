#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "Recursion.h"

namespace RecursionTests
{		
	TEST_CLASS(RecursionTests)
	{
	public:
		
		TEST_METHOD( Test_factorial )
		{
			Assert::AreEqual( Recursion::factorial( 1 ), 1, L"factorial 1 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 2 ), 2, L"factorial 2 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 3 ), 6, L"factorial 3 -> 6", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 4 ), 24, L"factorial 4 -> 24", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 5 ), 120, L"factorial 5 -> 120", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 6 ), 720, L"factorial 6 -> 720", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 7 ), 5040, L"factorial 7 -> 5040", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 8 ), 40320, L"factorial 8 -> 40320", LINE_INFO() );
			Assert::AreEqual( Recursion::factorial( 12 ), 479001600, L"factorial 12 -> 479001600", LINE_INFO() );
		}

		TEST_METHOD( Test_bunnyears )
		{
			Assert::AreEqual( Recursion::bunnyEars( 0 ), 0, L"bunnyears 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 1 ), 2, L"bunnyears 1 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 2 ), 4, L"bunnyears 2 -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 3 ), 6, L"bunnyears 3 -> 6", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 4 ), 8, L"bunnyears 4 -> 8", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 5 ), 10, L"bunnyears 5 -> 10", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 12 ), 24, L"bunnyears 12 -> 24", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 50 ), 100, L"bunnyears 50 -> 100", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars( 234 ), 468, L"bunnyears 234 -> 468", LINE_INFO() );
		}

		TEST_METHOD( Test_fibonacci )
		{
			Assert::AreEqual( Recursion::fibonacci( 0 ), 0, L"fibonacci 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 1 ), 1, L"fibonacci 1 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 2 ), 1, L"fibonacci 2 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 3 ), 2, L"fibonacci 3 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 4 ), 3, L"fibonacci 4 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 5 ), 5, L"fibonacci 5 -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 6 ), 8, L"fibonacci 6 -> 8", LINE_INFO() );
			Assert::AreEqual( Recursion::fibonacci( 7 ), 13, L"fibonacci 7 -> 13", LINE_INFO() );
		}

		TEST_METHOD( Test_bunnyEars2 )
		{
			Assert::AreEqual( Recursion::bunnyEars2( 0 ), 0, L"bunnyEars2 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 1 ), 2, L"bunnyEars2 1 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 2 ), 5, L"bunnyEars2 2 -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 3 ), 7, L"bunnyEars2 3 -> 7", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 4 ), 10, L"bunnyEars2 4 -> 10", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 5 ), 12, L"bunnyEars2 5 -> 12", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 6 ), 15, L"bunnyEars2 6 -> 15", LINE_INFO() );
			Assert::AreEqual( Recursion::bunnyEars2( 10 ), 25, L"bunnyEars2 10 -> 25", LINE_INFO() );
		}

		TEST_METHOD( Test_triangle )
		{
			Assert::AreEqual( Recursion::triangle( 0 ), 0, L"triangle 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 1 ), 1, L"triangle 1 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 2 ), 3, L"triangle 2 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 3 ), 6, L"triangle 3 -> 6", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 4 ), 10, L"triangle 4 -> 10", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 5 ), 15, L"triangle 5 -> 15", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 6 ), 21, L"triangle 6 -> 21", LINE_INFO() );
			Assert::AreEqual( Recursion::triangle( 7 ), 28, L"triangle 7 -> 28", LINE_INFO() );
		}

		TEST_METHOD( Test_sumDigits )
		{
			Assert::AreEqual( Recursion::sumDigits( 126 ), 9, L"sumDigits 126 -> 9", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 49 ), 13, L"sumDigits 49 -> 13", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 12 ), 3, L"sumDigits 12 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 10 ), 1, L"sumDigits 10 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 1 ), 1, L"sumDigits 1 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 0 ), 0, L"sumDigits 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 730 ), 10, L"sumDigits 730 -> 10", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 1111 ), 4, L"sumDigits 1111 -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 11111 ), 5, L"sumDigits 11111 -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 10110 ), 3, L"sumDigits 10110 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::sumDigits( 235 ), 10, L"sumDigits 235 -> 10", LINE_INFO() );
		}

		TEST_METHOD( Test_count7 )
		{
			Assert::AreEqual( Recursion::count7( 717 ), 2, L"count7  717  -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 7 ), 1, L"count7  7  -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 123 ), 0, L"count7  123  -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 77 ), 2, L"count7  77  -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 7123 ), 1, L"count7  7123  -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 771237 ), 3, L"count7  771237  -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 771737 ), 4, L"count7  771737  -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 47571 ), 2, L"count7  47571  -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 777777 ), 6, L"count7  777777  -> 6", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 70701277 ), 4, L"count7  70701277  -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 777576197 ), 5, L"count7  777576197  -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 99999 ), 0, L"count7  99999  -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count7( 99799 ), 1, L"count7  99799  -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_count8 )
		{
			Assert::AreEqual( Recursion::count8( 8 ), 1, L"count8  8 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 818 ), 2, L"count8  818 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 8818 ), 4, L"count8  8818 -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 8088 ), 4, L"count8  8088 -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 123 ), 0, L"count8 123 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 81238 ), 2, L"count8 81238 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 88788 ), 6, L"count8 88788 -> 6", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 8234 ), 1, L"count8 8234 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 2348 ), 1, L"count8 2348 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 23884 ), 3, L"count8 23884 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 0 ), 0, L"count8 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 1818188 ), 5, L"count8 1818188 -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 8818181 ), 5, L"count8 8818181 -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 1080 ), 1, L"count8 1080 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 188 ), 3, L"count8 188 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 88888 ), 9, L"count8 88888 -> 9", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 9898 ), 2, L"count8 9898 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count8( 78 ), 1, L"count8 78 -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_powerN )
		{
			Assert::AreEqual( Recursion::powerN( 3, 1 ), 3, L"powerN 3, 1 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 3, 2 ), 9, L"powerN 3, 2 -> 9", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 3, 3 ), 27, L"powerN 3, 3 -> 27", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 2, 1 ), 2, L"powerN 2, 1 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 2, 2 ), 4, L"powerN 2, 2 -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 2, 3 ), 8, L"powerN 2, 3 -> 8", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 2, 4 ), 16, L"powerN 2, 4 -> 16", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 2, 5 ), 32, L"powerN 2, 5 -> 32", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 10, 1 ), 10, L"powerN 10, 1 -> 10", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 10, 2 ), 100, L"powerN 10, 2 -> 100", LINE_INFO() );
			Assert::AreEqual( Recursion::powerN( 10, 3 ), 1000, L"powerN 10, 3 -> 1000", LINE_INFO() );
		}

		TEST_METHOD( Test_countX )
		{
			Assert::AreEqual( Recursion::countX( "xxhixx" ), 4, L"countX xxhixx -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "xhixhix" ), 3, L"countX xhixhix -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "hi" ), 0, L"countX hi -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "h" ), 0, L"countX h -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "x" ), 1, L"countX -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "" ), 0, L"countX -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "hihi" ), 0, L"countX hihi -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countX( "hiAAhi12hi" ), 0, L"countX hiAAhi12hi -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_countHi )
		{
			Assert::AreEqual( Recursion::countHi( "xxhixx" ), 1, L"countHi xxhixx -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "xhixhix" ), 2, L"countHi xhixhix -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "hi" ), 1, L"countHi hi -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "hihih" ), 2, L"countHi hihih -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "h" ), 0, L"countHi h -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "" ), 0, L"countHi "" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "ihihihihih" ), 4, L"countHi ihihihihih -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "ihihihihihi" ), 5, L"countHi ihihihihihi -> 5", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "hiAAhi12hi" ), 3, L"countHi hiAAhi12hi -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "xhixhxihihhhih" ), 3, L"countHi xhixhxihihhhih -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi( "ship" ), 1, L"countHi ship -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_noX )
		{
			Assert::AreEqual( Recursion::noX( "xaxb" ).c_str(), "ab", L"noX 'xaxb' -> 'ab'", LINE_INFO() );
			Assert::AreEqual( Recursion::noX( "abc" ).c_str(), "abc", L"noX 'abc' -> 'abc'", LINE_INFO() );
			Assert::AreEqual( Recursion::noX( "xx" ).c_str(), "", L"noX 'xx' -> ''", LINE_INFO() );
			Assert::AreEqual( Recursion::noX( "" ).c_str(), "", L"noX '' -> ''", LINE_INFO() );
			Assert::AreEqual( Recursion::noX( "axxbxx" ).c_str(), "ab", L"noX 'axxbxx' -> 'ab'", LINE_INFO() );
			Assert::AreEqual( Recursion::noX( "Hellox" ).c_str(), "Hello", L"noX 'Hellox' -> 'Hello'", LINE_INFO() );
		}

		TEST_METHOD( Test_changePi )
		{
			Assert::AreEqual( Recursion::changePi( "xpix" ).c_str(), "x3.14x", L"changePi xpix -> x3.14x", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "pipi" ).c_str(), "3.143.14", L"changePi pipi -> 3.143.14", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "pip" ).c_str(), "3.14p", L"changePi pip -> 3.14p", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "pi" ).c_str(), "3.14", L"changePi pi -> 3.14", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "hip" ).c_str(), "hip", L"changePi hip -> hip", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "p" ).c_str(), "p", L"changePi p -> p", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "x" ).c_str(), "x", L"changePi x -> x", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "" ).c_str(), "", L"changePi  -> ", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "pixx" ).c_str(), "3.14xx", L"changePi pixx -> 3.14xx", LINE_INFO() );
			Assert::AreEqual( Recursion::changePi( "xyzzy" ).c_str(), "xyzzy", L"changePi xyzzy -> xyzzy", LINE_INFO() );
		}

		TEST_METHOD( test_array6 )
		{
			Assert::AreEqual( Recursion::array6( { 1, 6, 4 }, 0 ), true, L"array6 [1, 6, 4], 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 1, 4 }, 0 ), false, L"array6 [1, 4], 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 6 }, 0 ), true, L"array6 [6], 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { }, 0 ), false, L"array6 [], 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 6, 2, 2 }, 0 ), true, L"array6 [6, 2, 2], 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 2, 5 }, 0 ), false, L"array6 [2, 5], 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 1, 9, 4, 6, 6 }, 0 ), true, L"array6 [1, 9, 4, 6, 6], 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array6( { 2, 5, 6 }, 0 ), true, L"array6 [2, 5, 6], 0 -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_array11 )
		{
			Assert::AreEqual( Recursion::array11( { 1, 2, 11 }, 0 ), 1, L"array11 [1, 2, 11], 0 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 11, 11 }, 0 ), 2, L"array11 [11, 11], 0 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 1, 2, 3, 4 }, 0 ), 0, L"array11 [1, 2, 3, 4], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 1, 11, 3, 11, 11 }, 0 ), 3, L"array11 [1, 11, 3, 11, 11], 0 -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 11 }, 0 ), 1, L"array11 [11], 0 -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 1 }, 0 ), 0, L"array11 [1], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { }, 0 ), 0, L"array11 [], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 11, 2, 3, 4, 11, 5 }, 0 ), 2, L"array11 [11, 2, 3, 4, 11, 5], 0 -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::array11( { 11, 5, 11 }, 0 ), 2, L"array11 [11, 5, 11], 0 -> 2", LINE_INFO() );
		}

		TEST_METHOD( Test_array220 )
		{
			Assert::AreEqual( Recursion::array220( { 1, 2, 20 }, 0 ), true, L"array220 {1, 2, 20}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 3, 30 }, 0 ), true, L"array220 {3, 30}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 3 }, 0 ), false, L"array220 {3}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { }, 0 ), false, L"array220 {}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 3, 3, 30, 4 }, 0 ), true, L"array220 {3, 3, 30, 4}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 2, 19, 4 }, 0 ), false, L"array220 {2, 19, 4}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 20, 2, 21 }, 0 ), false, L"array220 {20, 2, 21}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 20, 2, 21, 210 }, 0 ), true, L"array220 {20, 2, 21, 210}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 2, 200, 2000 }, 0 ), true, L"array220 {2, 200, 2000}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 0, 0 }, 0 ), true, L"array220 {0, 0}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 1, 2, 3, 4, 5, 6 }, 0 ), false, L"array220 {1, 2, 3, 4, 5, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 1, 2, 3, 4, 5, 50, 6 }, 0 ), true, L"array220 {1, 2, 3, 4, 5, 50, 6}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 1, 2, 3, 4, 5, 51, 6 }, 0 ), false, L"array220 {1, 2, 3, 4, 5, 51, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( { 1, 2, 3, 4, 4, 50, 500, 6 }, 0 ), true, L"array220 {1, 2, 3, 4, 4, 50, 500, 6}, 0 -> true", LINE_INFO() );
		}
	};
}