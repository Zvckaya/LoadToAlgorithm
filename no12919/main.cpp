#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string S, T;
int ans = 0;

void Search(string cur) {
    if (ans == 1) return;

    if (cur.size() == S.size()) {
        if (cur == S) ans = 1;
        return;
    }

    if (!cur.empty() && cur.back() == 'A') { //A추가한거 
        string next = cur;
        next.pop_back();
        Search(next);
    }

    if (!cur.empty() && cur.front() == 'B') { //B 추가하고 뒤집은거 
        string next = cur;
        reverse(next.begin(), next.end());
        next.pop_back();
        Search(next);
    }

    //나머지는 말 안됨
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> S >> T;
    Search(T);
    cout << ans;
}
