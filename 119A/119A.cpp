#include <cstdio>

using namespace std;

int min( int a, int b ) {
	if ( a <= b ) {
		return a;
	}
	else {
		return b;
	}
}

int gcommon( int a, int b ) {
	if ( a == 0 && b == 0 ) {
		return 0;
	}
	if ( a == 0 || b == 0 ) {
		return 1;
	}
	int maxi = 1;

	for ( int i = 1; i <= min( a, b ); ++i ) {
		if ( a % i == 0 && b % i == 0 ) {
			if ( i > maxi ) {
				maxi = i;
			}
		}
	}
	return maxi;
}

int main() {
	int a, b, n;
	fscanf( stdin, "%d%d%d", &a, &b, &n );
	int turn = 2, com;
	while ( n >= 0 ) {
		if ( turn % 2 == 0 ) {
			com = gcommon( a, n );
			n = n - com;
			if ( n < 0 ) {
				fprintf( stdout, "1" );
			}
		}
		else {
			com = gcommon( b, n );
			n = n - com;
			if ( n < 0 ) {
				fprintf( stdout, "0" );
			}
		}
		++turn;
	}

	return 0;
}
