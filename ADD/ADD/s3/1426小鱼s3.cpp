#include <iostream>
using namespace std;
int main()
{
	double v = 7;
	double s, x;
	double length=0;
	cin >> s >> x;
	while (length <= s + x)
	{
		length += v;
		v = 0.98 * v;
		if (length >= s - x )
		{
			if (length + v > s + x)
			{
				cout << "n";
				return 0;
			}
			else
			{
				cout << "y";
				return 0;
			}
		}
	}

}