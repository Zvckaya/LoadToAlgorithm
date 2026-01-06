#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> v;
int max_v = 0;

int sum_v(const vector<int>& a)
{
	int sum = 0;
	for (int i = 1; i < a.size(); i++)
	{
		sum += abs(a[i - 1] - a[i]);
	}
	return sum;
}


//void search() {
//	if ((int)t.size() == N) {
//		max_v = max(max_v, sum_v(t));
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (used[i]) continue;
//		used[i] = true;
//		t.push_back(v[i]);
//		search();
//		t.pop_back();
//		used[i] = false;
//	}
//}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());
	int ans = 0;

	do {
		ans = max(ans, sum_v(v));
	} while (next_permutation(v.begin(), v.end()));

	cout << ans << '\n';

	return 0;
	
}