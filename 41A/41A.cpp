#include <cstdio>

using namespace std;

int len( char *a ) {
	int i;
	for ( i = 0; a[ i ] != '\0'; ++i ) {
		;
	}
	return i - 1;
}

int main() {
	char a[ 101 ], b[ 101 ];
	fscanf( stdin, "%s%s", a, b );
	int max = len( a );
	int i, j;

	for ( i = 0, j = max; a[ i ] != '\0'; ++i, --j ) {
		if ( a[ i ] != b[ j ] ) {
			fprintf( stdout, "NO\n" );
			return 0;
		}
	}
	fprintf( stdout, "YES\n" );

	return 0;
}
