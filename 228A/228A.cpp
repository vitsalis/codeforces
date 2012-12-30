#include <cstdio>

using namespace std;

int main() {
	long long int A[ 4 ];
	int i;
	int tr = 0;
	int count = 0;

	for ( i = 0; i < 4; ++i ) {
		fscanf( stdin, "%I64d", A + i );
	}

	for ( i = 0; i < 4; ++i ) {
		for ( int j = i + 1; j < 4; ++j ) {
			if ( A[ i ] == A[ j ] ) {
				++count;
				A[ j ] == tr;
				--tr;
				break;
			}
		}
	}

	fprintf( stdout, "%d", count );
	return 0;
}
