#pragma once
#include "Sort.h"

class SelectSorting : public Sort
{
public:
    SelectSorting(int _len) : Sort(_len) { cout << "ѡ��������" << endl; };
    ~SelectSorting(){ cout << "ѡ����������~" << endl; };
    SelectSorting(const SelectSorting &other) : Sort(other) {};
public:
    int* Sorting(const int arr[], int len) override;
};