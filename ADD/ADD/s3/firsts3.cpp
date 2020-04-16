#include <iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, s, a, b;
	int apple, cos;
	int apples[5000], cost[5000];
	int count = 0;
	int length = 0;
	cin >> n >> s >> a >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> apple >> cos;
		if (a + b < apple) continue;
		else
		{
			cost[length++] = cos;
		}
	}
	sort(cost, cost + length);
	//多一个迭代器排序后从begin开始到对应的end结束
	for (int i = 0; i < length; i++)
	{
		if (s - cost[i] < 0)break;
		else
		{
			count++;
			s -= cost[i];
		}
	}
	cout << count;
	return 0;
}
