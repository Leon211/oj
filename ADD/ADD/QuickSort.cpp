#include <iostream>
#include <climits>
using namespace std;

//int Partition(int A[], int low, int high)
//{
//	//三数取中
//	int min = INT_MIN, max = INT_MAX;
//	int ori_low = low, ori_high = high;
//	int length = ori_high - ori_low;
//	int temp[3] = { A[low], A[(low + high) / 2], A[high] };
//	if (length >= 3)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			if (max < temp[i])max = temp[i];
//			if (min > temp[i])min = temp[i];
//		}
//		for (int i = 0; i < 3; i++)
//		{
//			if (temp[i] == temp[0] + temp[1] + temp[2] - max - min)
//			{
//				if (i == 1)
//				{
//					A[(low + high) / 2] = A[low];
//					A[low] = temp[i];
//				}
//				if (i == 2)
//				{
//					A[high] = A[low];
//					A[low] = temp[i];
//				}
//			}
//		}
//	}
//	int pivot = A[low];
//
//	int same_low = 0, same_high = 0;
//	while (low < high)
//	{
//		while (low < high && A[high] >= pivot)
//		{
//			if (length>=3 && A[high] == pivot)
//			{
//				swap(A[high], A[ori_high-same_high]);
//				same_high++;
//			}
//			--high;
//		}
//		A[low] = A[high];
//		while (low < high && A[low] <= pivot)
//		{
//			if (length >= 3 && A[low] == pivot)
//			{
//				swap(A[ori_low + same_low], A[low]);
//				same_low++;
//			}
//			++low;
//		}
//		A[high] = A[low];
//	}
//	A[low] = pivot;
//	if (length >= 3)
//	{
//		for (int i =ori_low; i < ori_low+same_low; i++)
//		{
//			if (A[i] != A[low - 1 - i])
//			{
//				swap(A[i], A[low - 1 - i]);
//			}
//		}
//		for (int i = ori_high; i < ori_high-same_high; i--)
//		{
//			if (A[i] != A[low + 1 + ori_high - i])
//			{
//				swap(A[i], A[low + 1 + ori_high - i]);
//			}
//		}
//	}
//	
//	return low;
//}

void QuickSort(int A[], int low,int high)
{
	//提高时间复杂度三数取中或随机或相同元素聚集
	if (low < high)
	{
		int max = INT_MIN, min = INT_MAX;
		int ori_low = low, ori_high = high;
		int length = ori_high - ori_low;
		int temp[3] = { A[low], A[(low + high) / 2], A[high] };
		//三数取中
		if (length >= 3)
		{
			for (int i = 0; i < 3; i++)
			{
				if (max < temp[i])max = temp[i];
				if (min > temp[i])min = temp[i];
			}
			for (int i = 0; i < 3; i++)
			{
				if (temp[i] == temp[0] + temp[1] + temp[2] - max - min)
				{
					if (i == 1)
					{
						A[(low + high) / 2] = A[low];
						A[low] = temp[i];
						break;
					}
					if (i == 2)
					{
						A[high] = A[low];
						A[low] = temp[i];
					}
				}
			}
		}
		int pivot = A[low];

		int same_low = 0, same_high = 0;
		while (low < high)
		{
			while (low < high && A[high] >= pivot)
			{
				if (length >= 3 && A[high] == pivot)
				{
					swap(A[high], A[ori_high - same_high]);
					same_high++;
				}
				--high;
			}
			A[low] = A[high];
			while (low < high && A[low] <= pivot)
			{
				if (length >= 3 && A[low] == pivot)
				{
					swap(A[ori_low + same_low], A[low]);
					same_low++;
				}
				++low;
			}
			A[high] = A[low];
		}
		A[low] = pivot;
		//聚集元素
		if (length >= 3)
		{
			for (int i = ori_low; i < ori_low + same_low; i++)
			{
				if (A[i] != A[low - 1 - i + ori_low])
				{
					swap(A[i], A[low - 1 - i + ori_low]);
				}
			}
			for (int i = ori_high; i > ori_high - same_high; i--)
			{
				if (A[i] != A[low + 1 + ori_high - i])
				{
					swap(A[i], A[low + 1 + ori_high - i]);
				}
			}
		}
		int pivotops = low;
		//int pivotops = Partition(A, low, high);
		//QuickSort(A, low, pivotops - 1);
		//QuickSort(A, pivotops + 1, high);
		QuickSort(A, ori_low, pivotops - 1 - same_low);
		QuickSort(A, pivotops + 1 + same_high, ori_high);
	}
}
int main()
{
	int N;
	cin >> N;
	int A[100000];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	QuickSort(A, 0, N - 1);
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}