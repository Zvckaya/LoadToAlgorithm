#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a, s, d; // 범위 시작, 범위 종료, 선택자 
        cin >> a >> s >> d;

        // 0-based index로 변환
        vector<int> copy_arr(arr.begin() + a - 1, arr.begin() + s);

        sort(copy_arr.begin(), copy_arr.end());

        cout << copy_arr[d - 1] << endl; // 0-based index로 접근
    }

    return 0;
}
