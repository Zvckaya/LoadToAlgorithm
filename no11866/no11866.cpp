#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    cin >> N >> K;
    queue<int> myQueue;

    for (int i = 1; i <= N; i++) {
        myQueue.push(i);
    }

    vector<int> result;

    while (!myQueue.empty()) {
        for (int i = 1; i < K; i++) {
            myQueue.push(myQueue.front());
            myQueue.pop();
        }
        result.push_back(myQueue.front());
        myQueue.pop();
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << result[i];
    }
    cout << ">" << endl;

    return 0;
}
