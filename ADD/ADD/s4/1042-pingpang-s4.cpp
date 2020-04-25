#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
	char temp;
	string s;
	while (true)
	{
		cin >> temp;
		if (temp == 'E')break;
		s += temp;
		//s.push_back(temp);
	}
	if (s.size() == 0)
	{
		cout << "0:0" << endl << endl << "0:0";
		return 0;
	}
	int win=0 ;
	int lose=0 ;
	int pro11,pro21;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'W') win++;
		else lose++;
		if ((win >= 11 || lose >= 11) && abs(win - lose) >= 2)
		{
			cout << win << ':' << lose << endl;
			win = 0;
			lose = 0;
		}
	}
	cout << win << ':' << lose << endl << endl;
	win = 0;
	lose = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'W') win++;
		else lose++;
		if ((win >= 21 || lose >= 21) && abs(win - lose) >= 2)
		{
			cout << win << ':' << lose << endl;
			win = 0;
			lose = 0;
		}
	}
	cout << win << ':' << lose << endl;
	return 0;


}