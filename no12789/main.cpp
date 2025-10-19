#include<vector>
#include <stack>
#include <queue>
#include<algorithm>
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); 
	bool success = true;
	
	queue<int> q;
	stack<int> s;
	int cnt, temp;
	int n = 1;
	cin >> cnt;

	for (int i = 0; i < cnt; i++) {
		cin >> temp;
		q.push(temp);
	}

	for (int i = 1; i <= cnt; i++) {
		while (true) //못 찾으면 
		{
		
			if (!s.empty()&& s.top() == i) { //안비어있고, top이 찾는 숫자이면 
				s.pop();
				break;
			}
			if (q.empty()) { //비었으면 
				success = false; //못찾은거니까 탈출 
				break;
			}
			s.push(q.front()); //찾을때까지 스택에 push
			q.pop(); //push한거 빼주기 
			
		}
	}


	if (success)
	{
		cout << "Nice";
	}
	else {

		cout << "Sad";
	}

}