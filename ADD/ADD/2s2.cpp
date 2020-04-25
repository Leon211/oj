#include <iostream>
#include <stdlib.h>
using namespace std;

int used[13] = { 0 };
int result[13] = { 0 };
int n,times=0;


//bool judge()
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i+1 ; j < n; j++)
//		{
//			if (abs(result[i] -result[j] ) == abs( i- j))
//				return false;
//		}
//	}
//	times++;
//	return true;
//
//}
void DFS(int count)
{
	if(count==n)
	{	
		times++;
		if(times<=3)
		{
			for (int j = 0; j < n; j++)
			{
				cout << result[j] << " ";
			}
			cout << endl;
		}

	}
	for (int i = 0; i < n; i++)
	{
		if (used[i] == 0) //剪枝
		{
			bool flag= true;
			for (int k = 0; k < count; k++)
			{
				if (abs(i + 1 - result[k]) == abs(k - count))  //在此处判读对角线
				{
					flag = false;
					break;
				}
			}
			if(flag==true) 
			{		
				used[i] = 1;
				result[count] = i + 1;
				DFS(count+1);
				used[i] = 0; 
			}

		}

	}
}
int main()
{
	cin >> n;
	DFS(0);
	cout << times;
	return 0;
}
