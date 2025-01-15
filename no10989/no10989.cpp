#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

static const int MAX_VAL = 10000;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> count(MAX_VAL + 1, 0);

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        count[x]++;
    }

    for (int i = 1; i <= MAX_VAL; i++) {
        while (count[i]--) {
            cout << i << "\n";
        }
    }

    return 0;
}
