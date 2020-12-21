#pragma once
#include "Sort.h"

class ShellSorting : public Sort
{
public:
	ShellSorting(int _len) : Sort(_len) { cout << "Ï£¶ûÅÅÐò¹¹Ôì" << endl; }
	~ShellSorting() { cout << "Ï£¶ûÅÅÐòÎö¹¹~" << endl; }
	ShellSorting(const ShellSorting &other) : Sort(other) {};
public:
	int* Sorting(const int arr[], int len) override;

};