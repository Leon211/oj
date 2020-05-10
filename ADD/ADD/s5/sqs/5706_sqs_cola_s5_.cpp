#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double t;
	int n;
	cin >> t >> n;
	cout << fixed << setprecision(3);
	cout << t / n << endl;
	cout << n * 2;
}