#include <cstdio>

using namespace std;

int len( char* a ) {
	int count;
	for ( int i = 0; a[ i ] != '\0'; ++i ) {
		++count;
	}
	return count;
}

int main() {
	char a[ 101 ], b[ 101 ], c[ 101 ];
	int found = 0, i, j;

	fscanf( stdin, "%s%s%s", a, b, c );

	if ( len( a ) + len( b ) != len( c ) ) {
		fprintf( stdout, "NO" );
		return 0;
	}

	for ( i = 0; c[ i ] != '\0'; ++i ) {
		for ( j = 0; a[ j ] != '\0'; ++j ) {
			if ( c[ i ] == a[ j ] ) {
				found = 1;
				a[ j ] = 1;
				break;
			}
		}
		if ( !found ) {
			for ( j = 0; b[ j ] != '\0'; ++j ) {
				if ( c[ i ] == b[ j ] ){
					found = 1;
					b[ j ] = 1;
					break;
				}
			}
		}
		if ( !found ) {
			fprintf( stdout, "NO" );
			return 0;
		}
		found = 0;
	}
	fprintf( stdout, "YES" );

	return 0;
}
