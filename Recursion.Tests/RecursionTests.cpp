#include "stdafx.h"
#include "CppUnitTest.h"
#include "Recursion1.h"

using namespace Recursion1;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace RecursionTests
{		
	TEST_CLASS(RecursionTests)
	{
	public:
		
		TEST_METHOD( Test_factorial )
		{
			Assert::AreEqual( factorial( 1 ), 1, L"factorial 1 -> 1", LINE_INFO() );
			Assert::AreEqual( factorial( 2 ), 2, L"factorial 2 -> 2", LINE_INFO() );
			Assert::AreEqual( factorial( 3 ), 6, L"factorial 3 -> 6", LINE_INFO() );
			Assert::AreEqual( factorial( 4 ), 24, L"factorial 4 -> 24", LINE_INFO() );
			Assert::AreEqual( factorial( 5 ), 120, L"factorial 5 -> 120", LINE_INFO() );
			Assert::AreEqual( factorial( 6 ), 720, L"factorial 6 -> 720", LINE_INFO() );
			Assert::AreEqual( factorial( 7 ), 5040, L"factorial 7 -> 5040", LINE_INFO() );
			Assert::AreEqual( factorial( 8 ), 40320, L"factorial 8 -> 40320", LINE_INFO() );
			Assert::AreEqual( factorial( 12 ), 479001600, L"factorial 12 -> 479001600", LINE_INFO() );
		}

		TEST_METHOD( Test_bunnyEars )
		{
			Assert::AreEqual( bunnyEars( 0 ), 0, L"bunnyears 0 -> 0", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 1 ), 2, L"bunnyears 1 -> 2", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 2 ), 4, L"bunnyears 2 -> 4", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 3 ), 6, L"bunnyears 3 -> 6", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 4 ), 8, L"bunnyears 4 -> 8", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 5 ), 10, L"bunnyears 5 -> 10", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 12 ), 24, L"bunnyears 12 -> 24", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 50 ), 100, L"bunnyears 50 -> 100", LINE_INFO() );
			Assert::AreEqual( bunnyEars( 234 ), 468, L"bunnyears 234 -> 468", LINE_INFO() );
		}

		TEST_METHOD( Test_fibonacci )
		{
			Assert::AreEqual( fibonacci( 0 ), 0, L"fibonacci 0 -> 0", LINE_INFO() );
			Assert::AreEqual( fibonacci( 1 ), 1, L"fibonacci 1 -> 1", LINE_INFO() );
			Assert::AreEqual( fibonacci( 2 ), 1, L"fibonacci 2 -> 1", LINE_INFO() );
			Assert::AreEqual( fibonacci( 3 ), 2, L"fibonacci 3 -> 2", LINE_INFO() );
			Assert::AreEqual( fibonacci( 4 ), 3, L"fibonacci 4 -> 3", LINE_INFO() );
			Assert::AreEqual( fibonacci( 5 ), 5, L"fibonacci 5 -> 5", LINE_INFO() );
			Assert::AreEqual( fibonacci( 6 ), 8, L"fibonacci 6 -> 8", LINE_INFO() );
			Assert::AreEqual( fibonacci( 7 ), 13, L"fibonacci 7 -> 13", LINE_INFO() );
		}

		TEST_METHOD( Test_bunnyEars2 )
		{
			Assert::AreEqual( bunnyEars2( 0 ), 0, L"bunnyEars2 0 -> 0", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 1 ), 2, L"bunnyEars2 1 -> 2", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 2 ), 5, L"bunnyEars2 2 -> 5", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 3 ), 7, L"bunnyEars2 3 -> 7", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 4 ), 10, L"bunnyEars2 4 -> 10", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 5 ), 12, L"bunnyEars2 5 -> 12", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 6 ), 15, L"bunnyEars2 6 -> 15", LINE_INFO() );
			Assert::AreEqual( bunnyEars2( 10 ), 25, L"bunnyEars2 10 -> 25", LINE_INFO() );
		}

		TEST_METHOD( Test_triangle )
		{
			Assert::AreEqual( triangle( 0 ), 0, L"triangle 0 -> 0", LINE_INFO() );
			Assert::AreEqual( triangle( 1 ), 1, L"triangle 1 -> 1", LINE_INFO() );
			Assert::AreEqual( triangle( 2 ), 3, L"triangle 2 -> 3", LINE_INFO() );
			Assert::AreEqual( triangle( 3 ), 6, L"triangle 3 -> 6", LINE_INFO() );
			Assert::AreEqual( triangle( 4 ), 10, L"triangle 4 -> 10", LINE_INFO() );
			Assert::AreEqual( triangle( 5 ), 15, L"triangle 5 -> 15", LINE_INFO() );
			Assert::AreEqual( triangle( 6 ), 21, L"triangle 6 -> 21", LINE_INFO() );
			Assert::AreEqual( triangle( 7 ), 28, L"triangle 7 -> 28", LINE_INFO() );
		}

		TEST_METHOD( Test_sumDigits )
		{
			Assert::AreEqual( sumDigits( 126 ), 9, L"sumDigits 126 -> 9", LINE_INFO() );
			Assert::AreEqual( sumDigits( 49 ), 13, L"sumDigits 49 -> 13", LINE_INFO() );
			Assert::AreEqual( sumDigits( 12 ), 3, L"sumDigits 12 -> 3", LINE_INFO() );
			Assert::AreEqual( sumDigits( 10 ), 1, L"sumDigits 10 -> 1", LINE_INFO() );
			Assert::AreEqual( sumDigits( 1 ), 1, L"sumDigits 1 -> 1", LINE_INFO() );
			Assert::AreEqual( sumDigits( 0 ), 0, L"sumDigits 0 -> 0", LINE_INFO() );
			Assert::AreEqual( sumDigits( 730 ), 10, L"sumDigits 730 -> 10", LINE_INFO() );
			Assert::AreEqual( sumDigits( 1111 ), 4, L"sumDigits 1111 -> 4", LINE_INFO() );
			Assert::AreEqual( sumDigits( 11111 ), 5, L"sumDigits 11111 -> 5", LINE_INFO() );
			Assert::AreEqual( sumDigits( 10110 ), 3, L"sumDigits 10110 -> 3", LINE_INFO() );
			Assert::AreEqual( sumDigits( 235 ), 10, L"sumDigits 235 -> 10", LINE_INFO() );
		}

		TEST_METHOD( Test_count7 )
		{
			Assert::AreEqual( count7( 717 ), 2, L"count7  717  -> 2", LINE_INFO() );
			Assert::AreEqual( count7( 7 ), 1, L"count7  7  -> 1", LINE_INFO() );
			Assert::AreEqual( count7( 123 ), 0, L"count7  123  -> 0", LINE_INFO() );
			Assert::AreEqual( count7( 77 ), 2, L"count7  77  -> 2", LINE_INFO() );
			Assert::AreEqual( count7( 7123 ), 1, L"count7  7123  -> 1", LINE_INFO() );
			Assert::AreEqual( count7( 771237 ), 3, L"count7  771237  -> 3", LINE_INFO() );
			Assert::AreEqual( count7( 771737 ), 4, L"count7  771737  -> 4", LINE_INFO() );
			Assert::AreEqual( count7( 47571 ), 2, L"count7  47571  -> 2", LINE_INFO() );
			Assert::AreEqual( count7( 777777 ), 6, L"count7  777777  -> 6", LINE_INFO() );
			Assert::AreEqual( count7( 70701277 ), 4, L"count7  70701277  -> 4", LINE_INFO() );
			Assert::AreEqual( count7( 777576197 ), 5, L"count7  777576197  -> 5", LINE_INFO() );
			Assert::AreEqual( count7( 99999 ), 0, L"count7  99999  -> 0", LINE_INFO() );
			Assert::AreEqual( count7( 99799 ), 1, L"count7  99799  -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_count8 )
		{
			Assert::AreEqual( count8( 8 ), 1, L"count8  8 -> 1", LINE_INFO() );
			Assert::AreEqual( count8( 818 ), 2, L"count8  818 -> 2", LINE_INFO() );
			Assert::AreEqual( count8( 8818 ), 4, L"count8  8818 -> 4", LINE_INFO() );
			Assert::AreEqual( count8( 8088 ), 4, L"count8  8088 -> 4", LINE_INFO() );
			Assert::AreEqual( count8( 123 ), 0, L"count8 123 -> 0", LINE_INFO() );
			Assert::AreEqual( count8( 81238 ), 2, L"count8 81238 -> 2", LINE_INFO() );
			Assert::AreEqual( count8( 88788 ), 6, L"count8 88788 -> 6", LINE_INFO() );
			Assert::AreEqual( count8( 8234 ), 1, L"count8 8234 -> 1", LINE_INFO() );
			Assert::AreEqual( count8( 2348 ), 1, L"count8 2348 -> 1", LINE_INFO() );
			Assert::AreEqual( count8( 23884 ), 3, L"count8 23884 -> 3", LINE_INFO() );
			Assert::AreEqual( count8( 0 ), 0, L"count8 0 -> 0", LINE_INFO() );
			Assert::AreEqual( count8( 1818188 ), 5, L"count8 1818188 -> 5", LINE_INFO() );
			Assert::AreEqual( count8( 8818181 ), 5, L"count8 8818181 -> 5", LINE_INFO() );
			Assert::AreEqual( count8( 1080 ), 1, L"count8 1080 -> 1", LINE_INFO() );
			Assert::AreEqual( count8( 188 ), 3, L"count8 188 -> 3", LINE_INFO() );
			Assert::AreEqual( count8( 88888 ), 9, L"count8 88888 -> 9", LINE_INFO() );
			Assert::AreEqual( count8( 9898 ), 2, L"count8 9898 -> 2", LINE_INFO() );
			Assert::AreEqual( count8( 78 ), 1, L"count8 78 -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_powerN )
		{
			Assert::AreEqual( powerN( 3, 1 ), 3, L"powerN 3, 1 -> 3", LINE_INFO() );
			Assert::AreEqual( powerN( 3, 2 ), 9, L"powerN 3, 2 -> 9", LINE_INFO() );
			Assert::AreEqual( powerN( 3, 3 ), 27, L"powerN 3, 3 -> 27", LINE_INFO() );
			Assert::AreEqual( powerN( 2, 1 ), 2, L"powerN 2, 1 -> 2", LINE_INFO() );
			Assert::AreEqual( powerN( 2, 2 ), 4, L"powerN 2, 2 -> 4", LINE_INFO() );
			Assert::AreEqual( powerN( 2, 3 ), 8, L"powerN 2, 3 -> 8", LINE_INFO() );
			Assert::AreEqual( powerN( 2, 4 ), 16, L"powerN 2, 4 -> 16", LINE_INFO() );
			Assert::AreEqual( powerN( 2, 5 ), 32, L"powerN 2, 5 -> 32", LINE_INFO() );
			Assert::AreEqual( powerN( 10, 1 ), 10, L"powerN 10, 1 -> 10", LINE_INFO() );
			Assert::AreEqual( powerN( 10, 2 ), 100, L"powerN 10, 2 -> 100", LINE_INFO() );
			Assert::AreEqual( powerN( 10, 3 ), 1000, L"powerN 10, 3 -> 1000", LINE_INFO() );
		}

		TEST_METHOD( Test_countX )
		{
			Assert::AreEqual( countX( "xxhixx" ), 4, L"countX xxhixx -> 4", LINE_INFO() );
			Assert::AreEqual( countX( "xhixhix" ), 3, L"countX xhixhix -> 3", LINE_INFO() );
			Assert::AreEqual( countX( "hi" ), 0, L"countX hi -> 0", LINE_INFO() );
			Assert::AreEqual( countX( "h" ), 0, L"countX h -> 0", LINE_INFO() );
			Assert::AreEqual( countX( "x" ), 1, L"countX -> 1", LINE_INFO() );
			Assert::AreEqual( countX( "" ), 0, L"countX -> 0", LINE_INFO() );
			Assert::AreEqual( countX( "hihi" ), 0, L"countX hihi -> 0", LINE_INFO() );
			Assert::AreEqual( countX( "hiAAhi12hi" ), 0, L"countX hiAAhi12hi -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_countHi )
		{
			Assert::AreEqual( countHi( "xxhixx" ), 1, L"countHi xxhixx -> 1", LINE_INFO() );
			Assert::AreEqual( countHi( "xhixhix" ), 2, L"countHi xhixhix -> 2", LINE_INFO() );
			Assert::AreEqual( countHi( "hi" ), 1, L"countHi hi -> 1", LINE_INFO() );
			Assert::AreEqual( countHi( "hihih" ), 2, L"countHi hihih -> 2", LINE_INFO() );
			Assert::AreEqual( countHi( "h" ), 0, L"countHi h -> 0", LINE_INFO() );
			Assert::AreEqual( countHi( "" ), 0, L"countHi "" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi( "ihihihihih" ), 4, L"countHi ihihihihih -> 4", LINE_INFO() );
			Assert::AreEqual( countHi( "ihihihihihi" ), 5, L"countHi ihihihihihi -> 5", LINE_INFO() );
			Assert::AreEqual( countHi( "hiAAhi12hi" ), 3, L"countHi hiAAhi12hi -> 3", LINE_INFO() );
			Assert::AreEqual( countHi( "xhixhxihihhhih" ), 3, L"countHi xhixhxihihhhih -> 3", LINE_INFO() );
			Assert::AreEqual( countHi( "ship" ), 1, L"countHi ship -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_noX )
		{
			Assert::AreEqual( noX( "xaxb" ).c_str(), "ab", L"noX 'xaxb' -> 'ab'", LINE_INFO() );
			Assert::AreEqual( noX( "abc" ).c_str(), "abc", L"noX 'abc' -> 'abc'", LINE_INFO() );
			Assert::AreEqual( noX( "xx" ).c_str(), "", L"noX 'xx' -> ''", LINE_INFO() );
			Assert::AreEqual( noX( "" ).c_str(), "", L"noX '' -> ''", LINE_INFO() );
			Assert::AreEqual( noX( "axxbxx" ).c_str(), "ab", L"noX 'axxbxx' -> 'ab'", LINE_INFO() );
			Assert::AreEqual( noX( "Hellox" ).c_str(), "Hello", L"noX 'Hellox' -> 'Hello'", LINE_INFO() );
		}

		TEST_METHOD( Test_changePi )
		{
			Assert::AreEqual( changePi( "xpix" ).c_str(), "x3.14x", L"changePi xpix -> x3.14x", LINE_INFO() );
			Assert::AreEqual( changePi( "pipi" ).c_str(), "3.143.14", L"changePi pipi -> 3.143.14", LINE_INFO() );
			Assert::AreEqual( changePi( "pip" ).c_str(), "3.14p", L"changePi pip -> 3.14p", LINE_INFO() );
			Assert::AreEqual( changePi( "pi" ).c_str(), "3.14", L"changePi pi -> 3.14", LINE_INFO() );
			Assert::AreEqual( changePi( "hip" ).c_str(), "hip", L"changePi hip -> hip", LINE_INFO() );
			Assert::AreEqual( changePi( "p" ).c_str(), "p", L"changePi p -> p", LINE_INFO() );
			Assert::AreEqual( changePi( "x" ).c_str(), "x", L"changePi x -> x", LINE_INFO() );
			Assert::AreEqual( changePi( "" ).c_str(), "", L"changePi  -> ", LINE_INFO() );
			Assert::AreEqual( changePi( "pixx" ).c_str(), "3.14xx", L"changePi pixx -> 3.14xx", LINE_INFO() );
			Assert::AreEqual( changePi( "xyzzy" ).c_str(), "xyzzy", L"changePi xyzzy -> xyzzy", LINE_INFO() );
		}

		TEST_METHOD( Test_changeXY )
		{
			Assert::AreEqual( changeXY( "codex" ).c_str(), "codey", L"changeXY \"codex\" -> \"codey\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "xxhixx" ).c_str(), "yyhiyy", L"changeXY \"xxhixx\" -> \"yyhiyy\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "xhixhix" ).c_str(), "yhiyhiy", L"changeXY \"xhixhix\" -> \"yhiyhiy\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "hiy" ).c_str(), "hiy", L"changeXY \"hiy\" -> \"hiy\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "h" ).c_str(), "h", L"changeXY \"h\" -> \"h\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "x" ).c_str(), "y", L"changeXY \"x\" -> \"y\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "" ).c_str(), "", L"changeXY \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "xxx" ).c_str(), "yyy", L"changeXY \"xxx\" -> \"yyy\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "yyhxyi" ).c_str(), "yyhyyi", L"changeXY \"yyhxyi\" -> \"yyhyyi\"", LINE_INFO() );
			Assert::AreEqual( changeXY( "hihi" ).c_str(), "hihi", L"changeXY \"hihi\" -> \"hihi\"", LINE_INFO() );
		}

		TEST_METHOD( test_array6 )
		{
			Assert::AreEqual( array6( { 1, 6, 4 }, 0 ), true, L"array6 [1, 6, 4], 0 -> true", LINE_INFO() );
			Assert::AreEqual( array6( { 1, 4 }, 0 ), false, L"array6 [1, 4], 0 -> false", LINE_INFO() );
			Assert::AreEqual( array6( { 6 }, 0 ), true, L"array6 [6], 0 -> true", LINE_INFO() );
			Assert::AreEqual( array6( { }, 0 ), false, L"array6 [], 0 -> false", LINE_INFO() );
			Assert::AreEqual( array6( { 6, 2, 2 }, 0 ), true, L"array6 [6, 2, 2], 0 -> true", LINE_INFO() );
			Assert::AreEqual( array6( { 2, 5 }, 0 ), false, L"array6 [2, 5], 0 -> false", LINE_INFO() );
			Assert::AreEqual( array6( { 1, 9, 4, 6, 6 }, 0 ), true, L"array6 [1, 9, 4, 6, 6], 0 -> true", LINE_INFO() );
			Assert::AreEqual( array6( { 2, 5, 6 }, 0 ), true, L"array6 [2, 5, 6], 0 -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_array11 )
		{
			Assert::AreEqual( array11( { 1, 2, 11 }, 0 ), 1, L"array11 [1, 2, 11], 0 -> 1", LINE_INFO() );
			Assert::AreEqual( array11( { 11, 11 }, 0 ), 2, L"array11 [11, 11], 0 -> 2", LINE_INFO() );
			Assert::AreEqual( array11( { 1, 2, 3, 4 }, 0 ), 0, L"array11 [1, 2, 3, 4], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( array11( { 1, 11, 3, 11, 11 }, 0 ), 3, L"array11 [1, 11, 3, 11, 11], 0 -> 3", LINE_INFO() );
			Assert::AreEqual( array11( { 11 }, 0 ), 1, L"array11 [11], 0 -> 1", LINE_INFO() );
			Assert::AreEqual( array11( { 1 }, 0 ), 0, L"array11 [1], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( array11( { }, 0 ), 0, L"array11 [], 0 -> 0", LINE_INFO() );
			Assert::AreEqual( array11( { 11, 2, 3, 4, 11, 5 }, 0 ), 2, L"array11 [11, 2, 3, 4, 11, 5], 0 -> 2", LINE_INFO() );
			Assert::AreEqual( array11( { 11, 5, 11 }, 0 ), 2, L"array11 [11, 5, 11], 0 -> 2", LINE_INFO() );
		}

		TEST_METHOD( Test_array220 )
		{
			Assert::AreEqual( array220( new int[ 3 ] { 1, 2, 20 }, 3, 0 ), true, L"array220 {1, 2, 20}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[2 ] { 3, 30 }, 2, 0 ), true, L"array220 {3, 30}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 1 ] { 3 }, 1, 0 ), false, L"array220 {3}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 0 ], 0, 0 ), false, L"array220 {}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 4 ] { 3, 3, 30, 4 }, 4, 0 ), true, L"array220 {3, 3, 30, 4}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 3 ] { 2, 19, 4 }, 3, 0 ), false, L"array220 {2, 19, 4}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 3 ] { 20, 2, 21 }, 3, 0 ), false, L"array220 {20, 2, 21}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 4 ] { 20, 2, 21, 210 }, 4, 0 ), true, L"array220 {20, 2, 21, 210}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 3 ] { 2, 200, 2000 }, 3, 0 ), true, L"array220 {2, 200, 2000}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 2 ] { 0, 0 }, 2, 0 ), true, L"array220 {0, 0}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 6 ] { 1, 2, 3, 4, 5, 6 }, 6, 0 ), false, L"array220 {1, 2, 3, 4, 5, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 7 ] { 1, 2, 3, 4, 5, 50, 6 }, 7, 0 ), true, L"array220 {1, 2, 3, 4, 5, 50, 6}, 0 -> true", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 7 ] { 1, 2, 3, 4, 5, 51, 6 }, 6, 0 ), false, L"array220 {1, 2, 3, 4, 5, 51, 6}, 0 -> false", LINE_INFO() );
			Assert::AreEqual( array220( new int[ 9 ] { 1, 2, 3, 4, 4, 50, 500 }, 8, 0 ), true, L"array220 {1, 2, 3, 4, 4, 50, 500, 6}, 0 -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_allStart )
		{
			Assert::AreEqual( allStar( "hello" ).c_str(), "h*e*l*l*o", L"allStar \"hello\" -> \"h*e*l*l*o\"", LINE_INFO() );
			Assert::AreEqual( allStar( "abc" ).c_str(), "a*b*c", L"allStar \"abc\" -> \"a*b*c\"", LINE_INFO() );
			Assert::AreEqual( allStar( "ab" ).c_str(), "a*b", L"allStar \"ab\" -> \"a*b\"", LINE_INFO() );
			Assert::AreEqual( allStar( "a" ).c_str(), "a", L"allStar \"a\" -> \"a\"", LINE_INFO() );
			Assert::AreEqual( allStar( "" ).c_str(), "", L"allStar \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( allStar( "3.14" ).c_str(), "3*.*1*4", L"allStar \"3.14\" -> \"3*.*1*4\"", LINE_INFO() );
			Assert::AreEqual( allStar( "Chocolate" ).c_str(), "C*h*o*c*o*l*a*t*e", L"allStar \"Chocolate\" -> \"C*h*o*c*o*l*a*t*e\"", LINE_INFO() );
			Assert::AreEqual( allStar( "1234" ).c_str(), "1*2*3*4", L"allStar \"1234\" -> \"1*2*3*4\"", LINE_INFO() );
		}

		TEST_METHOD( Test_pairStar )
		{
			Assert::AreEqual( pairStar( "hello" ).c_str(), "hel*lo", L"pairStar \"hello\" -> \"hel*lo\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "xxyy" ).c_str(), "x*xy*y", L"pairStar \"xxyy\" -> \"x*xy*y\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "aaaa" ).c_str(), "a*a*a*a", L"pairStar \"aaaa\" -> \"a*a*a*a\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "aaab" ).c_str(), "a*a*ab", L"pairStar \"aaab\" -> \"a*a*ab\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "aa" ).c_str(), "a*a", L"pairStar \"aa\" -> \"a*a\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "a" ).c_str(), "a", L"pairStar \"a\" -> \"a\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "" ).c_str(), "", L"pairStar \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "noadjacent" ).c_str(), "noadjacent", L"pairStar \"noadjacent\" -> \"noadjacent\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "abba" ).c_str(), "ab*ba", L"pairStar \"abba\" -> \"ab*ba\"", LINE_INFO() );
			Assert::AreEqual( pairStar( "abbba" ).c_str(), "ab*b*ba", L"pairStar \"abbba\" -> \"ab*b*ba\"", LINE_INFO() );
		}

		TEST_METHOD( Test_endX )
		{
			Assert::AreEqual( endX( "xxre" ).c_str(), "rexx", L"endX \"xxre\" -> \"rexx\"", LINE_INFO() );
			Assert::AreEqual( endX( "xxhixx" ).c_str(), "hixxxx", L"endX \"xxhixx\" -> \"hixxxx\"", LINE_INFO() );
			Assert::AreEqual( endX( "xhixhix" ).c_str(), "hihixxx", L"endX \"xhixhix\" -> \"hihixxx\"", LINE_INFO() );
			Assert::AreEqual( endX( "hiy" ).c_str(), "hiy", L"endX \"hiy\" -> \"hiy\"", LINE_INFO() );
			Assert::AreEqual( endX( "h" ).c_str(), "h", L"endX \"h\" -> \"h\"", LINE_INFO() );
			Assert::AreEqual( endX( "x" ).c_str(), "x", L"endX \"x\" -> \"x\"", LINE_INFO() );
			Assert::AreEqual( endX( "xx" ).c_str(), "xx", L"endX \"xx\" -> \"xx\"", LINE_INFO() );
			Assert::AreEqual( endX( "" ).c_str(), "", L"endX \"\" -> \"\"", LINE_INFO() );
			Assert::AreEqual( endX( "bxx" ).c_str(), "bxx", L"endX \"bxx\" -> \"bxx\"", LINE_INFO() );
			Assert::AreEqual( endX( "bxax" ).c_str(), "baxx", L"endX \"bxax\" -> \"baxx\"", LINE_INFO() );
			Assert::AreEqual( endX( "axaxax" ).c_str(), "aaaxxx", L"endX \"axaxax\" -> \"aaaxxx\"", LINE_INFO() );
			Assert::AreEqual( endX( "xxhxi" ).c_str(), "hixxx", L"endX \"xxhxi\" -> \"hixxx\"", LINE_INFO() );
		}

		TEST_METHOD( Test_countPairs )
		{
			Assert::AreEqual( countPairs( "axa" ), 1, L"countPairs \"axa\" -> 1", LINE_INFO() );
			Assert::AreEqual( countPairs( "axax" ), 2, L"countPairs \"axax\" -> 2", LINE_INFO() );
			Assert::AreEqual( countPairs( "axbx" ), 1, L"countPairs \"axbx\" -> 1", LINE_INFO() );
			Assert::AreEqual( countPairs( "hi" ), 0, L"countPairs \"hi\" -> 0", LINE_INFO() );
			Assert::AreEqual( countPairs( "hihih" ), 3, L"countPairs \"hihih\" -> 3", LINE_INFO() );
			Assert::AreEqual( countPairs( "ihihhh" ), 3, L"countPairs \"ihihhh\" -> 3", LINE_INFO() );
			Assert::AreEqual( countPairs( "ihjxhh" ), 0, L"countPairs \"ihjxhh\" -> 0", LINE_INFO() );
			Assert::AreEqual( countPairs( "" ), 0, L"countPairs \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( countPairs( "a" ), 0, L"countPairs \"a\" -> 0", LINE_INFO() );
			Assert::AreEqual( countPairs( "aa" ), 0, L"countPairs \"aa\" -> 0", LINE_INFO() );
			Assert::AreEqual( countPairs( "aaa" ), 1, L"countPairs \"aaa\" -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_countAbc )
		{
			Assert::AreEqual( countAbc( "abc" ), 1, L"countAbc \"abc\" -> 1", LINE_INFO() );
			Assert::AreEqual( countAbc( "abcxxabc" ), 2, L"countAbc \"abcxxabc\" -> 2", LINE_INFO() );
			Assert::AreEqual( countAbc( "abaxxaba" ), 2, L"countAbc \"abaxxaba\" -> 2", LINE_INFO() );
			Assert::AreEqual( countAbc( "ababc" ), 2, L"countAbc \"ababc\" -> 2", LINE_INFO() );
			Assert::AreEqual( countAbc( "abxbc" ), 0, L"countAbc \"abxbc\" -> 0", LINE_INFO() );
			Assert::AreEqual( countAbc( "aaabc" ), 1, L"countAbc \"aaabc\" -> 1", LINE_INFO() );
			Assert::AreEqual( countAbc( "hello" ), 0, L"countAbc \"hello\" -> 0", LINE_INFO() );
			Assert::AreEqual( countAbc( "" ), 0, L"countAbc \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( countAbc( "ab" ), 0, L"countAbc \"ab\" -> 0", LINE_INFO() );
			Assert::AreEqual( countAbc( "aba" ), 1, L"countAbc \"aba\" -> 1", LINE_INFO() );
			Assert::AreEqual( countAbc( "aca" ), 0, L"countAbc \"aca\" -> 0", LINE_INFO() );
			Assert::AreEqual( countAbc( "aaa" ), 0, L"countAbc \"aaa\" -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_count11 )
		{
			Assert::AreEqual( count11( "11abc11" ), 2, L"count11 \"11abc11\" -> 2", LINE_INFO() );
			Assert::AreEqual( count11( "abc11x11x11" ), 3, L"count11 \"abc11x11x11\" -> 3", LINE_INFO() );
			Assert::AreEqual( count11( "111" ), 1, L"count11 \"111\" -> 1", LINE_INFO() );
			Assert::AreEqual( count11( "1111" ), 2, L"count11 \"1111\" -> 2", LINE_INFO() );
			Assert::AreEqual( count11( "1" ), 0, L"count11 \"1\" -> 0", LINE_INFO() );
			Assert::AreEqual( count11( "" ), 0, L"count11 \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( count11( "hi" ), 0, L"count11 \"hi\" -> 0", LINE_INFO() );
			Assert::AreEqual( count11( "11x111x1111" ), 4, L"count11 \"11x111x1111\" -> 4", LINE_INFO() );
			Assert::AreEqual( count11( "1x111" ), 1, L"count11 \"1x111\" -> 1", LINE_INFO() );
			Assert::AreEqual( count11( "1Hello1" ), 0, L"count11 \"1Hello1\" -> 0", LINE_INFO() );
			Assert::AreEqual( count11( "Hello" ), 0, L"count11 \"Hello\" -> 0", LINE_INFO() );
		}

		TEST_METHOD( Test_stringClean )
		{
			Assert::AreEqual( stringClean( "yyzzza" ).c_str(), "yza", L"stringClean \"yyzzza\" -> \"yza\"", LINE_INFO() );
			Assert::AreEqual( stringClean( "abbbcdd" ).c_str(), "abcd", L"stringClean \"abbbcdd\" -> \"abcd\"", LINE_INFO() );
			Assert::AreEqual( stringClean( "Hello" ).c_str(), "Helo", L"stringClean \"Hello\" -> \"Helo\"", LINE_INFO() );
			Assert::AreEqual( stringClean( "XXabcYY" ).c_str(), "XabcY", L"stringClean \"XXabcYY\" -> \"XabcY\"", LINE_INFO() );
			Assert::AreEqual( stringClean( "112ab445" ).c_str(), "12ab45", L"stringClean \"112ab445\" -> \"12ab45\"", LINE_INFO() );
			Assert::AreEqual( stringClean( "Hello Bookkeeper" ).c_str(), "Helo Bokeper", L"stringClean \"Hello Bookkeeper\" -> \"Helo Bokeper\"", LINE_INFO() );
		}

		TEST_METHOD( Test_countHi2 )
		{
			Assert::AreEqual( countHi2( "ahixhi" ), 1, L"countHi2 \"ahixhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( countHi2( "ahibhi" ), 2, L"countHi2 \"ahibhi\" -> 2", LINE_INFO() );
			Assert::AreEqual( countHi2( "xhixhi" ), 0, L"countHi2 \"xhixhi\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "hixhi" ), 1, L"countHi2 \"hixhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( countHi2( "hixhhi" ), 2, L"countHi2 \"hixhhi\" -> 2", LINE_INFO() );
			Assert::AreEqual( countHi2( "hihihi" ), 3, L"countHi2 \"hihihi\" -> 3", LINE_INFO() );
			Assert::AreEqual( countHi2( "hihihix" ), 3, L"countHi2 \"hihihix\" -> 3", LINE_INFO() );
			Assert::AreEqual( countHi2( "xhihihix" ), 2, L"countHi2 \"xhihihix\" -> 2", LINE_INFO() );
			Assert::AreEqual( countHi2( "xxhi" ), 0, L"countHi2 \"xxhi\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "hixxhi" ), 1, L"countHi2 \"hixxhi\" -> 1", LINE_INFO() );
			Assert::AreEqual( countHi2( "hi" ), 1, L"countHi2 \"hi\" -> 1", LINE_INFO() );
			Assert::AreEqual( countHi2( "xxxx" ), 0, L"countHi2 \"xxxx\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "h" ), 0, L"countHi2 \"h\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "x" ), 0, L"countHi2 \"x\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "" ), 0, L"countHi2 \"\" -> 0", LINE_INFO() );
			Assert::AreEqual( countHi2( "Hellohi" ), 1, L"countHi2 \"Hellohi\" -> 1", LINE_INFO() );
		}

		TEST_METHOD( Test_parenBit )
		{
			Assert::AreEqual( parenBit( "xyz(abc)123" ).c_str(), "(abc)", L"parenBit \"xyz(abc)123\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "x(hello)" ).c_str(), "(hello)", L"parenBit \"x(hello)\" -> \"(hello)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "(xy)1" ).c_str(), "(xy)", L"parenBit \"(xy)1\" -> \"(xy)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "not really (possible)" ).c_str(), "(possible)", L"parenBit \"not really (possible)\" -> \"(possible)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "(abc)" ).c_str(), "(abc)", L"parenBit \"(abc)\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "(abc)xyz" ).c_str(), "(abc)", L"parenBit \"(abc)xyz\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "(abc)x" ).c_str(), "(abc)", L"parenBit \"(abc)x\" -> \"(abc)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "(x)" ).c_str(), "(x)", L"parenBit \"(x)\" -> \"(x)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "()" ).c_str(), "()", L"parenBit \"()\" -> \"()\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "res (ipsa) loquitor" ).c_str(), "(ipsa)", L"parenBit \"res (ipsa) loquitor\" -> \"(ipsa)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "hello(not really)there" ).c_str(), "(not really)", L"parenBit \"hello(not really)there\" -> \"(not really)\"", LINE_INFO() );
			Assert::AreEqual( parenBit( "ab(ab)ab" ).c_str(), "(ab)", L"parenBit \"ab(ab)ab\" -> \"(ab)\"", LINE_INFO() );
		}

		TEST_METHOD( Test_nestParen )
		{
			Assert::AreEqual( nestParen( "(())" ), true, L"nestParen \"(())\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "((()))" ), true, L"nestParen \"((()))\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "(((x))" ), false, L"nestParen \"(((x))\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "((())" ), false, L"nestParen \"((())\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "((()()" ), false, L"nestParen \"((()()\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "()" ), true, L"nestParen \"()\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "" ), true, L"nestParen \"\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "(yy)" ), false, L"nestParen \"(yy)\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "(())" ), true, L"nestParen \"(())\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "(((y))" ), false, L"nestParen \"(((y))\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "((y)))" ), false, L"nestParen \"((y)))\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "((()))" ), true, L"nestParen \"((()))\" -> true", LINE_INFO() );
			Assert::AreEqual( nestParen( "(())))" ), false, L"nestParen \"(())))\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "((yy())))" ), false, L"nestParen \"((yy())))\" -> false", LINE_INFO() );
			Assert::AreEqual( nestParen( "(((())))" ), true, L"nestParen \"(((())))\" -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_strCount )
		{
			Assert::AreEqual( strCount( "catcowcat", "cat" ), 2, L"strCount \"catcowcat\", \"cat\" -> 2", LINE_INFO() );
			Assert::AreEqual( strCount( "catcowcat", "cow" ), 1, L"strCount \"catcowcat\", \"cow\" -> 1", LINE_INFO() );
			Assert::AreEqual( strCount( "catcowcat", "dog" ), 0, L"strCount \"catcowcat\", \"dog\" -> 0", LINE_INFO() );
			Assert::AreEqual( strCount( "cacatcowcat", "cat" ), 2, L"strCount \"cacatcowcat\", \"cat\" -> 2", LINE_INFO() );
			Assert::AreEqual( strCount( "xyx", "x" ), 2, L"strCount \"xyx\", \"x\" -> 2", LINE_INFO() );
			Assert::AreEqual( strCount( "iiiijj", "i" ), 4, L"strCount \"iiiijj\", \"i\" -> 4", LINE_INFO() );
			Assert::AreEqual( strCount( "iiiijj", "ii" ), 2, L"strCount \"iiiijj\", \"ii\" -> 2", LINE_INFO() );
			Assert::AreEqual( strCount( "iiiijj", "iii" ), 1, L"strCount \"iiiijj\", \"iii\" -> 1", LINE_INFO() );
			Assert::AreEqual( strCount( "iiiijj", "j" ), 2, L"strCount \"iiiijj\", \"j\" -> 2", LINE_INFO() );
			Assert::AreEqual( strCount( "iiiijj", "jj" ), 1, L"strCount \"iiiijj\", \"jj\" -> 1", LINE_INFO() );
			Assert::AreEqual( strCount( "aaabababab", "ab" ), 4, L"strCount \"aaabababab\", \"ab\" -> 4", LINE_INFO() );
			Assert::AreEqual( strCount( "aaabababab", "aa" ), 1, L"strCount \"aaabababab\", \"aa\" -> 1", LINE_INFO() );
			Assert::AreEqual( strCount( "aaabababab", "a" ), 6, L"strCount \"aaabababab\", \"a\" -> 6", LINE_INFO() );
			Assert::AreEqual( strCount( "aaabababab", "b" ), 4, L"strCount \"aaabababab\", \"b\" -> 4", LINE_INFO() );
		}

		TEST_METHOD( Test_strCopies )
		{
			Assert::AreEqual( strCopies( "catcowcat", "cat", 2 ), true, L"strCopies \"catcowcat\", \"cat\", 2 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "catcowcat", "cow", 2 ), false, L"strCopies \"catcowcat\", \"cow\", 2 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "catcowcat", "cow", 1 ), true, L"strCopies \"catcowcat\", \"cow\", 1 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "i", 3 ), true, L"strCopies \"iiijjj\", \"i\", 3 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "i", 4 ), false, L"strCopies \"iiijjj\", \"i\", 4 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "ii", 2 ), true, L"strCopies \"iiijjj\", \"ii\", 2 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "ii", 3 ), false, L"strCopies \"iiijjj\", \"ii\", 3 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "x", 3 ), false, L"strCopies \"iiijjj\", \"x\", 3 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiijjj", "x", 0 ), true, L"strCopies \"iiijjj\", \"x\", 0 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiiiij", "iii", 3 ), true, L"strCopies \"iiiiij\", \"iii\", 3 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "iiiiij", "iii", 4 ), false, L"strCopies \"iiiiij\", \"iii\", 4 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "ijiiiiij", "iiii", 2 ), true, L"strCopies \"ijiiiiij\", \"iiii\", 2 -> true", LINE_INFO() );
			Assert::AreEqual( strCopies( "ijiiiiij", "iiii", 3 ), false, L"strCopies \"ijiiiiij\", \"iiii\", 3 -> false", LINE_INFO() );
			Assert::AreEqual( strCopies( "dogcatdogcat", "dog", 2 ), true, L"strCopies \"dogcatdogcat\", \"dog\", 2 -> true", LINE_INFO() );
		}

		TEST_METHOD( Test_strDist )
		{
			Assert::AreEqual( strDist( "catcowcat", "cat" ), 9, L"strDist \"catcowcat\", \"cat\" -> 9", LINE_INFO() );
			Assert::AreEqual( strDist( "catcowcat", "cow" ), 3, L"strDist \"catcowcat\", \"cow\" -> 3", LINE_INFO() );
			Assert::AreEqual( strDist( "cccatcowcatxx", "cat" ), 9, L"strDist \"cccatcowcatxx\", \"cat\" -> 9", LINE_INFO() );
			Assert::AreEqual( strDist( "abccatcowcatcatxyz", "cat" ), 12, L"strDist \"abccatcowcatcatxyz\", \"cat\" -> 12", LINE_INFO() );
			Assert::AreEqual( strDist( "xyx", "x" ), 3, L"strDist \"xyx\", \"x\" -> 3", LINE_INFO() );
			Assert::AreEqual( strDist( "xyx", "y" ), 1, L"strDist \"xyx\", \"y\" -> 1", LINE_INFO() );
			Assert::AreEqual( strDist( "xyx", "z" ), 0, L"strDist \"xyx\", \"z\" -> 0", LINE_INFO() );
			Assert::AreEqual( strDist( "z", "z" ), 1, L"strDist \"z\", \"z\" -> 1", LINE_INFO() );
			Assert::AreEqual( strDist( "x", "z" ), 0, L"strDist \"x\", \"z\" -> 0", LINE_INFO() );
			Assert::AreEqual( strDist( "", "z" ), 0, L"strDist \"\", \"z\" -> 0", LINE_INFO() );
			Assert::AreEqual( strDist( "hiHellohihihi", "hi" ), 13, L"strDist \"hiHellohihihi\", \"hi\" -> 13", LINE_INFO() );
			Assert::AreEqual( strDist( "hiHellohihihi", "hih" ), 5, L"strDist \"hiHellohihihi\", \"hih\" -> 5", LINE_INFO() );
			Assert::AreEqual( strDist( "hiHellohihihi", "o" ), 1, L"strDist \"hiHellohihihi\", \"o\" -> 1", LINE_INFO() );
			Assert::AreEqual( strDist( "hiHellohihihi", "ll" ), 2, L"strDist \"hiHellohihihi\", \"ll\" -> 2", LINE_INFO() );
		}
	};
}