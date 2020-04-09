#include <iostream>
using namespace std;
int main()
{
	double x;
	double v = 2;
	int t = 0;
	cin >> x;
	while (x > 0)
	{		
		t++;
		x = x - (double)v;
		v = v * 0.98;
	}
	cout << t;
	return 0;
}