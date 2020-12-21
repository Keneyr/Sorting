//冒泡排序

/**
 * 比较相邻的元素。如果第一个比第二个大，就交换他们两个。

 * 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。

 * 针对所有的元素重复以上的步骤，除了最后一个。

 * 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。
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
            if(arrPtr[j] > arrPtr[j+1])
            {
                int tmp = arrPtr[j + 1];
                arrPtr[j + 1] = arrPtr[j];
                arrPtr[j] = tmp;
            }
        }
        printArr(arrPtr, len,i);
    }
    return arrPtr;
}