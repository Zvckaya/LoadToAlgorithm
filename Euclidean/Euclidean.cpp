
#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b) {
	while (b!=0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int LCD(int a, int b) {
	int result = (a * b) / GCD(a, b);
	return result;
}

int main()
{
    int a = 12;
    int b = 18;

	int gcd = GCD(a, b);
	cout << a << "와" << b << "의 최대 공약수는" << gcd << "입니다";

	int lcd = LCD(a, b);
	
	cout << a << "와" << b << "의 최소 공배수는" << lcd << "입니다";
}

