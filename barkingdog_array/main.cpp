#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <memory>

void insert(int idx, int num, int arr[], int& len) {
	for (int i = len; i > idx; i--)
		arr[i] = arr[i - 1];
	arr[idx] = num;
	len++;
}

void erase(int idx, int arr[], int& len) {
	len--;
	for (int i = idx; i < len; i++)
		arr[i] = arr[i + 1];
}

int func2(int arr[], int n)
{
	int ck[101] = { 0 };
	for (int i = 0; i < n; i++)
	{
		if (ck[100 - arr[i]] == 1)
			return 1;

		ck[arr[i]] = 1;
	}
	return 0;
}

