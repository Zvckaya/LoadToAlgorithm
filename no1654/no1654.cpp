#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, N;
    cin >> K >> N;
    vector<long long> arr(K);
    long long maxLen = 0;
    for (int i = 0; i < K; i++) {
        cin >> arr[i];
        if (arr[i] > maxLen) {
            maxLen = arr[i];
        }
    }

    long long left = 1;
    long long right = maxLen;
    long long answer = 0;

    while (left<=right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;

        for (int i = 0; i < K; i++) {
            sum += arr[i] / mid;
        }

        if (sum >= N) {
            answer = mid;
            left = mid + 1;
        }
        else {
            right = mid - 1;

        }

    }
    cout << answer;


  
}

