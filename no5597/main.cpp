#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<bool> v(31,false);
	v[0] = true;
	for (int i = 0; i < 28; i++) {
		int temp;
		cin >> temp;
		v[temp] = true;
	}

	int min, max = 0;

	for (int i = 0; i < 31; i++) {
		if (!v[i]) {
			cout << i << endl;
		}
	}

	

}