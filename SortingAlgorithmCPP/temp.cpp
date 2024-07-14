//#include <iostream>
//
//using namespace std;
//
//void PushValueInFirst(int arr[], int value, int SizeOfArray) {
//    for (int i = SizeOfArray - 1; i >= 0; i--) {
//        arr[i + 1] = arr[i];
//    }
//    arr[0] = value;
//}
//void DisplayArray(int arr[], int SizeOfArray) {
//    for (int i = 0; i <= SizeOfArray; i++) {
//        cout << arr[i];
//    }
//}
//
//int main() {
//    const int SizeOfArray = 8;
//    int arr[SizeOfArray + 1] = { 2,3,4,5,6,7,8,9 };
//    PushValueInFirst(arr, 1, SizeOfArray);
//    DisplayArray(arr, SizeOfArray);
//}