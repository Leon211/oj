#include <iostream>
using namespace std;
int main()
{
	int n,x,y;
	cin >> n;
	int a[10001], b[10001], g[10000], k[10000];
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i] >> g[i] >> k[i];
	}
	cin >> x >> y;
	for (int i = n - 1; i >= 0; i--)
	{
		if (x >= a[i] && x <= a[i] + g[i] && y >= b[i] && y <= b[i] + k[i])
		{
			cout << i + 1;
			flag = true;
			break;
		}
	}
	if (!flag)cout << "-1";
	return 0;

}