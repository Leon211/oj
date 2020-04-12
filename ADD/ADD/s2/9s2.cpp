#include <iostream>
using namespace std;
int main()
{
	int nums[10000] = { 0 };
	int i = 0;
	int temp = 0;
	while (true)
	{
		cin >> temp;
		if (temp == 0)break;
		nums[i] = temp;
		i++;
	}
	for (int j = i; j >= 0; j--)
	{
		if(nums[j]!=0)		cout << nums[j]<<" ";
	}
	return 0;
}