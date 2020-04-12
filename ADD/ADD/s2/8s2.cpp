#include <iostream>
using namespace std; 
int main()
{
	int ava[10001] = {0};
	int length, i;
	int begin, end;
	int count=0;
	cin >> length >> i;
	for (int j = 0; j < i; j++)
	{
		cin >> begin >> end;
		for (int k = begin; k <= end; k++)
		{
			ava[k] = 1;
		}
	}
	for (int j = 0; j <= length; j++)
	{
		if (ava[j]==0)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}