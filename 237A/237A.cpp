#include <cstdio>

using namespace std;

int main() {
	int N;

	fscanf( stdin, "%d", &N );
	int i, curr = 1, count = 1;
	int h[ N ], m[ N ];

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d%d", h + i, m + i );
	}

	for ( i = 0; i < N - 1; ++i ) {
		if ( h[ i ] == h[ i + 1 ] && m[ i ] == m[ i + 1 ] ) {
			++curr;
		}
		else {
			curr = 1;
		}
		if ( curr > count ) {
			count = curr;
		}
	}
	fprintf( stdout, "%d\n", count );

	return 0;
}
