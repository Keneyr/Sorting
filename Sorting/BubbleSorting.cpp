//ð������

/**
 * �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������

 * ��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ��ⲽ���������Ԫ�ػ�����������

 * ������е�Ԫ���ظ����ϵĲ��裬�������һ����

 * ����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�
 */

#include "BubbleSorting.h"

int* BubbleSorting::Sorting(const int arr[], int len)
{
    RequestNewArray(arr, len);
    if (arrPtr == NULL) return nullptr;

    for(int i = 0; i < len - 1; i++)
    {
        for(int j = 0; j < len-1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int tmp = arr[j + 1];
                arrPtr[j + 1] = arrPtr[j];
                arrPtr[j] = tmp;
            }
        }
        printArr(arrPtr, len,i);
    }
    return arrPtr;
}