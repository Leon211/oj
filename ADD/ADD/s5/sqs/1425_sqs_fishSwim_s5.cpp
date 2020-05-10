#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int e, f;
	if (d < b)
	{
		e = c - a - 1;
		f = d + 60 - b;
	}
	else
	{
		e = c - a;
		f = d - b;
	}
	cout << e << ' ' << f;
	return 0;
}