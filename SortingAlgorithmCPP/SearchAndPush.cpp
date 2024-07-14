#include <iostream>
using namespace std;
//اضافة للبداية
void PushValueInFirst(int arr[], int value, int SizeOfArray) {
    for (int i = SizeOfArray - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
}
//اضافة للنهاية
void PushValueInLast(int arr[], int value, int SizeOfArray) {
    arr[SizeOfArray] = value;
}
//اضافة للوسط
void PushValueInMiddle(int arr[], int value, int SizeOfArray) {
    int middle = SizeOfArray / 2;

    // نقل العناصر بدءًا من الوسط إلى اليمين
    for (int i = SizeOfArray - 1; i >= middle; i--) {
        arr[i + 1] = arr[i];
    }

    arr[middle] = value;
}
//البحث الثنائي
int BinarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // إذا كانت القيمة الموجودة في الموقع المتوسط تساوي القيمة المستهدفة، نعيد الموقع المتوسط
        if (arr[mid] == target) {
            return mid;
        }

        // إذا كانت القيمة الموجودة في الموقع المتوسط أكبر من القيمة المستهدفة، ننقل right للموقع المتوسط - 1
        else if (arr[mid] > target) {
            right = mid - 1;
        }

        // إذا كانت القيمة الموجودة في الموقع المتوسط أصغر من القيمة المستهدفة، ننقل left للموقع المتوسط + 1
        else {
            left = mid + 1;
        }
    }

    // إذا لم يتم العثور على القيمة المستهدفة، نعيد -1
    return -1;
}

//دالة العرض

void DisplayArray(int arr[], int SizeOfArray) {
    for (int i = 0; i <= SizeOfArray; i++) {
        cout << arr[i];
    }
}
int main() {
const int SizeOfArray = 8;
int arr[SizeOfArray + 1] = { 2,3,4,5,6,7,8,9 };
PushValueInFirst(arr, 1, SizeOfArray);
PushValueInLast(arr, 10, SizeOfArray);
DisplayArray(arr, SizeOfArray);
}



//int main() {
//    int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int SizeOfArray = 10;
//    int value = 99;
//
//    cout << "Before adding value in the middle: ";
//    for (int i = 0; i < SizeOfArray; i++) {
//        cout << arr[i] << " ";
//    }
//
//    PushValueInMiddle(arr, value, SizeOfArray);
//    SizeOfArray++;
//
//    cout << "\nAfter adding value in the middle: ";
//    for (int i = 0; i < SizeOfArray; i++) {
//        cout << arr[i] << " ";
//    }
//}


//int main() {
//    int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15 };
//    int SizeOfArray = sizeof(arr) / sizeof(arr[0]);
//    int target = 7;
//
//    int result = BinarySearch(arr, 0, SizeOfArray - 1, target);
//
//    if (result == -1) {
//        cout << "Element not found" << endl;
//    }
//    else {
//        cout << "Element found at index " << result << endl;
//    }
//
//    return 0;
//}