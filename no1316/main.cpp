

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n;
    cin >> n;
    int a = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        vector<char> v;

        bool t = true;
        for (int j = 0; j < s.size(); j++) {

            if (j == 0) {
                v.push_back(s[j]);
            }
            else {
                if (s[j - 1] == s[j]) {
                    continue;
                }
                else {
                    auto f =find(v.begin(), v.end(),s[j]);
                    if (f == v.end()) {
                        v.push_back(s[j]);
                        continue;
                    }
                    else {
                        t = false;
                    }
                }
            }
          
        }
        if (t != false) {
            a++;
        }

    }

    cout << a;

}