#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main()
{
	string number,temp;
	int count=1;
	int sum=0;
	cin>> number;
	if (number[1] == '-' && number[5] == '-' &&
		number[11] == '-' && number.length() == 13)
	{
		for (int i = 0; i < number.size()-1; i++)
		{
			if (number[i] != '-')
			{
				sum = sum + atoi(number.substr(i,1).c_str()) * count;
				count++;
			}
		}
		char reg;
		if (sum % 11 ==10) reg = 'X';
		else reg = sum % 11 + '0';

		if (reg == number[number.size()-1])
		{
			cout << "Right";
		}
		else
		{
			number[12] = reg;
			cout << number;
		}
	}
	else cout << "error";
	return 0;
}