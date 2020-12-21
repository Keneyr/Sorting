#pragma once
#include "Sort.h"

class MergeSorting : public Sort
{
public:
	MergeSorting(int _len) : Sort(_len) { cout << "�鲢������" << endl; };
	~MergeSorting() { cout << "�鲢��������~" << endl; };
	MergeSorting(const MergeSorting &other) : Sort(other) {};
public:
	int* Sorting(const int arr[], int len) override;
private:
	void MergeSort(int arr[], int start, int end);
	void Merge(int arr[], int start, int middle, int end);
};
