#include <iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	cout << fixed << setprecision(1);
	double p = 1.0 / 2 * (a + b + c);
	cout << sqrt(p * (p - a) * (p - b) * (p - c));
	return 0;
}
