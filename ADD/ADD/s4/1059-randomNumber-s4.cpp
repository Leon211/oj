#include <iostream>
using namespace std;
int result[100];
int Partition(int low, int high)
{
	int pivot = result[low];
	while (low < high)
	{
		while (low < high && result[high] >= pivot)--high;
		result[low] = result[high];
		while (low < high && result[low] <= pivot)++low;
		result[high] = result[low];
	}
	result[low] = pivot;
	return low;

}
void QuickSort(int low,int high)
{
	if (low < high)
	{
		int pivotpos = Partition(low, high);
		QuickSort(low, pivotpos - 1);
		QuickSort(pivotpos + 1, high);
	}
}
int main()
{
	int M;
	int final[100];
	int count = 0;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> result[i];
	}
	QuickSort(0, M - 1);
	for (int i = 0; i < M; i++)
	{
		if (i == 0 || result[i] != result[i - 1])
		{
			final[count] = result[i];
			count++;
		}
	}
	cout << count << endl;
	for (int i = 0; i < count; i++)
	{
		cout << final[i] << " ";
	}
	return 0;
}