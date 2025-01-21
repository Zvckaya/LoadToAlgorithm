#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main()
{
	int T;
	cin >> T;
	vector<vector<int>> apart(15, vector<int>(15, 0));

	for (int i = 0; i < 15; i++) {
		apart[i][0] = 1;
		apart[0][i] = i + 1;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			apart[i][j] = apart[i - 1][j] + apart[i][j - 1];
		}
	}


	for (int i = 0; i < T; i++) {
		int k, n;
		cin >> k >> n;
		cout << apart[k][n - 1] << '\n';
	}
	return 0;

} 

