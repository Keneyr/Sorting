#pragma once
#include "Sort.h"

class BubbleSorting : public Sort
{
public:
    BubbleSorting(int _len) : Sort(_len) { cout << "Ã°ÅÝÅÅÐò¹¹Ôì" << endl; };
    ~BubbleSorting(){ cout << "Ã°ÅÝÅÅÐòÎö¹¹" << endl; };
    BubbleSorting(const BubbleSorting &other) : Sort(other){};
public:
    int* Sorting(const int arr[], int len) override;
};
