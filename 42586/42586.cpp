#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;

    for (int i = 0; i < (int)progresses.size(); ++i) {
        int remain = 100 - progresses[i];
        int days = (remain + speeds[i] - 1) / speeds[i];
        q.push(days);
    }

    while (!q.empty()) {
        int cur = q.front(); 
        q.pop();
        int cnt = 1;
        while (!q.empty() && q.front() <= cur) {
            q.pop();
            ++cnt;
        }
        answer.push_back(cnt);
    }
    return answer;
}

int main() {
    auto r1 = solution({ 93, 30, 55 }, { 1, 30, 5 });
    auto r2 = solution({ 95, 90, 99, 99, 80, 99 }, { 1, 1, 1, 1, 1, 1 });

    for (int x : r1) cout << x << ' '; // 2 1
    cout << '\n';
    for (int x : r2) cout << x << ' '; // 1 3 2
    cout << '\n';
    return 0;
}