#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
vector<int> A;

bool exist(int x) {
    int lo = 0, hi = n - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (A[mid] == x)
            return true;
        else {
            if (A[mid] < x) {
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    A.resize(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    cin >> m;
    vector<int> B(m, 0);
    for (int i = 0; i < m; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < m; i++) {
        cout << (exist(B[i]) ? "1\n" : "0\n");
    }



}