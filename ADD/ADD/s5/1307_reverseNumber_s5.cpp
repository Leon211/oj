#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	cin >> a;
	for (int i = a.length()-1; i >=0; i--)
	{
		if (i == a.length() - 1 && a[0] == '-')
		{
			cout << '-';
			a.erase(0,1);
			if (a[a.length() - 1] == '0')continue;
			continue;
		}

		if (a[a.length()-1] == '0')
		{	
			int j = a.length() - 1;
			while (a[j-1]=='0')
			{
				j--;
			}
			i = j - 1;
			cout << a[i];
			a.erase(j, a.length() - 1);
			continue;
		}
		cout << a[i];
	}
	return 0;
}