#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A[10000] = {0};
	int sum=0;
	for (int  i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	sort(A, A + n);
	for (int i = 0; i < n-1; i++)
	{
			A[i+1] += A[i];
			sum += A[i+1];
			int j = i + 2;
			int temp = A[i+1];
			while (true)
			{
				if (A[j] > A[i + 1] || j > n - 1) { break; }
				j++;
			}
			for (int k = i+1; k < j-1; k++)
			{
				A[k] = A[k + 1];
			}
			A[j - 1] = temp;
	}
	cout << sum;
	return 0;
}