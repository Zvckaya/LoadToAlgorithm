#include <iostream>
using namespace std;

int fibo(int N) {
    if (N <= 2)
        return 1;
    return fibo(N - 1) + fibo(N - 2);
}

int main()
{
    cout << fibo(4);
}


