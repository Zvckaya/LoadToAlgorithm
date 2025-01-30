#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cmath>


using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int K;
    cin >> K;

    stack<long long> st;  

    while (K--) {
        long long x;
        cin >> x;
        if (x == 0) {
            if (!st.empty()) {
                st.pop();
            }
        }
        else {
            st.push(x);
        }
    }

    long long result = 0;
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    cout << result << "\n";
    return 0;
}
