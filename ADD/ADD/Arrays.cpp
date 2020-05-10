#include <iostream>
#include<algorithm>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
////5727
//int main()
//{
//	int n;
//	cin >> n;
//	int a[1000] = { 0 };
//	int i = 0;
//	while (true)
//	{
//		if (n == 1)
//		{
//			a[i] = n;
//			++i;
//			break;
//		}
//		a[i] = n;
//		++i;
//		if (n % 2 == 1) n = n * 3 + 1;
//		else n = n/2;
//	}
//	for (int j = i-1; j >= 0; j--)
//	{
//		cout << a[j]<<' ';
//	}
//}
////5728
// class student
//{
//public:
//	int chinese;
//	int math;
//	int english;
//	int sum;
//	student(int a, int b, int c)
//	{
//		chinese = a;
//		math = b;
//		english = c;
//		sum = a + b + c;
//	};
//	student()
//	{
//	};
//	void copy(const student* a)
//	{
//		chinese = a->chinese;
//		math = a->math;
//		english = a->english;
//		sum = a->sum;
//	};
//
//};
//student students[1010];
//bool judge(int a, int b)
//{
//	if (abs(students[a].chinese - students[b].chinese )<= 5
//		&& abs(students[a].math - students[b].math )<= 5
//		&& abs(students[a].english - students[b].english )<= 5
//		&& abs(students[a].sum - students[b].sum )<= 10)
//		return true;
//	else return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		student *d = new student(a,b,c);
//		students[i].copy(d);
//		if(i>0)
//		{
//			for (int j = 0; j <= i-1; j++)
//			{
//				if (judge(j, i)) ++count;
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}
////2615
//int main()
//{
//	int n;
//	cin >> n;
//	int a[39 * 39+1] = { 0 };
//	int temp;
//	for (int i = 1; i <= n*n; i++)
//	{
//		
//		if (i == 1)
//		{
//			temp = n / 2+1;
//		}
//		if (i >= 2)
//		{
//			if (temp > 0 && temp < n )
//			{
//				temp = n * n - n + temp%n + 1;
//			}
//			else if (temp > n  && temp % n == 0)
//			{
//				temp = (temp / n-2)*n+1;
//			}
//			else if (temp == n )
//			{
//				temp = temp + n;
//			}
//			else if (temp > n - 1 && temp % n != 0)
//			{
//				if (a[temp - n + 1] == 0)temp = temp - n + 1;
//				else temp = temp + n;
//			}	
//		}
//		a[temp] = i;
//	}
//	for (int i = 1; i <= n*n; i++)
//	{
//		cout << a[i];
//		if ((i % n == 0))  cout << endl;
//		else cout << ' ';
//	}
//	return 0;
//}
////2550
//int main()
//{
//	int n;
//	cin >> n;
//	int reward[7] = {0};
//	int tickets[7] = { 0 };
//	int result[7] = { 0 };
//	for (int i = 0; i < 7; i++)
//	{
//		cin >> reward[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < 7; j++)
//		{
//			cin >> tickets[j];
//			for (int z = 0; z < 7; z++)
//			{
//				if (tickets[j] == reward[z])
//				{
//					count++;
//					break;
//				}
//			}
//		}
//		switch (count)
//		{
//		case 0:break;
//		case 1:++result[6]; break;
//		case 2:++result[5]; break;
//		case 3:++result[4]; break;
//		case 4:++result[3]; break;
//		case 5:++result[2]; break;
//		case 6:++result[1]; break;
//		case 7:++result[0]; break;
//		}
//	}
//	for (int i = 0; i < 7; i++)
//	{
//		cout << result[i] << ' ';
//	}
//	return 0;
//}
////5729
//int main()
//{
//	int w, x, h;
//	cin >> w >> x >> h;
//	int q;
//	cin >> q ;
//	int count=0;
//	int a[21][21][21] = { 0 };
//	for (int i = 0; i < q; i++)
//	{
//		int x1, y1, z1, x2, y2, z2;
//		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
//		for (int j = x1; j <= x2; j++)
//		{
//			for (int k = y1; k <= y2; k++)
//			{
//				for (int l = z1; l <= z2; l++)
//				{
//					a[j][k][l] = 1;
//				}
//			}
//		}
//	}
//	for (int j = 1; j <= w; j++)
//	{
//		for (int k = 1; k <= x; k++)
//		{
//			for (int l = 1; l <= h; l++)
//			{
//				if (a[j][k][l] == 0)
//				{
//					count++;
//				}
//			}
//		}
//	}
//	cout << count;
//	return 0;
//}
////5730
//int main()
//{
//	int m;
//	cin >> m;
//	string ans[5];
//	string n;
//	cin >> n;
//	for (int i = 0; i < m; i++)
//	{
//		switch (n[i]-'0')
//		{
//		case 0:ans[0] += "XXX"; ans[4] += "XXX";
//			   ans[1] += "X.X"; ans[2] += "X.X"; 
//			   ans[3] += "X.X"; break;
//		case 1:ans[0] += "..X"; ans[4] += "..X";
//			  ans[1] += "..X"; ans[2] += "..X";
//			  ans[3] += "..X";; break;
//		case 2:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "..X"; ans[2] += "XXX"; 
//			  ans[3] += "X.."; break;
//		case 3:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "..X"; ans[2] += "XXX"; 
//			  ans[3] += "..X"; break;
//		case 4:ans[0] += "X.X"; ans[4] += "..X";
//			  ans[1] += "X.X"; ans[2] += "XXX"; 
//			  ans[3] += "..X"; break;
//		case 5:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "X.."; ans[2] += "XXX"; 
//			  ans[3] += "..X"; break;
//		case 6:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "X.."; ans[2] += "XXX"; 
//			  ans[3] += "X.X"; break;
//		case 7:ans[0] += "XXX"; ans[4] += "..X";
//			  ans[1] += "..X"; ans[2] += "..X"; 
//			  ans[3] += "..X"; break;
//		case 8:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "X.X"; ans[2] += "XXX"; 
//			  ans[3] += "X.X"; break;
//		case 9:ans[0] += "XXX"; ans[4] += "XXX";
//			  ans[1] += "X.X"; ans[2] += "XXX"; 
//			  ans[3] += "..X"; break;
//		}
//		if (i != m-1) //最后一个数字不用空列
//		{
//			ans[0] += "."; ans[4] += ".";
//			ans[1] += "."; ans[2] += "."; ans[3] += ".";
//		}
//	}
//	cout << ans[0] << endl << ans[1] << endl << ans[2] << endl << ans[3] << endl << ans[4] << endl;//五行逐一输出
//	return 0;
//}
////1554
//int main()
//{
//	int m, n;
//	cin >> m >> n;
//	int a[10] = {0};
//	for (int i = m; i <=n; i++)
//	{
//		int temp = i;
//		while (temp > 0)
//		{
//			switch (int j=temp % 10)
//			{
//			case 0:a[0]++; break;
//			case 1:a[1]++; break;
//			case 2:a[2]++; break;
//			case 3:a[3]++; break;
//			case 4:a[4]++; break;
//			case 5:a[5]++; break;
//			case 6:a[6]++; break;
//			case 7:a[7]++; break;
//			case 8:a[8]++; break;
//			case 9:a[9]++; break;
//			}
//			temp /= 10;
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << ' ';
//	}
//	return 0;
//}
////2141
//int main()
//{
//	int n;
//	cin >> n;
//	int a[101];
//	int sum[10001] = {0};
//	int exist[10001] = { 0 };
//	int max = 0;
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		exist[a[i]] = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j =i+1 ; j <=n; j++)
//		{
//			if (a[i] + a[j] <= 10000)
//			{
//				sum[a[i] + a[j]]++;
//				if (max < a[i] + a[j]) max = a[i] + a[j];
//			}
//		}
//	}
//	for (int i = 0; i <= max; i++)
//	{
//		if (sum[i] > 0 && exist[i] == 1)
//		{
//			count++;
//		}
//	}
//	cout << count;
//	return 0;
//}
////1614
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	int a[3000];
//	int min = m*100;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	if (n != m)
//	{
//		for (int i = 0; i < n - m; i++)
//		{
//			int temp = 0;
//			for (int j = i; j < i + m; j++)
//			{
//				temp += a[j];
//			}
//			if (temp < min) min = temp;
//		}
//	}
//	if (n == m)
//	{
//		min = 0;
//		for (int i = 0; i < n; i++)
//		{
//			min += a[i];
//		}
//	}
//	cout << min;
//	return 0;
//}
//2911
int main()
{
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int a[30000] = { 0 };
	int max = 0;
	for (int i = 1; i <= s1; i++)
	{
		for (int  j = 1; j <= s2; j++)
		{
			for (int k = 1; k <= s3; k++)
			{
				a[i + j + k]++;
				if (a[i + j + k] > a[max])max = i + k + j;
			}
		}
	}
	cout << max;
	return 0;
}