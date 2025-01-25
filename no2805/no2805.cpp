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
    long long M;
    cin >> N >> M;

    vector<long long> tree(N);
    for (int i = 0; i < N; i++) {
        cin >> tree[i];
    }

    sort(tree.begin(), tree.end());

    long long left = 0;
    long long right = tree[N - 1]; 

    long long result = 0;

    while (left <= right) {
        long long mid = (left + right) / 2;

        // sum must be long long
        long long sum = 0;
        for (int i = 0; i < N; i++) {
            if (tree[i] > mid) {
                sum += tree[i] - mid;
            }
        }

        if (sum < M) {
            right = mid - 1;
        }
        else {
            result = mid;
            left = mid + 1;
        }
    }

    cout << result << "\n";
    return 0;
}
