#include <cstdio>

using namespace std;


int main() {
	int k, l, m, n, d;
	int fcount = 0;

	fscanf( stdin, "%d%d%d%d%d", &k, &l, &m, &n, &d );

	for ( int i = 1; i <= d; ++i ) {
		if ( i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0 ) {
			++fcount;
		}
	}

	fprintf( stdout, "%d", fcount );

	return 0;
}
