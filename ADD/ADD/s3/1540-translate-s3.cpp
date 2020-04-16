#include<iostream>
using namespace std;
int main()
{
	int mem[100] = {};
	for (int i = 0; i < 100; i++)
	{
		mem[i] = -1;
	}
	int memNum, length;
	int article;
	int count=0;
	int theOne=0;
	cin >> memNum >> length;
	for (int i = 0; i < length; i++)
	{
		cin >> article;
		bool flag = false;
		for (int j = 0; j < memNum; j++)
		{
			if (mem[j] == article)
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			mem[theOne] = article;
			theOne + 1 > memNum - 1 ? theOne = 0 : theOne++;
			count++;
		}
	}
	cout << count;
	return 0;
}