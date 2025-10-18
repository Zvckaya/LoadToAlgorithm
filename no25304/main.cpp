#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x;
	int n;
	int sum = 0;
	vector<pair<int, int>> gadget;
	cin >> x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int price, cnt;
		cin >> price >> cnt;
		gadget.push_back({ price,cnt });
	}

	for (int i = 0; i < n; i++) {
		sum += gadget[i].first * gadget[i].second;
	}
	if (sum == x) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	


}
