#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int n, m;
	fscanf( stdin, "%d%d", &n, &m );
	int i, j, min, count = 0;
	if ( n < m ) {
		min = n;
	}
	else {
		min = m;
	}

	for ( i = 0; i <= min; ++i ) {
		for ( j = 0; j <= min; ++j ) {
			if ( pow( i, 2 ) + j == n && i + pow( j, 2 ) == m ) {
				++count;
			}
		}
	}
	fprintf( stdout, "%d\n", count );

	return 0;
}
