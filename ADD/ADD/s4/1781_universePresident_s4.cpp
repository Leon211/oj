#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string temp;
	vector<string> a;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}
	string max = "-1";
	int index = 0;
	for (int i = 0; i < n; i++)
	{
		if (max.size() < a[i].size() || (max.size() == a[i].size() && max < a[i]))
		{
			max = a[i];
			index = i;
		}
	}
	cout << index + 1 << endl;
	cout << a[index];
	return 0;
}