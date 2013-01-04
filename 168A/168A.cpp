#include <cstdio>

using namespace std;

int main() {
	int n, x, y;

	fscanf( stdin, "%d%d%d", &n, &x, &y );


	if ( ( n * y ) % 100 == 0 ) {
		n = ( n * y ) / 100;
	}
	else {
		n = ( ( n * y ) / 100 ) + 1;
	}
	if ( n - x > 0 ) {
		fprintf( stdout, "%d\n", n - x );
	}
	else {
		fprintf( stdout, "0\n" );
	}

	return 0;
}
