#include <iostream>
#include <algorithm>
using namespace std;
bool comp(pair<int, int> A, pair<int, int> B)
{
	if (A.second > B.second) { return true; }
	if (A.second == B.second && A.first < B.first) return true;
	return false;
}
int main()
{
	int n, k;
	cin >> n >> k;
	int E[10],temp;
	pair<int, int> W[20000],temp_pair;
	int C[20000];
	for (int i = 0; i < 10; i++)
	{
		cin >> E[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		temp_pair = pair<int, int>(i + 1, temp);
		W[i] = temp_pair;
	}
	sort(W, W + n, comp);
	for (int i = 0; i < n; i++)
	{
		W[i].second += E[i % 10];
	}
	sort(W, W + n, comp);
	for (int i = 0; i < k; i++)
	{
		cout << W[i].first << " ";
	}
	return 0;
}