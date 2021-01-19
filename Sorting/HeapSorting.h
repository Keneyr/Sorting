#pragma once
#include "Sort.h"

class HeapSorting:public Sort
{
public:
    HeapSorting(int _len) :Sort(_len) { cout << "¶ÑÅÅÐò¹¹Ôì" << endl; };
    ~HeapSorting() { cout << "¶ÑÅÅÐòÎö¹¹" << endl; };
    HeapSorting(const HeapSorting &other) :Sort(other) {};

public:
    int* Sorting(const int arr[], int len) override;

private:
    void BuildMaxHeap(int* arrPtr, int len);
    void MaxHeapify(int* arrPtr, int index,int len);
    void swapKey(int& root, int& node);
    int leftChildIndex(int index);
    int rightChildIndex(int index);
};