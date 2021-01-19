#include "HeapSorting.h"
#include <math.h>

int* HeapSorting::Sorting(const int arr[], int len)
{
    RequestNewArray(arr, len);
    if (arrPtr == NULL) return nullptr;

    BuildMaxHeap(arrPtr,len);
    cout << "建立大顶堆~输出大顶堆结果:" << endl;
    printArr(arrPtr, len,-1);

    for(int i = len - 1; i > 0; i--)
    {
        swapKey(arrPtr[0], arrPtr[i]);
        len = len - 1;
        MaxHeapify(arrPtr, 0,len);
    }
    return arrPtr;
}

void HeapSorting::BuildMaxHeap(int* arrPtr, int len)
{
    for (int i = len / 2; i >= 0; i--)
        MaxHeapify(arrPtr, i,len);
}
void HeapSorting::MaxHeapify(int* arrPtr,int index,int len)
{
    int l = leftChildIndex(index);
    int r = rightChildIndex(index);
    int largest = 0;
    if(l<len && arrPtr[l]>arrPtr[index])
    {
        largest = l;
    }else
    {
        largest = index;
    }
    if(r<len && arrPtr[r]>arrPtr[largest])
    {
        largest = r;
    }
    if(largest!=index)
    {
        swapKey(arrPtr[index], arrPtr[largest]);
        MaxHeapify(arrPtr, largest,len);
    }
}

void HeapSorting::swapKey(int& root, int& node)
{
    int tmp = root;
    root = node;
    node = tmp;
}
int HeapSorting::leftChildIndex(int index)
{
    return 2 * index + 1;
}
int HeapSorting::rightChildIndex(int index)
{
    return 2 * index + 2;
}


