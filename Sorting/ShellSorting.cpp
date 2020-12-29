//希尔排序
//先将整个待排序的记录序列分割成为若干子序列分别进行直接插入排序，
//待整个序列中的记录“基本有序”时，再对全体记录进行依次直接插入排序。
//https://blog.csdn.net/qq_39207948/article/details/80006224


/**
 * 选择一个增量序列 t1，t2，……，tk，其中 ti > tj, tk = 1；
 * 按增量序列个数 k，对序列进行 k 趟排序；
 * 每趟排序，根据对应的增量 ti，将待排序列分割成若干长度为 m 的子序列，
 * 分别对各子表进行直接插入排序。仅增量因子为 1 时，整个序列作为一个表来处理，
 * 表长度即为整个序列的长度。
 */
#include "ShellSorting.h"

int* ShellSorting::Sorting(const int arr[], int len)
{
	RequestNewArray(arr, len);
	if (arrPtr == NULL) return nullptr;

	int temp, gap = 1, j;
	while (gap < len / 3) //动态定义间隔序列
	{
		gap = gap * 3 + 1;
	}
	for (; gap > 0; gap = floor(gap / 3)) 
	{
		cout << "gap: " << gap << endl;
		for (int i = gap; i < len; i++)
		{
			temp = arrPtr[i];
			for (j = i - gap; j >= 0 && arrPtr[j] > temp; j -= gap)
			{
				arrPtr[j + gap] = arrPtr[j];
			}
			arrPtr[j + gap] = temp;
			printArr(arrPtr, len, i);
		}
		
	}
	return arrPtr;
}