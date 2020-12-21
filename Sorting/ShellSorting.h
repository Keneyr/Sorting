#pragma once
#include "Sort.h"

class ShellSorting : public Sort
{
public:
	ShellSorting(int _len) : Sort(_len) { cout << "ϣ��������" << endl; }
	~ShellSorting() { cout << "ϣ����������~" << endl; }
	ShellSorting(const ShellSorting &other) : Sort(other) {};
public:
	int* Sorting(const int arr[], int len) override;

};