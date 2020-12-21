//�鲢����

/**
 * ����ռ䣬ʹ���СΪ�����Ѿ���������֮�ͣ��ÿռ�������źϲ�������У�

 * �趨����ָ�룬���λ�÷ֱ�Ϊ�����Ѿ��������е���ʼλ�ã�

 * �Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ�ã�

 * �ظ����� 3 ֱ��ĳһָ��ﵽ����β��

 * ����һ����ʣ�µ�����Ԫ��ֱ�Ӹ��Ƶ��ϲ�����β��
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

	//����Ϊ���������鲢�ݹ���������������
	int middle = (start + end) / 2;
	MergeSort(arr, start, middle);
	MergeSort(arr, middle, end);

	//�ϲ�������ɵ�������
	Merge(arr, start, middle, end);
}

// ���溯��ʵ�ֺϲ����ܣ����������±������ʾ������������, :[nStart_, nMiddle)��[nMiddle, nEnd)
void MergeSorting::Merge(int arr[], int start, int middle, int end)
{
	if (arr == nullptr || start >= middle || middle >= end)
		return;

	//����һ����ʱ�������м�����
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
