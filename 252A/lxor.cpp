#include <cstdio>

using namespace std;

int main() {
	int N, i;
	fscanf( stdin, "%d", &N );
	int A[ N ];

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d", A + i );
	}
	int max = 0;
	int sum;

	for ( i = 0; i < N; ++i ) {
		sum = A[ i ];
		if ( sum > max ) {
			max = sum;
		}
		for ( int j = i + 1; j < N; ++j ) {
			sum ^= A[ j ];
			if ( sum > max ) {
				max = sum;
			}
		}
		if ( sum > max ) {
			max = sum;
		}
	}
	fprintf( stdout, "%d\n", max );
}
