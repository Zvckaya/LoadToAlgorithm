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
		while (true) //�� ã���� 
		{
		
			if (!s.empty()&& s.top() == i) { //�Ⱥ���ְ�, top�� ã�� �����̸� 
				s.pop();
				break;
			}
			if (q.empty()) { //������� 
				success = false; //��ã���Ŵϱ� Ż�� 
				break;
			}
			s.push(q.front()); //ã�������� ���ÿ� push
			q.pop(); //push�Ѱ� ���ֱ� 
			
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