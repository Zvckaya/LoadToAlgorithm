#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;

    unordered_set<string> noHear;

    for (int i = 0; i < N; i++) {
        string name;
        cin >> name;
        noHear.insert(name);
    }

    vector<string> result;
    result.reserve(M);

    for (int i = 0; i < M; i++) {
        string name;
        cin >> name;
        if (noHear.find(name) != noHear.end()) {
            result.push_back(name);
        }
    }

    sort(result.begin(), result.end());

    cout << result.size() << endl;
    for (auto& name : result) {
        cout << name << endl;
    }

    return 0;
}
