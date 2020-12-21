//插入排序

/**
 * 它的工作原理是通过构建有序序列，
 * 对于未排序数据，在已排序序列中从后向前扫描，找到相应位置并插入。
 */
#include "InsertSorting.h"

int* InsertSorting::Sorting(const int arr[],int len)
{
    RequestNewArray(arr, len);
    if (arrPtr == NULL) return nullptr;

    int j = 0;
    for(int i = 1;i < len;i++)
    {
        j = i - 1;
        int tmp = arrPtr[i];
        while(j >=0 && arrPtr[j] > tmp)
        {
            arrPtr[j + 1] = arrPtr[j];
            --j;
        }
        arrPtr[j + 1] = tmp;
        printArr(arrPtr,len,i);
        //cout  << "j: " << j << " , i: " << i << endl << endl;
    }
    return arrPtr;
}


