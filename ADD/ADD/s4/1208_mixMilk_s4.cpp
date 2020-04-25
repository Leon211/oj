#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b);
int main()
{
	int n, m;
	cin >> n >> m;
	pair<int, int> farmer[5000];
	pair<int, int> temp;
	int temp1, temp2;
	int cost = 0, last = n;
	for (int i = 0; i < m; i++)
	{
		cin >> temp1 >> temp2;
		temp = pair<int, int>(temp1, temp2);
		farmer[i] = temp;
	}
	sort(farmer, farmer + m, comp);
	for (int i = 0; i < m; i++)
	{
		if (last == 0) break;
		if (last > farmer[i].second)
		{
			cost +=  farmer[i].second * farmer[i].first;
			last -= farmer[i].second;
		}
		else
		{
			cost += last * farmer[i].first;
			break;
		}
	}
	cout << cost;
	return 0;
}
bool comp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}