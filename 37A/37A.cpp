#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int N;
	fscanf( stdin, "%d", &N );
	int i, A[ N ], j;

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d", A + i );
	}

	sort( A, A + N );
	int count = 0, max = 1, curr = 1;
	

	for ( i = N - 1; i >= 0; --i ) {
		for ( j = i - 1; j >= 0; --j ) {
			if ( A[ j ] == A[ i ] ) {
				++curr;
			}
			else {
				break;
			}
		}
		if ( curr > max ) {
			max = curr;
		}
		curr = 1;
		i = j + 1;
		++count;
	}
	fprintf( stdout, "%d %d\n", max, count );

	return 0;
}
