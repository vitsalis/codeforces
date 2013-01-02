#include <cstdio>

using namespace std;

int check( int num ) {
	int i;

	while ( num > 0 ) {
		i = num % 10;
		if ( i != 4 && i != 7 ) {
			return 0;
		}
		num = num / 10;
	}
	return 1;
}

int main() {
	int num;

	fscanf( stdin, "%d", &num );
	int A[ 1000 ], pos = 0;
	int i;

	for ( i = 1; i <= num; ++i ) {
		if ( check( i ) ) {
			A[ pos ] = i;
			++pos;
		}
	}

	for ( i = pos - 1; i >= 0; --i ) {
		if ( num % A[ i ] == 0 ) {
			fprintf( stdout, "YES\n" );
			return 0;
		}
	}

	fprintf( stdout, "NO\n" );

	return 0;
}
