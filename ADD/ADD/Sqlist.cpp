#include <iostream>
#include <vector>
#include<list>
#include <iterator>
//#pragma GCC diagnostic error "-std=c++11"
using namespace std;

////3156
//int main()
//{
//	int n, m;
//	cin >> n>> m;
//	int a[2000001] = {0};
//	for (int i = 1; i <= n; i++)
//	{
//		int temp;
//		cin >> temp;
//		a[i] = temp;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int temp;
//		cin >> temp;
//		cout << a[temp]<<endl;
//	}
//	return 0;
//}
//3613
//class cabinet //classÌ«´ó
//{
//public:
//	vector<int> a,b;
//	int count=0;
//	cabinet()
//	{}
//};
////3613
//struct cabinet
//{
//	vector<int> a, b;
//	int count = 0;
//}cabinets[100000];
//int main()
//{
//	int n, q;
//	cin >> n >> q;
//	int choose, i, j, k;
//	for (int l = 0; l < q; l++)
//	{
//		cin >> choose;
//		if (choose == 1)
//		{
//			cin >> i >> j >> k;
//			cabinets[i].count++;
//			cabinets[i].a.push_back(j);
//			cabinets[i].b.push_back(k);
//		}
//		else
//		{
//			cin >> i >> j;
//			for (int q = cabinets[i].count - 1; q >= 0; q--)
//			{
//				if (cabinets[i].a[q] == j)
//				{
//					cout << cabinets[i].b[q] << endl;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}
////1449
//int main()
//{
//	string input;
//	cin >> input;
//	//char a[1000];
//	int b[1000];
//	int bcount = 0;
//	char c[1000];
//	int j=0;
//	for (int i = 0; i < input.length(); i++)
//	{
//		if (input[i]!='.'&& input[i] != '@')
//		{	
//			char temp = input[i];
//			if (temp >= '0' && temp  <= '9')
//			{
//				int temps = input[i] - '0';
//				while (input[i + 1] >= '0' && input[i + 1] <= '9')
//				{
//					temp = input[i + 1];
//					++i;
//					temps = temps * 10 + temp - '0';
//				}
//				b[bcount] = temps;
//				bcount++;
//			}
//			else if (input[i] == '+')
//			{
//				int prior = b[bcount - 2];
//				int after = b[bcount - 1];
//				bcount = bcount - 2;
//				b[bcount] = prior + after;
//				bcount++;
//			}
//			else if (input[i] == '-')
//			{
//				int prior = b[bcount - 2];
//				int after = b[bcount - 1];
//				bcount = bcount - 2;
//				b[bcount] = prior - after;
//				bcount++;
//			}
//			else if (input[i] == '*')
//			{
//				int prior = b[bcount - 2];
//				int after = b[bcount - 1];
//				bcount = bcount - 2;
//				b[bcount] = prior * after;
//				bcount++;
//			}
//			else if (input[i] == '/')
//			{
//				int prior = b[bcount - 2];
//				int after = b[bcount - 1];
//				bcount = bcount - 2;
//				b[bcount] = prior / after;
//				bcount++;
//			}
//		}
//		if (input[i] == '@') cout << b[bcount - 1];
//	}
//	return 0;
//}
////1996
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int a[101] = { 0 };
//	int count = 1;
//	int no = 0;
//	int numbers = n;
//	while (n > 0)
//	{
//		if (a[count] == 0)
//		{
//			no++;
//			if (no == m)
//			{
//				cout << count << ' ';
//				no = 0;
//				a[count] = 1;
//				n--;
//				if (n == 0)
//				{
//					return 0;
//				}
//			}
//			if (count < numbers)
//			{
//				count++;
//				while(a[count] != 0)
//				{
//					if (count == numbers) count = 1;
//					else count++;
//				}
//			}
//			else 
//			{
//				count = 1;
//				while (a[count] != 0)
//				{
//					if (count == numbers) count = 1;
//					else count++;
//				}
//			}
//			
//		}
//		else if (a[count] == 1)
//		{
//			if (count < numbers)
//			{
//				count++;
//				while (a[count] != 0)
//				{
//					if (count = numbers) count = 1;
//					else count++;
//				}
//			}
//			else
//			{
//				count = 1;
//				while (a[count] != 0)
//				{
//					if (count = numbers) count = 1;
//					else count++;
//				}
//			}
//		}
//	}
//	return 0;
//}
//1160
//using Iter = list<int>::iterator;
typedef  list<int>::iterator Iter;
Iter pos[100010];
list<int> que;
bool deletes[100010];
int main()
{	
	int n;
	cin >> n;
	que.push_front(1);
	pos[1] = que.begin();
	for (int i = 2; i <= n; i++)
	{
		int k, p;
		cin >> k >> p;
		if (p == 0)
		{
			pos[i] = que.insert(pos[k], i);
		}
		if (p == 1)
		{
			Iter temp = next(pos[k]);
			pos[i] = que.insert(temp, i);
		}
	}
	int m;
	cin >> m;

	for (int i = 1; i <= m; i++)
	{
		int temp;
		cin >> temp;
		if (!deletes[temp])
		{
			que.erase(pos[temp]);
		}
		deletes[temp] = true;
	}
	/*for (int i : que)*/
	for(Iter temp=que.begin();temp!=que.end();temp++)
	{
		//cout << i<<' ';
		cout << *temp << ' ';
	}
	return 0;
}

