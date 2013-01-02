#include <cstdio>

using namespace std;

int main() {
	char s[ 201 ];
	int i;

	fscanf( stdin, "%s", s );

	for ( i = 0; s[ i ] != '\0'; ++i ) {
		if ( s[ i ] == 'W' ) {
			if ( s[ i + 1 ] == 'U' && s[ i + 2 ] == 'B' ) {
				s[ i ] = s[ i + 1 ] = s[ i + 2 ] = 1;
				i += 2;
			}
		}
	}
	int j;

	for ( i = 0; s[ i ] != '\0'; ++i ) {
		if ( s[ i ] != 1 ) {
			for ( j = i; s[ j ] != 1 && s[ j ] != '\0'; ++j ) {
				fprintf( stdout, "%c", s[ j ] );
			}
			fprintf( stdout, " " );
			i = j - 1;
		}
	}

	return 0;
}
