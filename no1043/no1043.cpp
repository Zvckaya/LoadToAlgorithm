#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M; 
    cin >> N >> M;

    int t;
    cin >> t;
    vector<bool> known(N + 1, false); 

    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        known[x] = true;
    }

    vector<vector<int>> parties(M);
    for (int i = 0; i < M; i++) {
        int cnt;
        cin >> cnt;
        parties[i].resize(cnt);
        for (int j = 0; j < cnt; j++) {
            cin >> parties[i][j];
        }
    }

    bool changed = true;

    while (changed) {
        changed = false;
        for (int i = 0; i < M; i++) {
            bool hasKnown = false;
            for (int person : parties[i]) {
                if (known[person]) {
                    hasKnown = true;
                    break;
                }
            }
            if (hasKnown) {
                for (int person : parties[i]) {
                    if (!known[person]) {
                        known[person] = true;
                        changed = true;
                    }
                }
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < M; i++) {
        bool hasKnown = false;
        for (int person : parties[i]) {
            if (known[person]) {
                hasKnown = true;
                break;
            }
        }
        if (!hasKnown) answer++;
    }

    cout << answer << "\n";
    return 0;
}