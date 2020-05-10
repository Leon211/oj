#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
const double pi = 3.141593;
int main()
{
	int Q;
	cin >> Q;
	switch (Q)
	{
	case 1:
		cout << "I love Luogu!";
		break;
	case 2:
		cout << '6' << ' ' << '4';
		break;
	case 3:
		cout << 3 << endl << 12 << endl << 2 << endl;
		break;
	case 4:
		cout << fixed << setprecision(3) << (double)500 / 3;
		break;
	case 5:
		cout << (220+260)/(20+12);
		break;
	case 6:
		cout << sqrt(pow(6,2)+pow(9,2));
		break;
	case 7:
		cout << 110 << endl;
		cout << 90 << endl;
		cout << 0;
		break;
	case 8:
		cout << 2 * pi * 5 << endl << pi * pow(5, 2) <<endl << 4.0 / 3 * pi * pow(5, 3);
		break;
	case 9:
		cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2;
		break;
	case 10:
		cout << '9';
		break;
	case 11:
		cout << 100.0 / 3;
		break;
	case 12:
		cout << 13 << endl << 'R' << endl;
		break;
	case 13:
		cout << (int)(pow(4.0 / 3 * pi * (pow(4, 3) + pow(10, 3)), double (1) / 3));
		break;
	case 14:
		cout << 50;
		break;
	
	}
	return 0;
}