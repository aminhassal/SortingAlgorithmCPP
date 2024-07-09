// SortingAlgorithmCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

/////////////////////////////////////////////////////////

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

/////////////////////////////////////////////////////////

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/////////////////////////////////////////////////////////

int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // اختيار آخر عنصر كعنصر محوري
    int i = (low - 1); // مؤشر لعناصر أصغر من العنصر المحوري

    for (int j = low; j <= high - 1; j++) {
        // إذا كان العنصر الحالي أصغر من العنصر المحوري، قم بزيادة المؤشر وقم بتبديل العنصرين
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // قم بتبديل العنصر المحوري مع العنصر الأول أكبر منه
    swap(arr[i + 1], arr[high]);

    return (i + 1);
}

void quickSort(int arr[], int low, int high) { // Log(n) <<-----
    if (low < high) {
        // قم بتقسيم المصفوفة واسترداد المؤشر الذي يفصل المصفوفة إلى مجموعتين
        int pi = partition(arr, low, high);

        // قم بتطبيق Quick Sort على النصفين الأيسر والأيمن من المصفوفة المقسمة
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    //////////////////////////////////////////////////////////////////////////////////////
    // 
    //bubbleSort:-----------------------------

    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    //////////////////////////////////////////////////////////////////////////////////////
    
    //selectionSort:-----------------------------

    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int n = sizeof(arr) / sizeof(arr[0]);

    //selectionSort(arr, n);

    //cout << "Sorted array: \n";
    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}

    //////////////////////////////////////////////////////////////////////////////////////
    //insertionSort:-----------------------------

    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int n = sizeof(arr) / sizeof(arr[0]);

    //insertionSort(arr, n);

    //cout << "Sorted array: \n";
    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}

    //////////////////////////////////////////////////////////////////////////////////////
    //quickSort:-----------------------------

    //int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    //int n = sizeof(arr) / sizeof(arr[0]);

    //quickSort(arr, 0, n - 1);

    //cout << "Sorted array: \n";
    //for (int i = 0; i < n; i++) {
    //    cout << arr[i] << " ";
    //}

}