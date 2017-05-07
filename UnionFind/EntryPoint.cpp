#include "stdafx.h"

void ExecuteFromFile( string );
void ExecuteManually();

int main()
{
	ExecuteFromFile( "Data\\TinyUF.txt" );

	cout << "Press ENTER to continue...";

	cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n' );
}

void ExecuteFromFile( string filePath )
{
	std::ifstream ifstream;
	ifstream.open( filePath, std::ios::in );

	int max;
	string size;
	std::getline( ifstream, size );
	std::istringstream( size ) >> max;

	auto uf = UnionFind( max );

	string command;
	int l, r;

	while( std::getline( ifstream, command ) )
	{
		std::vector<string> parts;
		split( command, ' ', parts );

		std::istringstream ( parts.at(0) ) >> l;
		std::istringstream ( parts.at(1) ) >> r;

		uf.join( l, r );

		cout << "connect ( " << l << ", " << r << " )" << std::endl;
	}
	
	cout << std::endl << "final: "; uf.display(); cout << std::endl;
}

void ExecuteManually()
{
	auto uf = UnionFind( 10 );

	uf.join( 4, 3 );
	uf.join( 3, 8 );
	uf.join( 6, 5 );

	uf.display();

	uf.join( 7, 8 );

	uf.display();

	uf.join( 7, 9 );

	uf.join( 2, 8 );
	uf.join( 0, 5 );

	uf.display();

	uf.join( 1, 9 );
}