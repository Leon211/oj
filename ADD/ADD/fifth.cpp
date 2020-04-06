#include <iostream>
using namespace std;
int main()
{
	int count;
	int p[3], price[3];
	cin >> count;
	int i;
	int cost = INT_MAX;
	for (i = 0; i < 3; i++)
	{
		cin >> p[i] >> price[i];
	}
	for (i = 0; i < 3; i++)
	{
		if (count % p[i] != 0)
		{
			if ((count / p[i] + 1) * price[i] < cost)
				cost = (count / p[i] + 1) * price[i];
		}
		else
		{
			if (count / p[i] * price[i] < cost)
				cost = count / p[i] * price[i];
		}
	
	}
	cout << cost;
	return 0;
}