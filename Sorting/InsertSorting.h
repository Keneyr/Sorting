#pragma once
#include "Sort.h"

class InsertSorting : public Sort
{
public:
    InsertSorting(int _len) : Sort(_len) { cout << "����������" << endl; };
    ~InsertSorting() { cout << "������������~" << endl; };
    InsertSorting(const InsertSorting &other) : Sort(other){};
public:
    int* Sorting(const int arr[],int len) override;
};
