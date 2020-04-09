//#include <iostream>
//using namespace std;
//int count = 0;
//int used[9] = {0 }; 
//int result[9] = { 0 };	
//int last[3];
//
//void DFS(int count)
//{
//	if (count == 9) 
//	{
//
//		for (int i = 0; i <= 6; i=i+3)
//		{
//			last[i/3] = result[i] * 100 + result[i + 1] * 10 + result[i + 2];
//		}
//		if (last[0] * 2 == last[1] && last[0] * 3 == last[2])
//		{
//			cout << last[0] << " " << last[1] << " " << last[2] << endl;
//		}
//	}
//	for (int j = 0; j < 9; j++)
//	{
//		if (used[j] == 0)
//		{ 
//			used[j] = 1;
//			result[count] = j + 1;
//			DFS(count+1);
//			used[j] = 0;
//		}
//	}
//}
//int main()
//{
//	DFS(0);
//	return 0;
//}