#include <iostream>

using namespace std;

/*
	输入：整形数组
	输出：该数组中的，哪一个滑动窗口的元素和最大
*/
int maxSum(int arr[], int nSize, int nWndSize)
{
	int nRtnMaxSum = 0;
	int offsetWnd = nWndSize;
	for (int nStep = nWndSize-1; nStep < nSize; nStep++)
	{
		// 计算当前滑动窗口和
		int nTempSum = 0;
		for (int i = 0; i < offsetWnd; i++)
		{
			nTempSum += arr[i];
		}
		
		// 比较上一个滑动窗口和与当前滑动窗口和大小
		if (nTempSum>=nRtnMaxSum)
		{
			nRtnMaxSum = nTempSum;
		}

		// 移步下一个滑动窗口
		offsetWnd++;
	}
	return nRtnMaxSum;
}

int main(int argc, char** argv[])
{
	// test data
	int arr[] = {2,3,4,2,6,2,5,1};

	cout << maxSum(arr, 8, 3) << endl;

	getchar();
	return 0;
}
