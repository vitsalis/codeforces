#include <cstdio>
#include <cctype>

using namespace std;

int main() {
	char s[ 100 ];
	int flow = 0, low = 0, up = 0;
	char c;
	fscanf( stdin, "%s", s );
	int i;

	for ( i = 0; s[ i ] != '\0'; ++i ) {
		c = s[ i ];
		if ( islower( s[ i ] ) && i == 0 ) {
			++flow;
		}
		else  if ( islower( c ) ) {
			++low;
		}
		else if ( isupper( c ) ) {
			++up;
		}
	}
	if ( flow == 1 && up > 0 && low == 0 ) {
		for ( i = 0; s[ i ] != '\0'; ++i ) {
			if ( islower( s[ i ] ) ) {
				fprintf( stdout, "%c", toupper( s[ i ] ) );
			}
			if ( isupper( s[ i ] ) ) {
				fprintf( stdout, "%c", tolower( s[ i ] ) );
			}
		}
	}
	else if ( flow == 0 && low == 0 && up > 0 ) {
		for ( i = 0; s[ i ] != '\0'; ++i ) {
			fprintf( stdout, "%c", tolower( s[ i ] ) );
		}
	}
	else if ( flow == 1 && low == 0 && up == 0 ) {
		fprintf( stdout, "%c", toupper( s[ 0 ] ) );
	}
	else if ( flow == 0 && low == 0 && up == 1 ) {
		fprintf( stdout, "%c", tolower( s[ 0 ] ) );
	}
	else {
		fprintf( stdout, "%s", s );
	}
	return 0;
}
