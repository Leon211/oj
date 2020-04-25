#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
using namespace std;
int main()
{
	string A[] = { "zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty" ,"a","both","another","first","second","third"};
	int b[] = { 0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,00,1,4,1,1,4,9 };
	string temps;
	int words[6] = {0}, contains = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> temps;
		for (int j = 0; j < 27; j++)
		{
			if (A[j] == temps)
			{
				words[contains++] = b[j];
				break;
			}
		}
	}
	if (contains == 0) 
	{
		cout << '0';
		return 0;
	}
	sort(words, words + contains);
	for (int i = 0; i < contains; i++)
	{
		if (i == 0)
		{
			if (words[i] != 0)	cout << words[i];
			continue;
		}
		if (i == 1 && words[0] == 0) { cout << words[i]; }
		else { cout << setfill('0') << setw(2) << words[i]; }
	}
	return 0;

}
