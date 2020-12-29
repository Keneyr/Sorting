//ϣ������
//�Ƚ�����������ļ�¼���зָ��Ϊ���������зֱ����ֱ�Ӳ�������
//�����������еļ�¼����������ʱ���ٶ�ȫ���¼��������ֱ�Ӳ�������
//https://blog.csdn.net/qq_39207948/article/details/80006224


/**
 * ѡ��һ���������� t1��t2��������tk������ ti > tj, tk = 1��
 * ���������и��� k�������н��� k ������
 * ÿ�����򣬸��ݶ�Ӧ������ ti�����������зָ�����ɳ���Ϊ m �������У�
 * �ֱ�Ը��ӱ����ֱ�Ӳ������򡣽���������Ϊ 1 ʱ������������Ϊһ����������
 * ���ȼ�Ϊ�������еĳ��ȡ�
 */
#include "ShellSorting.h"

int* ShellSorting::Sorting(const int arr[], int len)
{
	RequestNewArray(arr, len);
	if (arrPtr == NULL) return nullptr;

	int temp, gap = 1, j;
	while (gap < len / 3) //��̬����������
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