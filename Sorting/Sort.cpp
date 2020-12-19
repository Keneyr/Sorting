#include "Sort.h"

//目前没想好怎么用
Sort::Sort(const Sort &other)
{
    //*arrPtr = *obj.arrPtr; //拷贝值

    arrPtr = new int[len];
    for(int i=0;i<len;i++)
    {
        arrPtr[i] = other.arrPtr[i];
    }
}

//主要是为了不改变传过来的数组内存，另拷贝一份内存对它进行排序，方便在main函数中对各种排序算法进行对比
void Sort::RequestNewArray(const int arr[], int len)
{
    arrPtr = new int[len];
    for (int i = 0; i < len; i++)
    {
        arrPtr[i] = arr[i];
    }
}
Sort::~Sort()
{
    if(arrPtr)
    {
        delete arrPtr;
    }
    cout << "Sort 析构~" << endl;
}

int* Sort::Sorting(const int arr[],int len)
{
    return arrPtr;
}

void Sort::printArr(const int arr[], int len, int index = -1)
{
    if(index != -1)
    {
        cout << "第 " << index << "趟：";
    }
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
