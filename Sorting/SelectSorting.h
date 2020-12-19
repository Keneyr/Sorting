#pragma once
#include "Sort.h"

class SelectSorting : public Sort
{
public:
    SelectSorting(int _len) : Sort(_len) { cout << "选择排序构造" << endl; };
    ~SelectSorting(){ cout << "选择排序析构~" << endl; };
    SelectSorting(const SelectSorting &other) : Sort(other) {};
public:
    int* Sorting(const int arr[], int len) override;
};