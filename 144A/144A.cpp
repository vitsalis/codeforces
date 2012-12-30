#include <cstdio>

using namespace std;

int A[ 100 ];

int findmin( int N ) {
	int min;
	min = A[ 0 ];

	for ( int i = 1; i < N; ++i ) {
		if ( A[ i ] < min ) {
			min = A[ i ];
		}
	}
	return min;
}

int findmax( int N ) {
	int max = A[ 0 ];
	for ( int i = 1; i < N; ++i ) {
		if ( A[ i ] > max ) {
			max = A[ i ];
		}
	}
	return max;
}

int binsearchi( int num, int N ) {
	int pos = -1;
	for ( int i = 0; i < N; ++i ) {
		if ( A[ i ] == num ) {
			pos = i;
		}
		if ( i == N - 1 ) {
			return pos;
		}
	}
	return -1;
}

int binsearchj( int num, int N ) {
	for ( int i = 0; i < N; ++i ) {
		if ( A[ i ] == num ) {
			return i;
		}
	}
	return -1;
}

int main() {
	int N, i;
	fscanf( stdin, "%d", &N );
	int count = 0;

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%d", A + i );
	}
	int min = findmin( N );
	int max = findmax( N );
	int save;
	i = binsearchi( min, N );

	while ( A[ N - 1 ] != min && i < N ) {
		save = A[ i + 1 ];
		A[ i + 1 ] = A[ i ];
		A[ i ] = save;
		++i;
		++count;
	}
	int j = binsearchj( max, N );
	while ( A[ 0 ] != max && j > -1 ) {
		save = A[ j - 1 ];
		A[ j - 1 ] = A[ j ];
		A[ j ] = save;
		--j;
		++count;
	}

	fprintf( stdout, "%d", count );
	return 0;
}
