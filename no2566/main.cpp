#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int mi = 0, mj = 0;


	vector<vector<int>> v(9, vector<int>(9));

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> v[i][j];
		}
	}

	int max = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (v[i][j]>=max) {
				max = v[i][j];
				mi = i; mj=j;
			}
		}
	}

	cout << max << endl;
	cout << mi+1 << " " << mj+1;

}