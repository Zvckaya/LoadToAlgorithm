//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int decompressString(string s) {
//    int tmp = 0;
//
//
//    bool isMulti = false;
//
//    for (int i = s.length()-1; i >= 0; i--) {
//        if (isMulti) {
//            tmp = (s[i] - '0') * tmp;
//            isMulti = false;
//        }
//        else {
//            if (isdigit(s[i])) {
//                tmp++;
//            }
//            else if (s[i] == '(') {
//                isMulti = true;
//                continue;
//            }
//        }
//   }
//
//    return tmp;
//}
//
//int main() {
//    string s;
//    cin >> s;
//    cout << decompressString(s) << endl;
//    return 0;
//}
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int decompressLength(const string& s) {
    stack<int> stackLength;
    stack<int> stackRepeat;
    int length = 0;
    int i = 0;

    while (i < s.length()) {
        char c = s[i];

        if (isdigit(c)) {
            int repeat = c - '0';
            if (i + 1 < s.length() && s[i + 1] == '(') {
                stackRepeat.push(repeat);
                stackLength.push(length);
                length = 0;
                i++;
            }
            else {
                length++;
            }
        }
        else if (c == ')') {
            int repeat = stackRepeat.top();
            stackRepeat.pop();
            length = stackLength.top() + repeat * length;
            stackLength.pop();
        }
        else {
            length++;
        }
        i++;
    }

    return length;
}

int main() {
    string input;
    cout << "압축된 문자열을 입력하세요: ";
    getline(cin, input);

    int result = decompressLength(input);
    cout << "압축 해제한 문자열의 길이: " << result << endl;

    return 0;
}