#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long K;  
    cin >> N >> K;

    vector<long long> coin(N);
    for (int i = 0; i < N; i++) {
        cin >> coin[i];
    }

    long long ans = 0;
    for (int i = N - 1; i >= 0; i--) {
        if (K == 0) break;
     
        if (coin[i] <= K) {
            long long countUse = K / coin[i]; 
            ans += countUse;
            K -= countUse * coin[i];
        }
    }

    cout << ans << "\n";
    return 0;
}