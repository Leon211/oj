#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	int m, t, s;
	cin >> m >> t >> s;
	if (t==0||m==0)
	{
		cout << 0;
		return 0;
	}
	if (s == 0) cout << m;
	if (s % t != 0)m--;
	if (m > 0)
	{
		if (m > s / t)
		{
			m= m - s / t;
		}
		else m=0;
	}
	cout << m;
	return 0;
}
