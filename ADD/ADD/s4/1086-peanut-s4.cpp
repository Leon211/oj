#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int M, N, K, temp, sum = 0;
	cin >> M >> N >> K;
	int x1=0, y1=0;
	int nuts[21][21] = {0};
	for (int i = 1; i <= M ; i++)
	{
		for (int j = 1; j <= N ; j++)
		{
			cin >> temp;
			nuts[i][j] = temp;
		}
	}
	while (true)
	{
		int max = -1;
		int x2, y2;
		for (int i = 1; i <= M; i++)
		{
			for (int j = 1; j <= N; j++)
			{
				if (max < nuts[i][j])
				{
				max = nuts[i][j];
				x2 = i;
				y2 = j;
				}
			}
		}
		if (K < abs(x2 - x1) + abs(y2 - y1) + 1 + x2) break;
		if (x1 == y1 && x1 == 0)
		{
			K -= 2;
			K -= (x2 - 1);
			x1 = x2;
			y1 = y2;
		}
		else
		{
			K -= abs(x2 - x1);
			K -= abs(y2 - y1);
			K--;
			x1 = x2;
			y1 = y2;
		}
		sum += nuts[x1][y1];
		nuts[x1][y1] = 0;
			
	}
	cout << sum;
}