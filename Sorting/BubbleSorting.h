#pragma once
#include "Sort.h"

class BubbleSorting : public Sort
{
public:
    BubbleSorting(int _len) : Sort(_len) { cout << "ð��������" << endl; };
    ~BubbleSorting(){ cout << "ð����������" << endl; };
    BubbleSorting(const BubbleSorting &other) : Sort(other){};
public:
    int* Sorting(const int arr[], int len) override;
};
