#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;
	int temp, m;

	for (int i = 0; i < 3; i++) {
		cin >> temp;
		v.push_back(temp);
	}
	m = *max_element(v.begin(), v.end());

	set<int> s(v.begin(), v.end());

	if (s.size() == 3) {
		cout << m * 100;
	}
	else if (s.size() == 1) {
		cout << 10000 + m * 1000;
	}
	else {
		if (v[0] == v[1]) {
			cout << 1000 + v[0] * 100;
		}
		else if(v[0] == v[2]){
			cout << 1000 + v[0] * 100;
		}
		else {
			cout << 1000 + v[1] * 100;
		}
	}
	
}