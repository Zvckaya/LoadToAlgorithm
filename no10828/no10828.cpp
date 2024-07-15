#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> myStack;

	int N;
	cin >> N;
	string str;

	while (N>0)
	{
		cin >> str;
		if (str == "push") {
			int tmp;
			cin >> tmp;
			myStack.push(tmp);
		}
		else if (str == "pop") {
			if (myStack.empty())
				cout << -1<<"\n";
			else {
				cout << myStack.top() << "\n";
				myStack.pop();
			}
		}
		else if (str == "size") {
			cout << myStack.size() << "\n";
		}
		else if(str=="empty") {
			if (myStack.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else {
			if (myStack.empty())
				cout << -1 << "\n";
			else {
				cout<<myStack.top() << "\n";
			}

		}
		N--;
	}


}

