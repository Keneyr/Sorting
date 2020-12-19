//选择排序

/**
 *首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置

 *再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。

 *重复第二步，直到所有元素均排序完毕。
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