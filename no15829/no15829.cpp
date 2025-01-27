#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int L;
	cin >> L;
	string s;
	cin >> s;
	long long hash = 0;
	long long r = 1;
	long long M = 1234567891;
	for (int i = 0; i < L; i++) {
		hash += (s[i] - 'a' + 1) * r;
		r *= 31;
		r %= M;
		hash %= M;
	}
	cout << hash << '\n';
	return 0;
}

