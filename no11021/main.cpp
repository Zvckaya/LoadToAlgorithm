#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
	
}