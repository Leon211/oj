#include <iostream>
using namespace std;
int main()
{
	int count;
	int lovely[100] = { 0 };
	int lessLovely[100] = { 0 };
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> lovely[i];
	}
	for (int i = 0 ; i < count; i++)
	{
		lessLovely[i] = 0;
		for (int j = 0; j < i; j++)
		{
			if (lovely[j]<lovely[i])
			{
				lessLovely[i]++;
			}
		}
		cout << lessLovely[i]<<" ";
	}
	return 0;
}