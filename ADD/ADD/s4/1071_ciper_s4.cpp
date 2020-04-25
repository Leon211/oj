#include <iostream>
using namespace std;
int main()
{
	string processed, raw, need;
	cin >> processed >> raw >> need;
	char A[26],B[26];
	int used = 0;
	for (int i = 0; i < processed.size(); i++)
	{
		bool iscontain = false;
		if (i == 0)
		{
			A[0] = processed[0];
			B[0] = raw[0];
			used++;
		}
		else
		{
			for (int j = 0; j < used; j++)
			{
				if (A[j] == processed[i])
				{
					if (B[j] != raw[i])
					{
						cout << "Failed";
						return 0;
					}
					iscontain = true;
					break;
				}
			}
			if (!iscontain)
			{
				for (int k = 0; k < used; k++)
				{
					if (B[k] == raw[i])
					{
						cout << "Failed";
						return 0;
					}
				}
				A[used] = processed[i];
				B[used] = raw[i];
				used++;
			}
		}
	}
	if (used != 26)
	{
		cout << "Failed";
		return 0;
	}
	for (int i = 0; i < need.size(); i++)
	{
		for (int j = 0; j < used; j++)
		{
			if (A[j] == need[i])
			{
				cout << B[j];
				continue;
			}
		}
	}
	return 0;
}