#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int A[100000] = { 0 };
	int temp, sum = 0;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		sum += temp;
		if (sum  > M)
		{
			count++;
			sum = temp;
		}

	}
	if (sum != 0)count++;
	cout << count;
	return 0;

}
