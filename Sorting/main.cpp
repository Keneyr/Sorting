//https://github.com/hustcc/JS-Sorting-Algorithm
/**
 * ȫ����������
 */
#include "InsertSorting.h"
#include "SelectSorting.h"
#include "BubbleSorting.h"
#include "ShellSorting.h"
#include "MergeSorting.h"

const int arr[] = {2,5,8,4,9,1,6};

int main()
{
    int len = sizeof(arr) / sizeof(int);
    int *arrPtr = NULL;

    cout << "--------------------------------------" << endl;
    Sort *baseSort = new Sort(len);
    baseSort->printArr(arr, len,-1);
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///��������
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *insertSort = new InsertSorting(len);
    arrPtr = insertSort->Sorting(arr, len);

    //�ж��ڴ濽���Ƿ���Ч
    insertSort->printArr(arrPtr, len,-1);
    //insertSort->printArr(arr, len,-1);
    delete insertSort;
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///ѡ������
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *selectSort = new SelectSorting(len);
    arrPtr = selectSort->Sorting(arr, len);
    insertSort->printArr(arrPtr, len,-1);
    delete selectSort;
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///ð������
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *bubbleSort = new BubbleSorting(len);
    arrPtr = bubbleSort->Sorting(arr, len);
    bubbleSort->printArr(arrPtr, len, -1);
    delete bubbleSort;
    cout << "--------------------------------------" << endl;


	//////////////////////////////////////////////////////////////////////////
	///ϣ������
	//////////////////////////////////////////////////////////////////////////
	cout << "--------------------------------------" << endl;
	Sort *shellSort = new ShellSorting(len);
	arrPtr = shellSort->Sorting(arr, len);
	shellSort->printArr(arrPtr, len, -1);
	delete shellSort;
	cout << "--------------------------------------" << endl;
	
	//////////////////////////////////////////////////////////////////////////
	///�鲢����
	//////////////////////////////////////////////////////////////////////////
    /*cout << "--------------------------------------" << endl;
    Sort *mergeSort = new MergeSorting(len);
    arrPtr = mergeSort->Sorting(arr, len);
    mergeSort->printArr(arrPtr, len, -1);
    delete mergeSort;*/



	system("pause");
    return 0;
}
