#include "stdafx.h"

void ExecuteFromFile( string );
void ExecuteManually();

using namespace std;

int main()
{
    ExecuteFromFile( "Data\\MediumUF.txt" );

    cout << "Press ENTER to continue...";

    cin.ignore( numeric_limits<streamsize>::max(), '\n' );
}

void ExecuteFromFile( string filePath )
{
    ifstream ifstream;
    ifstream.open( filePath, ios::in );

    int max;
    string size;
    getline( ifstream, size );
    istringstream( size ) >> max;

    auto uf = UnionFind( max );

    string command;
    int l, r;

    while( getline( ifstream, command ) )
    {
        vector<string> parts;
        split( command, ' ', parts );

        istringstream( parts.at( 0 ) ) >> l;
        istringstream( parts.at( 1 ) ) >> r;

        uf.join( l, r );

        cout << "connect ( " << l << ", " << r << " )" << endl;
    }

    cout << endl << "final: ";
    uf.display();
    cout << endl;
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
