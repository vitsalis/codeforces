#include <cstdio>
#include <cctype>

using namespace std;

int main() {
	char s[ 101 ];
	fscanf( stdin, "%s", s );
	char a[ 4 ] = "HQ9";

	for ( int i = 0; s[ i ] != '\0'; ++i ) {
		for ( int j = 0; j < 3; ++j ) {
			if ( s[ i ] == a[ j ] ) {
				fprintf( stdout, "YES" );
				return 0;
			}
		}
	}
	fprintf( stdout, "NO" );
	return 0;
}
