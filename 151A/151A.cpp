#include <cstdio>

using namespace std;

int min( int a, int b ) {
	if ( a > b ) {
		return b;
	}
	else {
		return a;
	}
}

int main() {
	int n, k, l, c, d, p, nl, np;
	fscanf( stdin, "%d%d%d%d%d%d%d%d", &n, &k, &l, &c, &d, &p, &nl, &np );
	k *= l;
	c *= d;
	k = k / nl;
	p = p / np;
	int a = min( k, p );
	a = min( a, c );

	fprintf( stdout, "%d\n", a / n );

	return 0;
}
