#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<int>> v(100, vector<int>(100, 0));

	int n = 0, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		for (int yi = y; yi < y + 10; yi++) {
			for (int xi = x; xi < x + 10; xi++) {
				if (v[xi][yi] != 1) {
					v[xi][yi] = 1;
				}
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (v[i][j] == 1)
				cnt++;
		}
	}
	cout << cnt;

}