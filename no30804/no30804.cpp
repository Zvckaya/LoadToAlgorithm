#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main()
{
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    vector<int> count(10, 0);
    int distance = 0;
    int left = 0;
    int answer = 0;

    for (int right = 0; right < N; right++) {
        int fruitR = S[right];

        if (count[fruitR] == 0)distance++;
        count[fruitR]++;

        while (distance > 2) {
            int fruitL = S[left];
            count[fruitL]--;
            if (count[fruitL] == 0)distance--;
            left++;
        }

        answer = max(answer, right - left + 1);
    }

   
    cout << answer;

}

