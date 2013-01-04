#include <cstdio>

using namespace std;

int main() {
	int n, m, i;
	fscanf( stdin, "%d%d", &n, &m );

	for ( i = 1; m - i >= 0; ++i ) {
		m -= i;

		if ( i == n ) {
			i = 0;
		}
	}
	fprintf( stdout, "%d\n", m );

	return 0;
}
