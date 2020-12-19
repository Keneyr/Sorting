#pragma once
#include "global.h"

class Sort
{
public:
    Sort(int _len) : len(_len), arrPtr(NULL) { cout << "Sort ¹¹Ôì" << endl; };
    virtual ~Sort();
    Sort(const Sort &other);
public:
    virtual int* Sorting(const int arr[],int len);
    void printArr(const int arr[], int len, int index);
    void RequestNewArray(const int arr[], int len);

protected:
    int* arrPtr;
    int len;

};