#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int save= 0;
	int save_count = 0;
	int cost_month;
	int last_month = 0;
	//int over_month = 0;
	//bool firstmonth = false;
	for (int month = 1; month <= 12; month++)
	{
		cin >> cost_month;
		if (300 + last_month >=cost_month)
		{
			last_month = 300 + last_month - cost_month;
			save_count = last_month / 100;
			save = save + 100 * save_count;
			last_month = last_month - 100 * save_count;			
		}
		else
		{
			cout << "-" << month;
			exit(0);
		}
	}
	cout << save*1.2+ last_month;
	return 0;
}