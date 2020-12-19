#include "Sort.h"

//Ŀǰû�����ô��
Sort::Sort(const Sort &other)
{
    //*arrPtr = *obj.arrPtr; //����ֵ

    arrPtr = new int[len];
    for(int i=0;i<len;i++)
    {
        arrPtr[i] = other.arrPtr[i];
    }
}

//��Ҫ��Ϊ�˲��ı䴫�����������ڴ棬����һ���ڴ�����������򣬷�����main�����жԸ��������㷨���жԱ�
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
    cout << "Sort ����~" << endl;
}

int* Sort::Sorting(const int arr[],int len)
{
    return arrPtr;
}

void Sort::printArr(const int arr[], int len, int index = -1)
{
    if(index != -1)
    {
        cout << "�� " << index << "�ˣ�";
    }
    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
