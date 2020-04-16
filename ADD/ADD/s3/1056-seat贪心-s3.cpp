#include <iostream>
using namespace std;
void coutMax(int K, int row[],int used[])
{
	for (int i = 0; i < K; i++)
	{
		int max = 0, index = -1;
		for (int j = 0; j < 1000; j++)
		{
			if (max < row[j])
			{
				max = row[j];
				index = j;
			}
		}
		//for (int j = 0; j < 1000; j++)
		//{
		//	if (row[j] != 0)
		//	{
		used[index] = 1;
		row[index] = 0;
		//	}
		//}

	}
}
void longCout(int i,int row[])
{
	for (int j = 0; j < i; j++)
	{
		if (row[j] == 1)
			cout << j <<" ";
	}
}

int main()
{
	int M, N, K, L, D;
	int x1, y1, x2, y2;
	cin >> M >> N >> K >> L >> D;
	int row[1000] = { 0 }, used_row[1000] = {0};
	int col[1000] = { 0 }, used_col[1000] = {0};
	for (int i = 0; i < D; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		if (x1 == x2)
		{
			y1 < y2 ? col[y1]++ : col[y2]++;
		}
		if (y1 == y2)
		{
			x1 < x2 ? row[x1]++ : row[x2]++;
		}
	}
	coutMax(K, row, used_row);
	coutMax(L,col,used_col);
	longCout(1000, used_row);
	cout << endl;
	longCout(1000, used_col);
	return 0;
}