#include <iostream>
using namespace std;

int result[21][21][21] = {0};
long w(int a, int b, int c)
{
	if (a <= 0 || b <=0 ||c <= 0) return 1;
	if (a > 20 || b > 20 || c > 20)
	{
		result[20][20][20] = w(20, 20, 20);
		return result[20][20][20];
	}
	if (result[a][b][c] != 0) return result[a][b][c];
	if (a < b && b < c)
	{
		result[a][b][c - 1] = w(a, b, c - 1);
		result[a][b - 1][c - 1] = w(a, b - 1, c - 1);
		result[a ][b - 1][c ] = w(a, b - 1, c);
		return  result[a][b][c - 1] + result[a][b - 1][c - 1] - result[a][b - 1][c];

	}
	result[a - 1][b][c] = w(a - 1, b, c);
	result[a - 1][b - 1][c] = w(a - 1, b - 1, c);
	result[a - 1][b][c - 1] = w(a - 1, b, c - 1);
	result[a - 1][b - 1][c - 1] = w(a - 1, b - 1, c - 1);
	return  result[a - 1][b][c] + result[a - 1][b - 1][c] + result[a - 1][b][c - 1] - result[a - 1][b - 1][c - 1];
}
int main()
{
	long a=0, b=0, c=0;
	while (true)
	{
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1) break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
	}
	return 0;
}