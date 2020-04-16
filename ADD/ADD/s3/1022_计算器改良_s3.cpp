#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
	string equation=" ";
	cin >> equation;
	char result;
	bool isLeft = true;
	string numbers, unkown;
	
	double countu=0,sum=0;
	//int count;
	for (int j = 0; j < equation.length(); j++)
	{
		if (equation[j] == '=')
		{
			isLeft = false;
			equation.erase(j,1);

		}
		if (isLeft)
		{    //左
			string temp;
			if (equation[j] <= 'z' && equation[j] >= 'a') unkown += equation[j];
			else if (equation[j] == '+' || equation[j] == '-')
			{
				temp = equation[j];
				j++;
				while (equation[j] != '+' && equation[j] != '-' && equation[j] != '=')
				{
					temp = temp + equation[j];
					j++;
				}
				j--;
				if (temp[temp.length()-1] <= 'z' && temp[temp.length()-1] >= 'a')
				{
					unkown += temp;
				}
				else numbers += temp;
			}
			else //左无符号开始
			{	
				temp = "+";
				while (equation[j] != '+' && equation[j] != '-' && equation[j] != '=')
				{
					temp = temp + equation[j];
					j++;
				}
				j--;
				if (temp[temp.length()-1] <= 'z' && temp[temp.length()-1] >= 'a')
				{
					unkown += temp;
				}
				else numbers += temp;
			}
			
		}
		else 
		{
			string temp;
			if (equation[j] <= 'z' && equation[j] >= 'a') unkown += equation[j];
			else if (equation[j] == '+')
			{
				temp = '-';
				j++;
				while (equation[j] != '+' && equation[j] != '-' && equation[j] != '=' )
				{
					temp = temp + equation[j];
					j++;
					if (j == equation.length())break;
				}
				j--;
				if (temp[temp.length()-1] <= 'z' && temp[temp.length()-1] >= 'a')
				{
					unkown += temp;
				}
				else numbers += temp;
			}
			else if (equation[j] == '-')
			{
				temp = '+';
				j++;
				while (equation[j] != '+' && equation[j] != '-' && equation[j] != '=')
				{
					temp = temp + equation[j];
					j++;
					if (j == equation.length())break;
				}
				j--;
				if (temp[temp.length()-1] <= 'z' && temp[temp.length()-1] >= 'a')
				{
					unkown += temp;
				}
				else numbers += temp;
			}
			else//右无号
			{
				temp = "-";
				while (equation[j] != '+' && equation[j] != '-' && equation[j] != '=')
				{
					temp = temp + equation[j];
					j++;
				}
				j--;
				if (temp[temp.length()-1] <= 'z' && temp[temp.length()-1] >= 'a')
				{
					unkown += temp;
				}
				else numbers += temp;
			}
		}
	}
	result = unkown[unkown.length()-1];
	for (int i = 0; i < unkown.length(); )
	{
		string tempu;
		if (unkown[i] == '+')
		{
			i++;
			tempu = "";
			while (unkown[i] != result)
			{
				tempu += unkown[i];
				++i;
			}
			countu += atof(tempu.c_str());
			++i;
		}
		else if (unkown[i] == '-')
		{
			i++;
			tempu = "";
			while (unkown[i] != result)
			{
				tempu += unkown[i];
				++i;
			}
			countu -= atof(tempu.c_str());
			++i;
		}
		else if (unkown[i] == result) { ++countu; ++i; }
	}
	for (int i = 0; i < numbers.length(); )
	{
		string tempu;
		if (numbers[i] == '+')
		{
			i++;
			tempu = "";
			while (numbers[i] != '+'&& numbers[i] != '-')
			{
				tempu += numbers[i];
				++i;
				if (i == numbers.length())break;
			}
			sum += atof(tempu.c_str());
		}
		else if (numbers[i] == '-')
		{
			i++;
			tempu = "";
			while (numbers[i] != '+' && numbers[i] != '-')
			{
				tempu += numbers[i];
				++i;
				if (i == numbers.length()) break;
			}
			sum -= atof(tempu.c_str());
		}
		else { sum += numbers[i]; ++i; }
	}
	cout << fixed << setprecision(3);
	if (sum == 0 || countu == 0)
	{
		double zero = 0;
		cout << result << "=" << zero;
	}
	else cout << result<<"="<<(-sum) / countu;
	return 0;
}