#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;

    vector<int> score(N + 1);
    vector<int> dp(N + 1);

    for (int i = 1; i <= N; i++) {
        cin >> score[i];
    }

    // 초기화
    dp[0] = 0;
    dp[1] = score[1];
    if (N >= 2) {
        dp[2] = score[1] + score[2];
    }

    // 점화식
    for (int i = 3; i <= N; i++) {
        dp[i] = max(dp[i - 2] + score[i],
            dp[i - 3] + score[i - 1] + score[i]);
    }

    cout << dp[N] << "\n";





}

