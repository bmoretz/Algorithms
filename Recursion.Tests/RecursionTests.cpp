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
			Assert::AreEqual( Recursion::array220( new int[ 3 ] { 1, 2, 20 }, 3, 0 ), true, L"array220 {1, 2, 20}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[2 ] { 3, 30 }, 2, 0 ), true, L"array220 {3, 30}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 1 ] { 3 }, 1, 0 ), false, L"array220 {3}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 0 ], 0, 0 ), false, L"array220 {}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 4 ] { 3, 3, 30, 4 }, 4, 0 ), true, L"array220 {3, 3, 30, 4}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 3 ] { 2, 19, 4 }, 3, 0 ), false, L"array220 {2, 19, 4}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 3 ] { 20, 2, 21 }, 3, 0 ), false, L"array220 {20, 2, 21}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 4 ] { 20, 2, 21, 210 }, 4, 0 ), true, L"array220 {20, 2, 21, 210}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 3 ] { 2, 200, 2000 }, 3, 0 ), true, L"array220 {2, 200, 2000}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 2 ] { 0, 0 }, 2, 0 ), true, L"array220 {0, 0}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 6 ] { 1, 2, 3, 4, 5, 6 }, 6, 0 ), false, L"array220 {1, 2, 3, 4, 5, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 7 ] { 1, 2, 3, 4, 5, 50, 6 }, 7, 0 ), true, L"array220 {1, 2, 3, 4, 5, 50, 6}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 7 ] { 1, 2, 3, 4, 5, 51, 6 }, 6, 0 ), false, L"array220 {1, 2, 3, 4, 5, 51, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::array220( new int[ 9 ] { 1, 2, 3, 4, 4, 50, 500 }, 8, 0 ), true, L"array220 {1, 2, 3, 4, 4, 50, 500, 6}, 0 -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_allStart )
		{
			Assert::AreEqual( Recursion::allStar( "hello" ).c_str(), "h*e*l*l*o", L"allStar \"hello\" -> \"h*e*l*l*o\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "abc" ).c_str(), "a*b*c", L"allStar \"abc\" -> \"a*b*c\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "ab" ).c_str(), "a*b", L"allStar \"ab\" -> \"a*b\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "a" ).c_str(), "a", L"allStar \"a\" -> \"a\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "" ).c_str(), "", L"allStar \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "3.14" ).c_str(), "3*.*1*4", L"allStar \"3.14\" -> \"3*.*1*4\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "Chocolate" ).c_str(), "C*h*o*c*o*l*a*t*e", L"allStar \"Chocolate\" -> \"C*h*o*c*o*l*a*t*e\"", LINE_INFO() );
			Assert::AreEqual( Recursion::allStar( "1234" ).c_str(), "1*2*3*4", L"allStar \"1234\" -> \"1*2*3*4\"", LINE_INFO() );
		}

		TEST_METHOD( Test_pairStar )
		{
			Assert::AreEqual( Recursion::pairStar( "hello" ).c_str(), "hel*lo", L"pairStar \"hello\" -> \"hel*lo\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "xxyy" ).c_str(), "x*xy*y", L"pairStar \"xxyy\" -> \"x*xy*y\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "aaaa" ).c_str(), "a*a*a*a", L"pairStar \"aaaa\" -> \"a*a*a*a\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "aaab" ).c_str(), "a*a*ab", L"pairStar \"aaab\" -> \"a*a*ab\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "aa" ).c_str(), "a*a", L"pairStar \"aa\" -> \"a*a\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "a" ).c_str(), "a", L"pairStar \"a\" -> \"a\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "" ).c_str(), "", L"pairStar \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "noadjacent" ).c_str(), "noadjacent", L"pairStar \"noadjacent\" -> \"noadjacent\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "abba" ).c_str(), "ab*ba", L"pairStar \"abba\" -> \"ab*ba\"", LINE_INFO() );
			Assert::AreEqual( Recursion::pairStar( "abbba" ).c_str(), "ab*b*ba", L"pairStar \"abbba\" -> \"ab*b*ba\"", LINE_INFO() );
		}

		TEST_METHOD( Test_endX )
		{
			Assert::AreEqual( Recursion::endX( "xxre" ).c_str(), "rexx", L"endX \"xxre\" -> \"rexx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "xxhixx" ).c_str(), "hixxxx", L"endX \"xxhixx\" -> \"hixxxx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "xhixhix" ).c_str(), "hihixxx", L"endX \"xhixhix\" -> \"hihixxx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "hiy" ).c_str(), "hiy", L"endX \"hiy\" -> \"hiy\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "h" ).c_str(), "h", L"endX \"h\" -> \"h\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "x" ).c_str(), "x", L"endX \"x\" -> \"x\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "xx" ).c_str(), "xx", L"endX \"xx\" -> \"xx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "" ).c_str(), "", L"endX \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "bxx" ).c_str(), "bxx", L"endX \"bxx\" -> \"bxx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "bxax" ).c_str(), "baxx", L"endX \"bxax\" -> \"baxx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "axaxax" ).c_str(), "aaaxxx", L"endX \"axaxax\" -> \"aaaxxx\"", LINE_INFO() );
			Assert::AreEqual( Recursion::endX( "xxhxi" ).c_str(), "hixxx", L"endX \"xxhxi\" -> \"hixxx\"", LINE_INFO() );
		}

		TEST_METHOD( Test_countPairs )
		{
			Assert::AreEqual( Recursion::countPairs( "axa" ), 1, L"countPairs \"axa\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "axax" ), 2, L"countPairs \"axax\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "axbx" ), 1, L"countPairs \"axbx\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "hi" ), 0, L"countPairs \"hi\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "hihih" ), 3, L"countPairs \"hihih\" -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "ihihhh" ), 3, L"countPairs \"ihihhh\" -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "ihjxhh" ), 0, L"countPairs \"ihjxhh\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "" ), 0, L"countPairs \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "a" ), 0, L"countPairs \"a\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "aa" ), 0, L"countPairs \"aa\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countPairs( "aaa" ), 1, L"countPairs \"aaa\" -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_countAbc )
		{
			Assert::AreEqual( Recursion::countAbc( "abc" ), 1, L"countAbc \"abc\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "abcxxabc" ), 2, L"countAbc \"abcxxabc\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "abaxxaba" ), 2, L"countAbc \"abaxxaba\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "ababc" ), 2, L"countAbc \"ababc\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "abxbc" ), 0, L"countAbc \"abxbc\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "aaabc" ), 1, L"countAbc \"aaabc\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "hello" ), 0, L"countAbc \"hello\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "" ), 0, L"countAbc \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "ab" ), 0, L"countAbc \"ab\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "aba" ), 1, L"countAbc \"aba\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "aca" ), 0, L"countAbc \"aca\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countAbc( "aaa" ), 0, L"countAbc \"aaa\" -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_count11 )
		{
			Assert::AreEqual( Recursion::count11( "11abc11" ), 2, L"count11 \"11abc11\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "abc11x11x11" ), 3, L"count11 \"abc11x11x11\" -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "111" ), 1, L"count11 \"111\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "1111" ), 2, L"count11 \"1111\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "1" ), 0, L"count11 \"1\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "" ), 0, L"count11 \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "hi" ), 0, L"count11 \"hi\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "11x111x1111" ), 4, L"count11 \"11x111x1111\" -> 4", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "1x111" ), 1, L"count11 \"1x111\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "1Hello1" ), 0, L"count11 \"1Hello1\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::count11( "Hello" ), 0, L"count11 \"Hello\" -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_stringClean )
		{
			Assert::AreEqual( Recursion::stringClean( "yyzzza" ).c_str(), "yza", L"stringClean \"yyzzza\" -> \"yza\"", LINE_INFO() );
			Assert::AreEqual( Recursion::stringClean( "abbbcdd" ).c_str(), "abcd", L"stringClean \"abbbcdd\" -> \"abcd\"", LINE_INFO() );
			Assert::AreEqual( Recursion::stringClean( "Hello" ).c_str(), "Helo", L"stringClean \"Hello\" -> \"Helo\"", LINE_INFO() );
			Assert::AreEqual( Recursion::stringClean( "XXabcYY" ).c_str(), "XabcY", L"stringClean \"XXabcYY\" -> \"XabcY\"", LINE_INFO() );
			Assert::AreEqual( Recursion::stringClean( "112ab445" ).c_str(), "12ab45", L"stringClean \"112ab445\" -> \"12ab45\"", LINE_INFO() );
			Assert::AreEqual( Recursion::stringClean( "Hello Bookkeeper" ).c_str(), "Helo Bokeper", L"stringClean \"Hello Bookkeeper\" -> \"Helo Bokeper\"", LINE_INFO() );
		}

		TEST_METHOD( Test_countHi2 )
		{
			Assert::AreEqual( Recursion::countHi2( "ahixhi" ), 1, L"countHi2 \"ahixhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "ahibhi" ), 2, L"countHi2 \"ahibhi\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "xhixhi" ), 0, L"countHi2 \"xhixhi\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hixhi" ), 1, L"countHi2 \"hixhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hixhhi" ), 2, L"countHi2 \"hixhhi\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hihihi" ), 3, L"countHi2 \"hihihi\" -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hihihix" ), 3, L"countHi2 \"hihihix\" -> 3", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "xhihihix" ), 2, L"countHi2 \"xhihihix\" -> 2", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "xxhi" ), 0, L"countHi2 \"xxhi\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hixxhi" ), 1, L"countHi2 \"hixxhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "hi" ), 1, L"countHi2 \"hi\" -> 1", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "xxxx" ), 0, L"countHi2 \"xxxx\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "h" ), 0, L"countHi2 \"h\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "x" ), 0, L"countHi2 \"x\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "" ), 0, L"countHi2 \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( Recursion::countHi2( "Hellohi" ), 1, L"countHi2 \"Hellohi\" -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_parenBit )
		{
			Assert::AreEqual( Recursion::parenBit( "xyz(abc)123" ).c_str(), "(abc)", L"parenBit \"xyz(abc)123\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "x(hello)" ).c_str(), "(hello)", L"parenBit \"x(hello)\" -> \"(hello)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "(xy)1" ).c_str(), "(xy)", L"parenBit \"(xy)1\" -> \"(xy)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "not really (possible)" ).c_str(), "(possible)", L"parenBit \"not really (possible)\" -> \"(possible)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "(abc)" ).c_str(), "(abc)", L"parenBit \"(abc)\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "(abc)xyz" ).c_str(), "(abc)", L"parenBit \"(abc)xyz\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "(abc)x" ).c_str(), "(abc)", L"parenBit \"(abc)x\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "(x)" ).c_str(), "(x)", L"parenBit \"(x)\" -> \"(x)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "()" ).c_str(), "()", L"parenBit \"()\" -> \"()\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "res (ipsa) loquitor" ).c_str(), "(ipsa)", L"parenBit \"res (ipsa) loquitor\" -> \"(ipsa)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "hello(not really)there" ).c_str(), "(not really)", L"parenBit \"hello(not really)there\" -> \"(not really)\"", LINE_INFO() );
			Assert::AreEqual( Recursion::parenBit( "ab(ab)ab" ).c_str(), "(ab)", L"parenBit \"ab(ab)ab\" -> \"(ab)\"", LINE_INFO() );
		}

		TEST_METHOD( Test_nestParen )
		{
			Assert::AreEqual( Recursion::nestParen( "(())" ), true, L"nestParen \"(())\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((()))" ), true, L"nestParen \"((()))\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(((x))" ), false, L"nestParen \"(((x))\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((())" ), false, L"nestParen \"((())\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((()()" ), false, L"nestParen \"((()()\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "()" ), true, L"nestParen \"()\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "" ), true, L"nestParen \"\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(yy)" ), false, L"nestParen \"(yy)\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(())" ), true, L"nestParen \"(())\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(((y))" ), false, L"nestParen \"(((y))\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((y)))" ), false, L"nestParen \"((y)))\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((()))" ), true, L"nestParen \"((()))\" -> true", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(())))" ), false, L"nestParen \"(())))\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "((yy())))" ), false, L"nestParen \"((yy())))\" -> false", LINE_INFO() );
			Assert::AreEqual( Recursion::nestParen( "(((())))" ), true, L"nestParen \"(((())))\" -> true", LINE_INFO() );
		}
	};
}