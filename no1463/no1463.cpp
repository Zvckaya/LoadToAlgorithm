
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> dp(n + 1); // n개보다 1개 많아야함
    
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1); // 나누기 +1 보다 작은가? 즉 1번에 2가 나오는가
        if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
    }

    cout << dp[n];
  
}

