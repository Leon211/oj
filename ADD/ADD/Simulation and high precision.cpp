#include<iostream>
#include<string>
using namespace std;
////2670
//char a[101][101] = {};
//int b[101][101] = { 0 };
//int n, m;
//int judge(int i, int j)
//{
//	if (i == 1)
//	{
//		if (j == 1)
//		{
//			if (a[i][j + 1] == '*')  b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//			if (a[i + 1][j + 1] == '*') b[i][j]++;
//		}
//		else if (j == m)
//		{
//			if (a[i][j - 1] == '*')  b[i][j]++;
//			if (a[i + 1][j - 1] == '*') b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//		}
//		else 
//		{
//			if (a[i][j - 1] == '*')  b[i][j]++;
//			if (a[i][j + 1] == '*')  b[i][j]++;
//			if (a[i + 1][j - 1] == '*') b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//			if (a[i + 1][j + 1] == '*') b[i][j]++;
//		}
//	}
//	else if (i == n)
//	{
//		if (j == 1)
//		{
//			if (a[i - 1][j] == '*')  b[i][j]++;
//			if (a[i - 1][j + 1] == '*') b[i][j]++;
//			if (a[i][j + 1] == '*') b[i][j]++;
//		}
//		else if (j == m)
//		{
//			if (a[i - 1][j] == '*')  b[i][j]++;
//			if (a[i - 1][j - 1] == '*') b[i][j]++;
//			if (a[i][j - 1] == '*') b[i][j]++;
//		}
//		else
//		{
//			if (a[i - 1][j - 1] == '*') b[i][j]++;
//			if (a[i - 1][j] == '*')  b[i][j]++;
//			if (a[i - 1][j + 1] == '*') b[i][j]++;
//			if (a[i][j - 1] == '*') b[i][j]++;
//			if (a[i][j + 1] == '*') b[i][j]++;
//		}
//	}
//	else
//	{
//		if (j == 1)
//		{
//			if (a[i - 1][j] == '*')  b[i][j]++;
//			if (a[i - 1][j + 1] == '*') b[i][j]++;
//			if (a[i][j + 1] == '*') b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//			if (a[i + 1][j + 1] == '*') b[i][j]++;
//		}
//		else if (j == m)
//		{
//			if (a[i - 1][j - 1] == '*')  b[i][j]++;
//			if (a[i - 1][j] == '*') b[i][j]++;
//			if (a[i][j - 1] == '*') b[i][j]++;
//			if (a[i + 1][j - 1] == '*') b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//		}
//		else
//		{
//			if (a[i - 1][j - 1] == '*')  b[i][j]++;
//			if (a[i - 1][j] == '*')  b[i][j]++;
//			if (a[i - 1][j + 1] == '*') b[i][j]++;
//			if (a[i][j - 1] == '*') b[i][j]++;
//			if (a[i][j + 1] == '*') b[i][j]++;
//			if (a[i + 1][j - 1] == '*') b[i][j]++;
//			if (a[i + 1][j] == '*') b[i][j]++;
//			if (a[i + 1][j + 1] == '*') b[i][j]++;
//		}
//	}
//	return  b[i][j];
//}
//
//int main()
//{
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			char temp;
//			cin >> temp;
//			a[i][j] = temp;
//			if (temp == '*') b[i][j] = -1;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (b[i][j] != -1)
//			{
//				cout << judge(i, j);
//			}
//			else cout << a[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}
////1563
//pair<int, string> actors[100001],temp_pair;
//int result = 1;
//int n, m;
//void operation(int a, int b)
//{
//	if (actors[result].first == a)
//	{
//		if (result - b <= 0)result = n - b + result;
//		else result -= b;
//	}
//	else if (actors[result].first != a)
//	{
//		if (result + b > n)result = b + result - n;
//		else result += b;
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i<= n; i++)
//	{
//		string temps;
//		int temp;
//		cin >> temp >> temps;
//		temp_pair = pair<int, string>(temp, temps);
//		actors[i] = temp_pair;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		operation(a, b);
//	}
//	cout << actors[result].second;
//	return 0;
//}
////1601 高精度a+b
//class giantint
//{
//private:
//	int value[10001] = {0};
//	int bits = 0;
//public:
//	giantint(int n)
//	{
//		for ( bits = 1; n>0;bits++,n/=10 )
//		{
//			value[bits] = n % 10;
//		}
//	}
//	giantint()
//	{
//		bits = 0;
//	}
//	friend ostream& operator << (ostream& output, giantint a);
//	friend istream& operator >>(istream& input, giantint& a);
//	friend giantint operator + (giantint a, giantint b);
//};
//ostream& operator << (ostream& output, giantint a)
//{
//	if (a.bits == 0)
//	{
//		cout << 0;
//		return output;
//	}
//	for (int i = a.bits; i >0 ; i--)
//	{
//		output << a.value[i];
//	}
//	return output;
//}
//istream& operator >>(istream& input, giantint& a)
//{
//	string s;
//	input >> s;
//	a.bits = s.length();
//	for (int i = s.length(),j=0; i >0; i--,j++)
//	{
//		a.value[i] = s[j] - '0';
//	}
//	return input;
//}
//giantint operator +(giantint a, giantint b)
//{
//	giantint c;
//	int max;
//	if (a.bits > b.bits) max = a.bits;
//	else max = b.bits;
//	for (int i = 1; i <= max; i++)
//	{
//		c.value[i] += a.value[i] + b.value[i];
//		c.value[i + 1] = c.value[i] / 10;
//		c.value[i] %= 10;
//	}
//	if (c.value[max + 1] == 0)c.bits = max;
//	else c.bits = max + 1;
//	return c;
//}
//int main()
//{
//	giantint a, b;
//	cin >> a >> b;
//	cout << a + b; 
//	return 0;
//}
//1303 高精度A*B 
string a, b;
int a1[50001], b1[50001];
int c[50001];
int main()
 {
	cin >> a>> b;
	int la = a.length();
	int lb = b.length();
	int lc = la+lb;
	for (int i = la; i >= 0; i--)
	{
		a1[la-i] = a[i] - '0';
	}
	for (int i = lb; i >= 0; i--)
	{
		b1[lb-i] = b[i] - '0';
	}
	for (int i = 1; i <= la; i++)
	{
		for (int j = 1; j <= lb; j++)
		{
			c[i + j - 1] += a1[i] * b1[j];
		}
	}
	for (int i = 1; i <= lc; i++)
	{
		c[i + 1] += c[i] / 10;
		c[i] %= 10;
	}
	while (c[lc] == 0 && lc > 1)lc--;
	for (int i = lc; i > 0 ; i--)
	{
		cout << c[i];
	}
	return 0;
}