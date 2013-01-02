#include <cstdio>

using namespace std;

int main() {
	int N;
	int i, j;

	fscanf( stdin, "%d", &N );

	for ( i = 0; i <= N; ++i ) {
		for ( j = 0; j < N - i; ++j ) {
			fprintf( stdout, "  " );
		}

		for ( j = i; j >= 0; --j ) {
			if ( i == 0 ) {
				fprintf( stdout, "%d", i - j );
			}
			else {
				fprintf( stdout, "%d ", i - j );
			}
		}

		for ( j = 1; j <= i; ++j ) {
			if ( i - j == 0 ) {
				fprintf( stdout, "0" );
			}
			else {
				fprintf( stdout, "%d ", i - j );
			}
		}
		fprintf( stdout, "\n" );
	}
	for ( i = N - 1; i >= 0; --i ) {
		for ( j = 0; j < N - i; ++j ) {
			fprintf( stdout, "  " );
		}

		for ( j = i; j >= 0; --j ) {
			if ( i == 0 ) {
				fprintf( stdout, "%d", i - j );
			}
			else {
				fprintf( stdout, "%d ", i - j );
			}
		}

		for ( j = 1; j <= i; ++j ) {
			if ( i - j == 0 ) {
				fprintf( stdout, "0" );
			}
			else {
				fprintf( stdout, "%d ", i - j );
			}
		}
		fprintf( stdout, "\n" );
	}

	return 0;
}
