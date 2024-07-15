#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, tmp;
	queue<int> myQueue;
	string myStr;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> myStr;
		if (myStr == "push") {
			cin >> tmp;
			myQueue.push(tmp);
		}
		else if (myStr == "pop") {
			if(myQueue.empty())
				cout << -1 << "\n";
			else {
				cout << myQueue.front() << "\n";
				myQueue.pop();
			}
		}
		else if (myStr == "size") {
			cout << myQueue.size() << "\n";
		}
		else if (myStr == "empty") {
			if (myQueue.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if(myStr=="front") {
			if (myQueue.empty())
				cout << -1 << "\n";
			else {
				cout << myQueue.front() << "\n";
			}
		}
		else {
			if (myQueue.empty())
				cout << -1 << "\n";
			else {
				cout << myQueue.back() << "\n";
			}
		}
			
	}


}
