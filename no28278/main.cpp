#include <string>
#include <stack>
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    stack<int> s;
    string out;
    out.reserve(N * 3); // 대충 여유롭게 예약(선택)

    for (int i = 0; i < N; ++i) {
        int cmd;
        cin >> cmd;
        if (cmd == 1) {
            int x; cin >> x;
            s.push(x);
        }
        else if (cmd == 2) {
            if (s.empty()) out += "-1\n";
            else { out += to_string(s.top()) + '\n'; s.pop(); }
        }
        else if (cmd == 3) {
            out += to_string((int)s.size()) + '\n';
        }
        else if (cmd == 4) {
            out += (s.empty() ? "1\n" : "0\n");
        }
        else if (cmd == 5) {
            if (s.empty()) out += "-1\n";
            else out += to_string(s.top()) + '\n';
        }
    }
    cout << out;
    return 0;
}
