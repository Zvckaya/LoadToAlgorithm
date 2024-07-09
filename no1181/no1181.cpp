#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareWord(string a, string b) {
    if (a.length() == b.length())
        return a < b;
    return a.length() < b.length();
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    vector<string> arr;

    for (int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;
        if (find(arr.begin(), arr.end(), tmp) == arr.end()) {
            arr.push_back(tmp);
        }
    }

    sort(arr.begin(), arr.end(), compareWord);

    for (const auto& word : arr) {
        cout << word << "\n";
    }

    return 0;
}
