#include<iostream>
#include<math.h>
#include<algorithm>

using namespace std;
//int condition1(int i)
//{
//	if (i % 2 == 0)return 1;
//	return 0;
//}
//int condition2(int i)
//{
//	if (i > 4 && i <= 12) return 1;
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int n1 = condition1(n);
//	int n2 = condition2(n);
//	cout << n1 * n2 << ' ' << (n1 + n2 >= 1 ? 1 : 0) <<' '<< (n1 + n2 == 1 ? 1 : 0) << ' ' << (n1 + n2 == 0 ? 1 : 0);
//	return 0;
//}

//int main()
//{
//	int n;
//	cin >> n;
//	if ((n % 4 == 0&&n%100!=0) || (n % 400 == 0)) cout << 1;
//	else cout<<0;
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	cout << "Today, I ate ";
//	if (n == 0 || n == 1)cout << n << " apple.";
//	else cout << n << " apples.";
//	return 0;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	int t1 = n * 5;
//	int t2 = 11 + 3 * n;
//	t1 > t2 ? cout << "Luogu" : cout << "Local";
//	return 0;
//}
//int main()
//{
//	double w;
//	double h;
//	double r;
//	cin >> w >> h;
//	r = w / pow(h, 2);
//	if (r < 18.5) cout<< "Underweight";
//	else if (r >= 18.5 && r < 24) cout<< "Normal";
//	else if (r >= 24)  cout<<r<<endl<<"Overweight";
//	return 0;
//}
//int main()
//{
//	int a[3] = {0};
//	for(int i=0 ;i<3;i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + 3);
//	for (int i=0; i < 3; i++)
//	{
//		cout << a[i]<<' ';
//	}
//	return 0;
//}
//int main()
//{
//	int y, m;
//	cin >> y >> m;
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//	{
//		if (m == 2)
//		{
//			cout << 29;
//			return 0;
//		}
//	}
//	switch (m)
//	{
//	case 1:;
//	case 3:;
//	case 5:;
//	case 7:;
//	case 8:;
//	case 10:;
//	case 12:cout << 31; break;
//	case 4:;
//	case 6:;
//	case 9:;
//	case 11:cout << 30; break;
//	case 2:cout << 28; break;
//	}
//	return 0;
//}
//int main()
//{
//	int a[3];
//	cin >> a[0] >> a[1] >> a[2];
//	sort(a, a + 3);
//	cout << a[0] / __gcd(a[0], a[2]) << '/' << a[2] / __gcd(a[0], a[2]);
//	return 0;
//}]
//int main()
//{
//	int a[3];
//	for (int i = 0; i < 3; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + 3);
//	if (a[0] + a[1] < a[3])
//	{
//		cout << "Not triangle" << endl;
//		return 0;
//	}
//	if (pow(a[0], 2) + pow(a[1], 2) == pow(a[2], 2))cout << "Right triangle" << endl;
//	if (pow(a[0], 2) + pow(a[1], 2) > pow(a[2], 2))cout << "Acute triangle" << endl;
//	if (pow(a[0], 2) + pow(a[1], 2) < pow(a[2], 2))cout << "Obtuse triangle" << endl;
//	if (a[0] == a[1] || a[1] == a[2]||a[0]==a[2])cout << "Isosceles triangle" << endl;
//	if (a[0] == a[1] && a[1] == a[2])
//	{
//		cout << "Equilateral triangle" << endl;
//		return 0;
//	}
//	return 0;
//}
int main()
{
	int A[3];
	int a[3] = { 0 };
	string ABC;
	cin >> A[0] >> A[1] >> A[2];
	cin >> ABC;
	sort(A, A + 3);
	for (int i = 0; i < ABC.length(); i++)
	{
		switch (ABC[i])
		{
		case 'A':cout << A[0] <<' '; break;
		case 'B':cout << A[1] << ' '; break;
		case 'C':cout << A[2] << ' '; break;
		}
	}
	return 0;
}