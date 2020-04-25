#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
bool comp(pair<int, int> a,pair<int, int> b)
{
	return a.first < b.first;
}
int main()
{
	int n;
	pair<int, int>  a[1000], temp;
	double asl = 0;
	long sum = 0, total = 0;
	cin >> n;
	int temp1;
	for (int i = 0; i < n; i++)
	{
		cin >> temp1;
		temp = pair<int, int>(temp1,i + 1);
		a[i] = temp;
	}
	sort(a, a + n, comp);
	for (int i = 0; i < n; i++)
	{
		cout << a[i].second << " ";
		total += sum;
		sum += a[i].first;
	}
	cout << endl;
	cout << fixed << setprecision(2) << (double)total / n;
	return 0;
}