#include <iostream>
#include <queue>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N = 0;
	int temp = 0;
	cin >> N;

	queue<int> card;

	for (int i = 1; i <= N; i++) {
		card.push(i);
	}

	while (true)
	{
		if (card.size() == 1)
			break;
		
		card.pop();
		temp=card.front();
		card.pop();
		card.push(temp);
	}

	cout << card.front();
	


	
}


