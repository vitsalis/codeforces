#include <cstdio>

using namespace std;

int main() {
	int N, i, j;
	fscanf( stdin, "%d", &N );
	int X[ N ], Y[ N ];
	int count = 0;
	int found = 0;

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d%d", X + i, Y + i );
	}

	for ( i = 0; i < N; ++i ) {
		for ( j = 0; j < N; ++j ) {
			if ( X[ j ] > X[ i ] && Y[ j ] == Y[ i ] ) {
				found = 1;
				break;
			}
		}
		if ( !found ) {
			continue;
		}
		found = 0;
		for ( j = 0; j < N; ++j ) {
			if ( X[ j ] < X[ i ] && Y[ j ] == Y[ i ] ) {
				found = 1;
				break;
			}
		}
		if ( !found ) {
			continue;
		}
		found = 0;
		for ( j = 0; j < N; ++j ) {
			if ( X[ j ] == X[ i ] && Y[ j ] < Y[ i ] ) {
				found = 1;
				break;
			}
		}
		if ( !found ) {
			continue;
		}
		found = 0;
		for ( j = 0; j < N; ++j ) {
			if ( X[ j ] == X[ i ] && Y[ j ] > Y[ i ] ) {
				found = 1;
				break;
			}
		}
		if ( !found ) {
			continue;
		}
		found = 0;
		++count;
	}
	fprintf( stdout, "%d", count );
}
