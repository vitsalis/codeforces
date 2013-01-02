#include <cstdio>

using namespace std;

int main() {
	char a[ 101 ], b[ 101 ];

	fscanf( stdin, "%s%s", a, b );

	for ( int i = 0; a[ i ] != '\0'; ++i ) {
		if ( a[ i ] - '0' == b[ i ] - '0' ) {
			fprintf( stdout, "0" );
		}
		else {
			fprintf( stdout, "1" );
		}
	}
	fprintf( stdout, "\n" );

	return 0;
}
