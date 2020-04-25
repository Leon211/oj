#include <iostream>
#include <algorithm>
using namespace std;
bool comp(string a, string b)
{
	return a + b > b + a ;
}
int main()
{
	int n;
	cin >> n;
	string temp[20];
	string result;
	for (int i = 0; i < n; i++)
	{
		cin >> temp[i];
	}
	sort(temp, temp + n, comp);
	for (int i = 0; i < n; i++)
	{
		result += temp[i];
	}
	cout << result;
	return 0;
}