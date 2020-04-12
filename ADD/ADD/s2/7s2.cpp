#include <iostream>
using namespace std;
int main()
{
	int apple[10];
	int ava=0;
	int height;
	for (int i = 0; i<10 ; i++)
	{
		cin >> apple[i];
	}
	cin >> height;
	for (int i = 0; i < 10; i++)
	{
		if (apple[i] <= height + 30)
			ava++;
	}
	cout << ava;
	return 0;
}