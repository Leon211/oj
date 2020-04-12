#include<iostream>
using namespace std;
int main()
{
	int k;
	double sum = 0;
	int n = 0;
	cin >> k;
	while (sum <= k)
	{	
		n++;
		sum = sum + 1 / (double)n;
		
	}
	cout << n;
	return 0;
}