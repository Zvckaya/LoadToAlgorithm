#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<vector<int>> v1;
	vector<vector<int>> v2;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			v1[j].push_back ( temp);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			v2[j].push_back(temp);
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
		
			v1[j][i] += v2[j][i];
		}
	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << v1[j][i];
		}
		cout << endl;
	}



}
