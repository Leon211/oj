#include <iostream>
using namespace std;
int sort(int A[],int N)
{
	int count=0;
	int sum = 0;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		sum += A[i];
	}
	result = sum / N;
	int j = 0;
	for (int i = 0; i < N - 1; i++)
	{
		if (A[i] == result) continue;
		A[i + 1] -= result - A[i];
		count++;
	}
	return count;
}
int main()
{
	int N;
	int A[100];
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	cout << sort(A, N);
	return 0;
}