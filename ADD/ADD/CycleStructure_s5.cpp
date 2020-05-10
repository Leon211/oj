#include <iostream>
#include<iomanip>
#include<math.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
//////5718
////int main()
////{
////	int n;
////	int a[100];
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a[i];
////	}
////	sort(a, a + n);
////	cout << a[0];
////}
////5719
//////int main()
////{
////	int n, k;
////	cin >> n >> k;
////	int a=0, b=0;
////	int ac=0, bc=0;
////	for (int i = 1; i <= n; i++)
////	{
////		if (i % k == 0)
////		{
////			ac++;
////			a += i;
////		}
////		else
////		{
////			bc++;
////			b += i;
////		}
////	}
////	cout << fixed << setprecision(1);
////	cout << (double)a / ac << ' ' << (double)b / bc;
////}
//////5720
////int main()
////{
////	int n;
////	cin >> n;
////	int t=1;
////	while(true)
////	{
////		if (n == 1) break;
////		n /= 2;
////		t++;
////	}
////	cout << t;
////	return 0;
////}
//////5721
////int main()
////{
////	int n;
////	cin >> n;
////	int output = 1;
////	for (int i = n; i > 0; i--)
////	{
////		for (int j = 0; j < i; j++)
////		{
////			if (output < 10) cout << '0' << output;
////			else cout << output;
////			output++;
////		}
////		cout << endl;
////	}
////	return 0;
////}
//////1009(高精度问题)
////int a[2000];
////int b[2000];
////void pplus(int* a, int* b)
////{
////	int jw = 0;
////	for (int i = 1; i <= 1000; i++)
////	{
////		b[i] += a[i] + jw;
////		jw = b[i] / 10;
////		b[i] %= 10;
////	}
////}
////void cheng(int* a, int b)
////{
////	int jw = 0;
////	for (int i = 1; i <= 1000; i++)
////	{
////		a[i] = a[i] * b + jw;
////		jw = a[i] / 10;
////		a[i] %= 10;
////	}
////}
////int main()
////{
////	int n;
////	cin >> n;
////	a[1] = 1;
////	for (int i = 1; i <= n; i++)
////	{
////		cheng(a, i);
////		pplus(a, b);
////	}
////	bool flag = 0;
////	for (int i = 1000; i >= 1; i--)
////	{
////		if (b[i] != 0) flag = 1;
////		if (flag) cout << b[i];
////	}
////}
//////2669
////int main()
////{
////	int n;
////	cin >> n;
////	int gold = 1;
////	int day = 1;
////	unsigned long long sum = 0;
////	while (day<=n)
////	{
////		int temp = 1;
////		while (temp <= gold && day <= n)
////		{
////			sum += gold;
////			temp++;
////			day++;
////		}
////		gold++;
////	}
////	cout << sum;
////	return 0;
////}
////int main()
////{
////	int n;
////	cin >> n;
////	int sum = 0;
////	for (int i = 1; i <= n; i++)
////	{
////		sum += i;
////	}
////	cout << sum;
////	return 0;
////}
//////5723
//bool isprime(int i)//判读质数，6除法
//{
//	if (i <= 1)return false;
//	if (i == 2 || i == 3)return true;
//	if (i % 6 != 1 && i % 6 != 5) return false;
//	for (int j = 5; j <= sqrt(i); j += 6)
//	{
//		if (i % j == 0 || i % (j + 2) == 0)return false;
//	}
//	return true;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int count = 0;
//	int sum = 0;
//	int i = 0;
//	while(true)
//	{
//		if (isprime(i))
//		{
//			if (sum + i > n)break;
//			cout << i << endl;
//			count++;
//			sum += i;
//		}
//		i++;
//	}
//	cout << count;
//	return 0;
//}
//1217
//int no[9] = { 0 };
//bool isprime(int i)//判读质数，6除法
//{
//	if (i == 2 || i == 3)return true;
//	if (i % 6 != 1 && i % 6 != 5) return false;
//	for (int j = 5; j <= sqrt(i); j += 6)
//	{
//		if (i % j == 0 || i % (j + 2) == 0)return false;
//	}
//	return true;
//}
//bool isPalindorme(/*int* a, int bits, int i*/int n)
//{
//		int m = n;
//		int ans = 0;
//		while (m != 0)
//		{
//			ans = ans * 10 + m % 10;
//			m /= 10;//这两句不可调换位置
//		}//经过一番玄学操作后,若n是回文数，则ans=n；
//		if (ans == n)return true;
//		else return false;
	//数组版
	//if (a[bits] != a[i]) return false;
	//if (i < bits - 1 && a[bits ] == a[i])return isPalindorme(a, bits - 1, i + 1);
	//if (i == bits - 1 && a[bits ] == a[i]) return true;
	//if (i == bits  && a[bits ] == a[i]) return true;

	//if (a < 10)return true;
	//if (bits > 2 && bits % 2 == 0)return false;
	//if (a / (int)pow(10, bits-1) == a % 10)
	//{
	//	return isPalindorme(a % (int)pow(10, bits-1) / 10, bits - 2);
	//}
	//else
	//{
	//	return false;
	//}


//#include<stdio.h>
//#include<math.h>
//#include<iostream>
//using namespace std;
//bool check1(int i)//检查位数
//{
//		if ((1000 <= i && i <= 9999) || (100000 <= i && i <= 999999)) return 0;
//		return 1;
//}
//bool check2(int n)//检查是否回文
//{
//			int m = n;
//		int ans = 0;
//		while (m != 0)
//		{
//			ans = ans * 10 + m % 10;
//			m /= 10;//这两句不可调换位置
//		}//经过一番玄学操作后,若n是回文数，则ans=n；
//		if (ans == n)return true;
//		else return false;
//}
//bool check3(int i)//检查是否为质数 
//{
//		if (i == 2 || i == 3)return true;
//		if (i % 6 != 1 && i % 6 != 5) return false;
//		for (int j = 5; j <= sqrt(i); j += 6)
//		{
//			if (i % j == 0 || i % (j + 2) == 0)return false;
//		}
//		return true;
//}
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (a % 2 == 0) a++;
//	if(b> 9989899)b =9989899;
//	for (int i = a; i <= b; i += 2)
//	{
//		if (!check1(i))
//		{
//			if (i <= 9999)i = 9999;
//			else if (i >= 100000)i = 999999;
//			continue;
//		}
//		if (!check2(i))
//		{
//			continue;
//		}
//		if (!check3(i))
//		{
//			continue;
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}
////1720
//int main()
//{
//	int n;
//	cin >> n;
//	double five = sqrt(5);
//	cout << fixed << setprecision(2);
//	cout << (pow((1.0 + five) / 2, n) - pow((1.0 - five) / 2, n)) / five;
//	return 0;
//}
////5724
//int main()
//{
//	int n=0;
//	int min=1000,max=0,temp;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> temp;
//		if (temp > max) max = temp;
//		if (temp < min)min = temp;
//	}
//	cout << max - min;
//	return 0;
//}
////1420
//int main()
//{
//	int n;
//	int temp, prior;
//	int temps= 0;
//	int result = 1;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		if (i == 0)
//		{
//			cin >> prior;
//			temps = 1;
//			continue;
//		}
//		cin >> temp;
//		if (temp == prior+1)
//		{
//			temps++;
//			if (result < temps)result = temps;
//			prior = temp;
//		}
//		else
//		{
//			prior = temp;
//			temps = 1;
//		}
//	}
//	cout << result;
//}
////1075
//bool isprime(int i)//判读质数，6除法
//{
//	if (i == 2 || i == 3)return true;
//	if (i % 6 != 1 && i % 6 != 5) return false;
//	for (int j = 5; j <= sqrt(i); j += 6)
//	{
//		if (i % j == 0 || i % (j + 2) == 0)return false;
//	}
//	return true;
//}
//int main()
//{
//	double n;
//	cin >> n;
//	for (int i = (int)sqrt(n); i >=2 ; i--)
//	{
//		if (isprime(i))
//		{
//			double a = n / i;
//			if (a - (int)a == 0)
//			{
//				if (a > i)
//				{
//					cout << (int)a;
//					break;
//				}
//				cout << i;
//				break;
//			}
//		}
//	}
//	return 0;
//}
////5725
//int main()
//{
//	int n;
//	cin >> n;
//	int x=1, y=1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (x < 10)
//			{
//				cout << '0' << x;
//				++x;
//			}
//			else
//			{
//				cout << x;
//				++x;
//			}
//		}
//		cout << endl;
//	}
//	cout << endl;
//	int nulls=n-1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (j < nulls)cout << "  ";
//			else
//			{
//				if (y < 10)
//				{
//					cout << '0' << y;
//					++y;
//				}
//				else
//				{
//					cout << y;
//					++y;
//				}
//			}
//		}
//		--nulls;
//		cout << endl;
//	}
//}
////5726
//int main()
//{
//	double n;
//	cin >> n;
//	int score[1000];
//	int min=10, max=0;
//	int sum = 0;
//	double result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> score[i];
//		if (min > score[i]) min = score[i];
//		if (max < score[i])max = score[i];
//		sum += score[i];
//	}
//	sum -= min;
//	sum -= max;
//	result = sum / (n - 2);
//	cout << fixed << setprecision(2);
//	cout << result;
//	return 0;
//}
//4956
int main()
{
	int n;
	cin >> n;
	int costPw = n / 364;
	for ( int k = 1; ;  k++)
	{
		for (int x = 1 ; x <= 100; x++)
		{
			if (x + 3 * k == costPw)
			{
				cout << x << endl << k;
				return 0;
			}
		}
	}
	return 0;
}