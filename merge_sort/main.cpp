#include "Sort.h"

using namespace std;

int main(){

    //int arr[] = {3, 7, 4, 1, 5, 2, 6, 10, 50, 26};
    int arr[6] = {3, 1, 2, 5, 4};
    //int arr_size = sizeof(arr) / sizeof(arr[0]);

    //cout << "Array" << endl;
    //for(int i = 0; i < arr_size; i++)
        //cout << arr[i] << " ";

    cout << "Array" << endl;
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    //MergeSort(arr, 0, arr_size - 1);
    MergeSort(arr, 0, 6);

    //cout << "\nSorted" << endl;
    //for(int i = 0; i < arr_size; i++)
      //  cout << arr[i] << " ";

    cout << "\nSorted" << endl;
    for(int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}
