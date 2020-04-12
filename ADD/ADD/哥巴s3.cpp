#include <iostream>
#include <math.h>
using namespace std;
bool isprime(int i)//ÅĞ¶ÁÖÊÊı£¬6³ı·¨
{
	if (i <= 1)return false;
	if (i == 2 || i == 3)return true;
	if (i % 6 != 1 && i % 6 != 5) return false;
	for (int j = 5; j <= sqrt(i); j+=6)
	{
		if (i % j == 0 || i % (j + 2) == 0)return false;
	}
	return true;
}
int main()
{
	int a,b,c,n,sqrt_n;
	cin >> n;
	sqrt_n = sqrt(n);
	for (a = 2; a <= sqrt_n; ++a)
	{
		if (isprime(a))
		{
			for (b = a; b <= sqrt_n;++b)
			{
				if (isprime(b))
				{
					c = n - b - a;
					if (isprime(c))
					{
						cout << a << " " << b << " " << c << " ";
						return 0;
					}
				}
			}
		}
	}

}
