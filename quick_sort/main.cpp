#include "Sort.h"

int main(){
    int arr[] = {5, 2, 4, 1, 3, 10, 6, 7, 8, 9};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array: ";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";

    quickSort(arr, 0, arr_size - 1);

    cout << "\nSorted: ";
    for(int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";

    return 0;
}
