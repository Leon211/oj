#include <iostream>
using namespace std;
int count = 0;
bool ava = false;
int used[9] = { 0 };
int result[9] = { 0 };
int lasted[3];
void dfs(int a,int b,int c,int count)
{
	if (count == 9)
	{
		for (int i = 0; i <= 6; i=i+3)
		{
			lasted[i/3] = result[i] * 100 + result[i + 1] * 10 + result[i + 2];
		}
		if (lasted[0] * b == lasted[1] * a && lasted[0] * c == lasted[2] * a)
		{
			cout << lasted[0] << " " << lasted[1] << " " << lasted[2] << endl;
			ava = true;
		}
	}
	for (int i = 0; i <9 ; i++)
	{
		if (used[i] == 0)
		{
			used[i] = 1;
			result[count] = i + 1;
			dfs(a, b, c, count + 1);
			result[count] = 0;
			used[i] = 0;
		}

	}

}
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	dfs(a, b, c, 0);
	if (ava == false) cout << "No!!!";
	return 0;
}