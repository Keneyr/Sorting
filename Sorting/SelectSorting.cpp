//ѡ������

/**
 *������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ��

 *�ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��

 *�ظ��ڶ�����ֱ������Ԫ�ؾ�������ϡ�
 */

#include "SelectSorting.h"

int* SelectSorting::Sorting(const int arr[], int len)
{
    RequestNewArray(arr, len);
    if (arrPtr == NULL) return nullptr;
    int minIndex;
    for(int i = 0; i < len-1; i++)
    {
        minIndex = i;
        for(int j = i + 1; j < len; j++)
        {
            if(arrPtr[j] < arrPtr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arrPtr[i];
        arrPtr[i] = arrPtr[minIndex];
        arrPtr[minIndex] = temp;
    }

    return arrPtr;
}