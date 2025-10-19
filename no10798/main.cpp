#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> s(15);

	for (int i = 0; i < 5; i++) {
		string t;
		cin >> t;
		for (int j = 0; j < t.size(); j++) {
			s[j].push_back(t[j]);
		}
	}

	for (auto q : s) {
		cout << q;
	}



}