#include <iostream>
using namespace std;
pair<int, int> A[5000];
int Partition(int low, int high)
{
	pair<int, int> pivot = A[low];
	while (low < high)
	{
		while ((low < high) &&
				((A[high].second < pivot.second) ||
				(A[high].second == pivot.second) && (A[high].first > pivot.first)))--high;
		A[low] = A[high];
		while (low < high &&
			((A[low].second > pivot.second) ||
				(A[low].second == pivot.second) && (A[low].first < pivot.first)))++low;
		A[high] = A[low];
	}
	A[low] = pivot;
	return low;

}
void QuickSort(int low,int high)
{
	if (low < high)
	{
		int pivotops = Partition(low, high);
		QuickSort(low, pivotops - 1);
		QuickSort(pivotops + 1, high);
	}

}
int main()
{
	pair<int, int> temp_pair;
	int n, m, temp_num, temp_point;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> temp_num >> temp_point;
		temp_pair = pair<int, int>(temp_num, temp_point);
		A[i] = temp_pair;
	}
	QuickSort(0, n - 1);
	int max;
	m * 1.5 > n ? max = n : max = m * 1.5;
	while (true)
	{
		if (max == n || A[max].second != A[max - 1].second)break;
		max++;
	}
	cout << A[max-1].second << " " << max << endl;
	for (int i = 0; i < max; i++)
	{
		cout << A[i].first << " " << A[i].second << endl;
	}
	return 0;
}