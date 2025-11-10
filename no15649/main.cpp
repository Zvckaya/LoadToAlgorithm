#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> v;
int N, M;
bool used[8] = { false, };

void search() {

	if (v.size() == M) {
		for (auto i : v) {
			cout << i << " ";
		}
		cout << "\n";
		return;
	}
	else {
	/*	for (int i = v.empty() ? 0 : v.back() + 1; i < N; i++) {

		}*/
		for (int i = 0; i < N; i++) {
			if (!v.empty() && (v.back() >= i + 1))
				continue;
			v.push_back(i + 1);
			search();
			v.pop_back();
		}
		/*for (int i = 0; i < N; i++) {
			if (v.empty()) {
				v.push_back(i + 1);
				search();
				v.pop_back();
			}
			else {
				if (v.back() < i + 1) {
					v.push_back(i + 1);
					search();
					v.pop_back();
				}
			}
		}*/
	}
}


int main() {
	ios::sync_with_stdio(false);
	cout.tie(nullptr);

	cin >> N >> M;

	search();




}
