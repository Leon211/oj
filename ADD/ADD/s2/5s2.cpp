#include <iostream>
using namespace std;
int main()
{
	int weekday, days;
	int length = 0;
	cin >> weekday >> days;
	if (weekday != 6 && weekday != 7)
	{
		length = 250 * (6 - weekday);
	}
	days = days - (8-weekday);
	length += (days / 7 )* 250 * 5;
	if(days%7!=6)
	{
		length += (days % 7) * 250;
	}

	//while (true)
	//{
	//	if (weekday != 6 && weekday != 7)length += 250;
	//	if (weekday == 7) { weekday = 1; }
	//	else { weekday++; }
	//	days--;
	//	if (days == 0)break;
	//}
	cout << length;
	return 0;
}
