#include <iostream>
#include <string>
#include <stack>

using namespace std;

/*bool is_VPS(string s) {
	int result = 0;
	stack<char> st;
	for (auto ch : s) {
		st.push(ch);
	}


	for (int i = 0; i < s.length(); i++) {
		if (result > 0) {
			char ch = st.top();
			if (ch == '(')
				result++;
			else
				result--;
			st.pop();
		}
		else {
			return false;
		}
		
	}
	if (result == 0)
		return true;
	else {
		return false;
	}
}*/

bool is_VPS(string s) {
	stack<char> st;
	for (auto ch : s) {
		if (ch == '(') // ( 일경우 push
			st.push(ch);
		else if (ch == ')') // ) 일 경우 
			if (st.empty()==false && st.top() == '(') //스택이 비어있지 않은 상태에서 
				st.pop();   // 최상위가 (일 경우 pop
			else
				return false; // 아닐경우 fasle
	}
	return st.empty(); //모든 작업을 완료했을 때 스택이 비어있는가?
}

bool is_palindrome(string s) {
	for (int i = 0; i < s.length(); i++) { // 문자열의 길이만큼 반복 
		if (s[i] != s[s.length() - i - 1])
			// 길이인 문자열 7이 있을경우 
			// 0과 6비교 -> 1과 5비교-> 2와 4비교->3과3비교
			return false;
	}
	return true;
}

int main()
{
	string s = "(())";

	is_VPS(s);

}
