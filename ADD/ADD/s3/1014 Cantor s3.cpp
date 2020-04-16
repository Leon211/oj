#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int count = 0;
	int sum = 0;
	while (true)
	{
		++count;
		if (sum + count >= N)	break;
		sum = sum + count;
	}
	int temp = N - sum;
	if (count % 2 == 1) cout << count+1 - temp << "/" << temp;
	else cout << temp << "/" << count+1 - temp;
	return 0;
}