    #include <iostream>
    #include <vector>
    #include <algorithm>
    using namespace std;



    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int K, N;
        cin >> K >> N;

        int ans = 0;

        vector<long long> lines(K);
        for (int i = 0; i < K; i++) {
            cin >> lines[i];
        }
    
        sort(lines.begin(), lines.end());

        long long lo = 1;
        long long hi = *max_element(lines.begin(),lines.end());
        
        while (lo <=hi)
        {
            long long mid = lo + (hi - lo) / 2;
        
            int cnt = 0;
            for (int i = 0; i < K; i++) {
                cnt += lines[i] / mid;
            }
            if (cnt >= N) {
                ans = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }

        }
        cout << ans;
    }
