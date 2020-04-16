#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int times;
	cin >> times;
	int temp;
	for (int i = times; i >=0; i--)
	{
		cin >> temp;
		if (temp == 0) continue;
		if (temp > 0 && i != times)cout << "+";
		if (abs(temp) > 1 || i == 0)cout << temp;
		if (temp == -1 && i != 0)cout << "-";
		if (i > 1)cout << "x^" <<  i;
		if (i ==1 )cout << "x";
	}
	return 0;
}