#include <cstdio>

using namespace std;

int main() {
	int N, i;

	fscanf( stdin, "%d", &N );
	int A[ N ];
	int max, min;
	int count = 0;

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d", A + i );
	}
	max = A[ 0 ];
	min = A[ 0 ];

	for ( i = 1; i < N; ++i ) {
		if ( A[ i ] > max ) {
			++count;
			max = A[ i ];
		}
		else if ( A[ i ] < min ) {
			++count;
			min = A[ i ];
		}
	}
	fprintf( stdout, "%d", count );

	return 0;
}
