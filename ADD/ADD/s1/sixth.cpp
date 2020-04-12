#include <iostream>
using namespace std;
int count_num(int i,int z)
{
	int con = 0;
	int num = 0;
	while (true)
	{
		num = i - i / 10 * 10;
		if (num == z) con++;
		i = i / 10;
		if (i == 0)break;
	}
	return con;
}

int main()
{
	int n, z;
	cin >> n >> z;
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		count += count_num(i,z);
	}
	cout << count;
	return 0;
}
	//for (int i = 1; i <= n; i++)
	//{
	//	if(z!=0)
	//	{ 
	//		int temp = 1;
	//		while (i/temp!=0)
	//		{
	//			if (temp == 1)
	//			{
	//				if (i % 10 == z)
	//				{
	//					count++;
	//				}	
	//				temp = 10;
	//				continue;
	//			}  
	//			if (i / temp == z)
	//			{
	//				count++;
	//			}
	//			temp = temp * 10;
	//		}
	//	}
	//	if (z == 0)
	//	{
	//		if (i == 0) count++;
	//		if()
	//	}
	//	
	//}
