#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int N, A[ 12 ];
	fscanf( stdin, "%d", &N );
	int i, sum = 0;

	if ( N == 0 ) {
		fprintf( stdout, "0" );
		return 0;
	}

	for ( i = 0; i < 12; ++i ) {
		fscanf( stdin, "%d", A + i );
	}

	sort( A, A + 12 );
	for ( i = 11; i >= 0; --i ) {
		sum += A[ i ];
		if ( sum >= N ) {
			fprintf( stdout, "%d", 12 - i );
			break;
		}
	}
	if ( sum < N ) {
		fprintf( stdout, "-1" );
	}

	return 0;
}
