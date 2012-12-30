#include <cstdio>

using namespace std;

int main() {
	long long int a, b, n;
	long long int num;

	fscanf( stdin, "%I64d%I64d%I64d", &a, &b, &n );
	num = a * 10;
	long long int res = 0;

	for ( int i = 0; i <= 9; ++i ) {
		if ( ( num + i ) % b == 0 ) {
			res = num + i;
		}
	}
	if ( res ) {
		fprintf( stdout, "%I64d", res );
		for ( int j = 0; j < n - 1; ++j ) {
			fprintf( stdout, "0" );
		}
	}
	else {
		fprintf( stdout, "-1" );
	}
	return 0;
}
