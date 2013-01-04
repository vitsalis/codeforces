#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n;
	fscanf( stdin, "%d", &n );
	int i, j, nfound = 0;
	char c, A[ n * 2 + 1];
	fscanf( stdin, "%s", A );
	int a[ n ], b[ n ];

	for ( i = 0; i < n; ++i ) {
		a[ i ] = A[ i ] - '0';
	}
	for ( i = n, j = 0; i < n * 2; ++i, ++j ) {
		b[ j ] = A[ i ] - '0';
	}
	sort( a, a + n );
	sort( b, b + n );

	for ( i = n - 1; i >= 0; --i ) {
		if ( a[ i ] <= b[ i ] ) {
			break;
		}
		if ( i - 1 == -1 ) {
			fprintf( stdout, "YES\n" );
			return 0;
		}
	}

	for ( i = n - 1; i >= 0; --i ) {
		if ( a[ i ] >= b[ i ] ) {
			break;
		}
		if ( i - 1 == - 1 ) {
			fprintf( stdout, "YES\n" );
			return 0;
		}
	}
	fprintf( stdout, "NO\n" );

	return 0;
}
