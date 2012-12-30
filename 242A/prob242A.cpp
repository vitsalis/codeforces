#include <cstdio>

using namespace std;

int main() {
	int x, y, a, b;
	int i, j;
	fscanf( stdin, "%d%d%d%d", &x, &y, &a, &b );
	int count = 0;
	for ( i = a; i <= x; ++i ) {
		for ( j = b; j <= y; ++j ) {
			if ( i > j ) {
				++count;
			}
		}
	}
	fprintf( stdout, "%d\n", count );

	for ( i = a; i <= x; ++i ) {
		for ( j = b; j <= y; ++j ) {
			if ( i > j ) {
				fprintf( stdout, "%d %d\n", i, j );
			}
		}
	}
	return 0;
}
