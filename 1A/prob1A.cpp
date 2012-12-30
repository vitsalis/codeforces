#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	long long int n, m, a;

	cin >> n >> m >> a;

	long long int count = 0;
	for ( long int i = n; i > 0; i -= a ) {
		count += m / a;
		if ( m % a > 0 ) {
			++count;
		}
	}
	cout << count << "\n";
	return 0;
}
