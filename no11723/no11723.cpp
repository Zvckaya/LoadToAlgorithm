#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M;
    cin >> M;

    // 인덱스 1~20 사용 (0번 인덱스는 안 씀)
    bool arr[21] = { false, };

    while (M--) {
        string cmd;
        cin >> cmd;

        if (cmd == "add") {
            int x;
            cin >> x;
            arr[x] = true;
        }
        else if (cmd == "remove") {
            int x;
            cin >> x;
            arr[x] = false;
        }
        else if (cmd == "check") {
            int x;
            cin >> x;
            cout << (arr[x] ? 1 : 0) << "\n";
        }
        else if (cmd == "toggle") {
            int x;
            cin >> x;
            arr[x] = !arr[x];
        }
        else if (cmd == "all") {
            for (int i = 1; i <= 20; i++) {
                arr[i] = true;
            }
        }
        else if (cmd == "empty") {
            for (int i = 1; i <= 20; i++) {
                arr[i] = false;
            }
        }
    }
    return 0;
}
