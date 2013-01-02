#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char rats[ 5 ] = "rat";
	char women[ 6 ] = "woman";
	char child[ 6 ] = "child";
	char captain[ 8 ] = "captain";
	char man[ 4 ] = "man";
	int N, i;
	fscanf( stdin, "%d", &N );
	char names[ N ][ 11 ], status[ N ][ 11 ];

	for ( i = 0; i < N; ++i ) {
		fscanf( stdin, "%s%s", names[ i ], status[ i ] );
	}
	for ( i = 0; i < N; ++i ) {
		if ( strcmp( status[ i ], rats ) == 0 ) {
			fprintf( stdout, "%s\n", names[ i ] );
		}
	}
	for ( i = 0; i < N; ++i ) {
		if ( strcmp( status[ i ], women ) == 0 || strcmp( status[ i ], child ) == 0 ) {
			fprintf( stdout, "%s\n", names[ i ] );
		}
	}
	for ( i = 0; i < N; ++i ) {
		if ( strcmp( status[ i ], man ) == 0 ) {
			fprintf( stdout, "%s\n", names[ i ] );
		}
	}
	for ( i = 0; i < N; ++i ) {
		if ( strcmp( status[ i ], captain ) == 0 ) {
			fprintf( stdout, "%s\n", names[ i ] );
		}
	}
	return 0;
}
