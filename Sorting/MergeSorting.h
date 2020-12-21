#pragma once
#include "Sort.h"

class MergeSorting : public Sort
{
public:
	MergeSorting(int _len) : Sort(_len) { cout << "归并排序构造" << endl; };
	~MergeSorting() { cout << "归并排序析构~" << endl; };
	MergeSorting(const MergeSorting &other) : Sort(other) {};
public:
	int* Sorting(const int arr[], int len) override;
private:
	void MergeSort(int arr[], int start, int end);
	void Merge(int arr[], int start, int middle, int end);
};
