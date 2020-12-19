//https://github.com/hustcc/JS-Sorting-Algorithm
/**
 * È«²¿ÉýÐòÅÅÐò
 */
#include "InsertSorting.h"
#include "SelectSorting.h"
#include "BubbleSorting.h"

const int arr[] = {2,5,8,4,9,1,6};

int main()
{
    int len = sizeof(arr) / sizeof(int);
    int *arrPtr = NULL;

    cout << "--------------------------------------" << endl;
    Sort *baseSort = new InsertSorting(len);
    baseSort->printArr(arr, len,-1);
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///²åÈëÅÅÐò
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *insertSort = new InsertSorting(len);
    arrPtr = insertSort->Sorting(arr, len);

    //ÅÐ¶ÏÄÚ´æ¿½±´ÊÇ·ñÉúÐ§
    insertSort->printArr(arrPtr, len,-1);
    //insertSort->printArr(arr, len,-1);
    delete insertSort;
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///Ñ¡ÔñÅÅÐò
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *selectSort = new SelectSorting(len);
    arrPtr = selectSort->Sorting(arr, len);
    insertSort->printArr(arrPtr, len,-1);
    delete selectSort;
    cout << "--------------------------------------" << endl;


    //////////////////////////////////////////////////////////////////////////
    ///Ã°ÅÝÅÅÐò
    //////////////////////////////////////////////////////////////////////////
    cout << "--------------------------------------" << endl;
    Sort *bubbleSort = new BubbleSorting(len);
    arrPtr = bubbleSort->Sorting(arr, len);
    bubbleSort->printArr(arrPtr, len, -1);
    delete selectSort;
    cout << "--------------------------------------" << endl;


    system("pause");
}
