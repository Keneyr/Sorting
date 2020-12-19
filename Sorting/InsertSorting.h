#pragma once
#include "Sort.h"

class InsertSorting : public Sort
{
public:
    InsertSorting(int _len) : Sort(_len) { cout << "插入排序构造" << endl; };
    ~InsertSorting() { cout << "插入排序析构~" << endl; };
    InsertSorting(const InsertSorting &other) : Sort(other){};
public:
    int* Sorting(const int arr[],int len) override;
};
