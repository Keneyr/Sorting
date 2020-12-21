//归并排序

/**
 * 申请空间，使其大小为两个已经排序序列之和，该空间用来存放合并后的序列；

 * 设定两个指针，最初位置分别为两个已经排序序列的起始位置；

 * 比较两个指针所指向的元素，选择相对小的元素放入到合并空间，并移动指针到下一位置；

 * 重复步骤 3 直到某一指针达到序列尾；

 * 将另一序列剩下的所有元素直接复制到合并序列尾。
 */

#include "MergeSorting.h"

int* MergeSorting::Sorting(const int arr[], int len)
{
	RequestNewArray(arr, len);
	if (arrPtr == NULL) return nullptr;
	MergeSort(arrPtr, 0, len);
}

void MergeSorting::MergeSort(int arr[], int start, int end)
{
	if (arr == nullptr || end - start <= 1)
		return;

	//划分为两个子数组并递归调用自身进行排序
	int middle = (start + end) / 2;
	MergeSort(arr, start, middle);
	MergeSort(arr, middle, end);

	//合并排序完成的子数组
	Merge(arr, start, middle, end);
}

// 下面函数实现合并功能，输入三个下标参数表示了两个子数组, :[nStart_, nMiddle)和[nMiddle, nEnd)
void MergeSorting::Merge(int arr[], int start, int middle, int end)
{
	if (arr == nullptr || start >= middle || middle >= end)
		return;

	//建立一个临时数组存放中间数据
	int index = 0;
	int *tempArray = new int[end - start];

	int i = 0;
	int _left = start;
	int _right = middle;
	while (start <= middle && middle <= end)
	{
		tempArray[i++] = arr[_left] <= arr[_right] ? arr[_left++] : arr[_right++];
	}
	while (start <= middle)
	{
		tempArray[i++] = arr[_left++];
	}
	while (_right <= end)
	{
		tempArray[i++] = arr[_right++];
	}
	for (int j = 0; j < end - start; j++)
	{
		arr[start + j] = tempArray[j];
	}
	delete[] tempArray;
}
