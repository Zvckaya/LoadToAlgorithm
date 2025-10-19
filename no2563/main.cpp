#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	int sum = 0;
	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++) {

		int x, y;
		if (i == 0) {
			cin >> x >> y;
			v[i] = { x,y };
			sum += 100;
		}
		else {
			cin >> x >> y;
			v[i] = { x,y };
			for (int j = 0; j < i; j++) {
				if (abs(v[j].first - x) < 10) {
					if (abs(v[j].second - y) < 10) {
						int a = 10-abs(v[j].first - x);
						int b = 10-abs(v[j].second - y);
						sum += 100 - (a*b);
					}
					
				}
				else {
					sum += 100;
				}
			}
		}
	}

	cout << sum;


}