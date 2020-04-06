#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double p1 = 0.4463;
	double p2 = 0.4663;
	double p3 = 0.5663;
	int a;
	double b;
	cin >> a;
	if (a <= 150)	b = a * p1;
	else if (a >= 151 && a <= 400) b = 150 * p1 + (a - 150) * p2;
	else if (a > 400) b = 150 * p1 + 250 * p2 + (a - 400) * p3;
	cout <<fixed<< setprecision(1);
	cout << b;
	return 0;
}