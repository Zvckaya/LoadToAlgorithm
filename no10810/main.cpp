#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> v(n, 0);
	int m;
	cin >> m;
	for (int q = 0; q < m; q++) {
		int i, j, k;
		cin >> i >> j >> k;
		for (int z = i-1; z < j; z++) {
			v[z] = k;
		}
	}

	for (auto i : v) {
		cout << i << " ";
	}

}