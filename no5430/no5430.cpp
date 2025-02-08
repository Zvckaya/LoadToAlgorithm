#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while (T--) {
        string p;   
        cin >> p;

        int n;      
        cin >> n;

        string arr;
        cin >> arr;  

        deque<int> dq;

        if (n > 0) {
   
            string inside = arr.substr(1, arr.size() - 2);
  
            int start = 0;
            for (int i = 0; i < (int)inside.size(); i++) {
                if (inside[i] == ',') {
                    // substring [start..i-1]
                    dq.push_back(stoi(inside.substr(start, i - start)));
                    start = i + 1;
                }
            }
            dq.push_back(stoi(inside.substr(start)));
        }

        bool reversed = false; 
        bool errorFlag = false;

        for (char func : p) {
            if (func == 'R') {
           
                reversed = !reversed;
            }
            else if (func == 'D') {
         
                if (dq.empty()) {
            
                    errorFlag = true;
                    break;
                }
                else {
                    if (!reversed) {
                        dq.pop_front();
                    }
                    else {
                        dq.pop_back();
                    }
                }
            }
        }

        if (errorFlag) {
            cout << "error\n";
        }
        else {
        
            if (!reversed) {
            
                cout << "[";
                for (int i = 0; i < (int)dq.size(); i++) {
                    cout << dq[i];
                    if (i < (int)dq.size() - 1) cout << ",";
                }
                cout << "]\n";
            }
            else {
               
                cout << "[";
                for (int i = (int)dq.size() - 1; i >= 0; i--) {
                    cout << dq[i];
                    if (i > 0) cout << ",";
                }
                cout << "]\n";
            }
        }
    }
    return 0;
}