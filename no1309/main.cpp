#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int sum = 0;

    vector<int> v(N+1, 0);
    v[0] = 1;
    v[1] = 3;
    for (int i = 2; i <= N; ++i)
    {
        v[i] = (v[i - 1] * 2 + v[i - 2]) % 9901;

    }

    cout << v[N];

}